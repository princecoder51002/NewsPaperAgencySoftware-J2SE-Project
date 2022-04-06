# methods are just functions and we can call them from anywhere

def sayhi # defining a function
puts "hello prince"

end #ends a function

# calling
puts "top"
sayhi #execution of method
puts "bottom"

def sayhi2(name,age) #passing arguements
  puts ("hello " + name + " , you are cool" + age.to_s)
end

sayhi2("prince",34)

# we can also give efault values as arguements

def sayhi3(name="sehaj",age=-1) # inner arguements are less effective than passing arguements while calling
  puts ("hello " + name + " , you are cool" + age.to_s)
end

sayhi3("prince")

# Returning statements in methods

def cube(num)
  num*num*num
end

puts cube(3)

# actually it returns the last returnable statements

def cube(num)
  num*num*num
  5
end

puts cube(3)

# but if we want to avoid it , we have to use the keyword return so as to confirm that this method will end this

def cube(num)
  return num*num*num, 70 # we can return multiple values (never studied about this)
end

puts cube(3)
puts cube(3)[1] #[1] this is will ensure that 70 will be at first index bcz when we return multiple values we may or may not be get confused
                     #hence it will return the value given at that particular index
