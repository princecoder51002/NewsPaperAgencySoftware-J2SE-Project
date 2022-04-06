var socket = io.connect("http://localhost:4000");

var divVideoChatLobby = document.getElementById("video-chat-lobby");
var divVideoChat = document.getElementById("video-chat-room");
var joinButton = document.getElementById("join");
var userVideo = document.getElementById("user-video");
var peerVideo = document.getElementById("peer-video");
var roomInput = document.getElementById("roomName");
var creator = false;

var iceServers = {
  iceServers: [
    {
      urls: "stun:stun.services.mozilla.com",
    },
    {
      urls: "stun:stun1.google.com:19302",
    },
  ],
};

var rtcPeerConnection;
var userStream;

joinButton.addEventListener("click", function () {
  if (roomInput.value == "") alert("Plz Enter a Room name");
  else {
    socket.emit("join", roomInput.value);
  }
});

socket.on("created", function () {
  creator = true;
  navigator.mediaDevices
    .getUserMedia({ audio: true, video: { width: 1920, height: 1080 } })
    .then(function (mediaStream) {
      userStream = mediaStream;
      divVideoChatLobby.style = "display:none";
      userVideo.srcObject = mediaStream;
      userVideo.onloadedmetadata = function (e) {
        userVideo.play();
      };
    })
    .catch(function (err) {
      ("Couldnt access User Media");
    });

  socket.emit("ready", roomInput.value);
});

socket.on("joined", function () {
  creator = false;
  navigator.mediaDevices
    .getUserMedia({ audio: true, video: { width: 1280, height: 720 } })
    .then(function (mediaStream) {
      userStream = mediaStream;
      divVideoChatLobby.style = "display:none";
      userVideo.srcObject = mediaStream;
      userVideo.onloadedmetadata = function (e) {
        userVideo.play();
      };
    })
    .catch(function (err) {
      ("Couldnt access User Media");
    });
});

socket.on("full", function () {
  alert("Room Is Full , And Cant Join");
});

socket.on("ready", function () {
  if (creator) {
    rtcPeerConnection = new RTCPeerConnection(iceServers); // RTCPeerConnection is an interface
    rtcPeerConnection.onicecandidate = OnIceCandidateFunction;
    rtcPeerConnection.ontrack = OnTrackFunction;
    rtcPeerConnection.addTrack(userStream.getTracks()[0], userStream);
    rtcPeerConnection.addTrack(userStream.getTracks()[1], userStream);
    rtcPeerConnection.createOffer(
      function (offer) {
        rtcPeerConnection.setLocalDescription(offer);
        socket.emit("offer", offer, roomInput.value);
      },
      function (error) {
        console.log(error);
      }
    );
  }
});

socket.on("candidate", function (candidate) {
  var iceCandidate = new RTCIceCandidate(candidate);
  rtcPeerConnection.addIceCandidate(iceCandidate);
});

socket.on("offer", function (offer) {
  if (!creator) {
    rtcPeerConnection = new RTCPeerConnection(iceServers); // RTCPeerConnection is an interface
    rtcPeerConnection.onicecandidate = OnIceCandidateFunction;
    rtcPeerConnection.ontrack = OnTrackFunction;
    rtcPeerConnection.addTrack(userStream.getTracks()[0], userStream);
    rtcPeerConnection.addTrack(userStream.getTracks()[1], userStream);
    rtcPeerConnection.setRemoteDescription(offer);
    rtcPeerConnection.createAnswer(
      function (answer) {
        rtcPeerConnection.setLocalDescription(answer);
        socket.emit("answer", answer, roomInput.value);
      },
      function (error) {
        console.log(error);
      }
    );
  }
});

socket.on("answer", function (answer) {
  rtcPeerConnection.setRemoteDescription(answer);
});

function OnIceCandidateFunction(event) {
  if (event.candidate) {
    socket.emit("candidate", event.candidate, roomInput.value);
  }
}

function OnTrackFunction(event) {
  peerVideo.srcObject = event.streams[0];
  peerVideo.onloadedmetadata = function (e) {
    peerVideo.play();
  };
}
