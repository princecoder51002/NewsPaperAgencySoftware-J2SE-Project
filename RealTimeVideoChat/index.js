const express = require("express");
const socket = require("socket.io");
const app = express();

var server = app.listen(4000, function () {
  console.log("hii prince");
});

app.use(express.static("public"));

var io = socket(server);

io.on("connection", function (socket) {
  console.log(socket.id);

  socket.on("join", function (roomName) {
    var rooms = io.sockets.adapter.rooms;
    console.log(rooms);
    var room = io.sockets.adapter.rooms.get(roomName); // checking room

    if (room == undefined) {
      socket.join(roomName);
      socket.emit("created");
    } else if (room.size == 1) {
      socket.join(roomName);
      socket.emit("joined");
    } else socket.emit("full");
  });

  socket.on("ready", function (roomName) {
    socket.broadcast.to(roomName).emit("ready");
  });

  socket.on("candidate", function (candidate, roomName) {
    socket.broadcast.to(roomName).emit("candidate", candidate);
  });

  socket.on("offer", function (offer, roomName) {
    socket.broadcast.to(roomName).emit("offer", offer);
  });

  socket.on("answer", function (answer, roomName) {
    socket.broadcast.to(roomName).emit("answer", answer);
  });
});
