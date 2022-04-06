# THREE BASIC IF STATEMENTS

#  wake up
# if i m hungry
#    i eat breakfast
#
# I leave my house
# if its cloudy
#   i bring an umbrella
# otherwise
#   i bring sunglasess
#
# I am at restaurant
# if i want meet
#   i order a steak
# otherwise if i want pasta
#  i order meatballs
# otherwise
#  i order a salad

ismale = true #boolean

if ismale # when ismale is true
puts "you are male"
end

ismale1 = false #boolean

if ismale1 # when ismale is true
puts "you are male"
end

ismale3 = true #boolean
istall = true
if ismale3 and istall # when ismale is true
puts "you are male and tall"
else
  puts "you are not male and not tall"
end

ismale3 = true #boolean
istall = false
if ismale3 and istall # when ismale is true
puts "you are male and tall"
else
  puts "you are not male and not tall"
end

ismale3 = true #boolean
istall = false
if ismale3 or istall # when ismale is true
puts "you are male and tall"
else
  puts "you are not male and not tall"
end

ismale4 = false #boolean
istall1 = true
if ismale4 and istall1 # when ismale is true
puts "you are male and tall"
elsif ismale4 and !istall1
  puts "you are a short male"
elsif !ismale4 and istall1
  puts "you are not male but tall"
else
  puts "you are not male and not tall"
end

# MORE ON IF statements using methods(returning a largest number among three numbers)

def max(num1,num2,num3)

if num1 >= num2 and num1>=num3 # other operators >,<,<=,>=,==,!=
  return num1
elsif num2 >= num3 and num2 >= num1
  return num2
else
  return num3
 end
end

puts max(3,40,5)

# note :- we can compare two strings also
