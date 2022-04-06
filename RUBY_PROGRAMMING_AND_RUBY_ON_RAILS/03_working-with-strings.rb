puts "prince\nacademy"

puts "prince\" academy"

phrase = "puppY lehri"
puts phrase

puts phrase.upcase() # coverted entirely into uppercase
puts phrase.downcase() # coverted entirely into lowercase

phrase_1= "   prince academy   "
puts phrase_1

puts phrase_1.strip() #it will damage all the spaces between / after/ before the string

puts phrase_1.length() #it will return length of the string

puts phrase_1.include? "mankesh" #it will return boolean (i.e true/false) that string contains this word or not
puts phrase_1.include? "prince" #it will return boolean (i.e true/false) that string contains this word or not

puts phrase[1] #to access the character in a string by passing the index (index is starting with 0)
puts phrase[4] #to access the character in a string by passing the index (index is starting with 0)

puts phrase[0,7] #getting characters within a range of indices (we start the index with 0 but ends it with 3 , but it will return upto 2nd index not including 3rd index)
puts phrase.index("u") #it gives the index positon of a character
puts phrase.index("pu") #it gives the index positon of a character from which index starts according to index

# we can apply these methods to a string also (not compulsory on variable)

# example :
puts "programming".upcase()

# FOR MORE FUNCTIONS WE CAN GET FROM GOOGLE BY JUST TYPING STRING FUNCTIONS IF WE WANT IN FUTURE 
