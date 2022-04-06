
 lucky_nums = [4,8,15,16,23,42]

# num = 10/0 # it gives zero division error

# lucky_nums["dog"] it gives typr error

# NOW TO TRACE THE ERRORS (BASIC STRUCTURE)

# put the block of code in begin and rescue which seems to break the code so that it will not affect our program and what we want on screen
# put it in rescue and end

begin
lucky_nums["DOG"] # type error
num = 10/0 #zero division error
rescue
puts "DIVISION BY ZERO ERROR"
end

# another method for mutiple error

begin
lucky_nums["DOG"] # type error
#num = 10/0 #zero division error
rescue ZeroDivisionError
puts "DIVISION BY ZERO ERROR"
# rescue TypeError
# puts "Wrong type"
rescue TypeError => e # it will very useful as it returns the understable error (we can use any variable instead of e)
puts e
end
