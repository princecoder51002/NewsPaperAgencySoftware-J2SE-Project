freinds = Array["prince","saksham","hardik","riya","rishabh"]

puts freinds[0] #indices starts with 0
puts freinds[3]

#we can access from backwards
puts freinds[-2] #indices starts with 0
puts freinds[-1]

#we can access by range also

puts freinds[0,2] #not including 2nd index

# we can modify the array also
freinds[0]="yoooo"

puts freinds[0] # we can modify any element of an array by just knowing index

# we can also create an array without passing any value in starting

freinds2 = Array.new

freinds2[0]="jasmine"
freinds2[5]="riya"

puts freinds2
puts freinds2.length() #it will return the length of an array
puts freinds2.include? "prince" # it will return boolean that prince is there or not in Array
puts freinds2.reverse() #it will reverse all the elements

puts freinds.sort() # it will return the sorted Array

# freinds3 = Array["kevin",1,"prince"]
# puts freinds3
# it will return an error bcz we cant store the int and char in same array
