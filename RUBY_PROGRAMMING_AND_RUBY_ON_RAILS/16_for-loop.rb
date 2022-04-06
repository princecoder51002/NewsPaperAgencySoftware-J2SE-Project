
# FOR LOOPS

freinds = ["prince","saksham","hardik","riya"]

puts freinds[1]

for freind in freinds # here freind(can be any name) is a variable which reprsents every freind in different iteration

puts freind

end

# instead of for loop we can use this method ALSO

freinds.each do |freind|
puts freind
end

#we can also a loop through a rage

for index in 0..5

  puts index

end

# we can also specify a number at starting

6.times do |fei|
puts fei
end
