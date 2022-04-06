
puts "ENTER NUMBER A: "
num1=$stdin.gets.chomp().to_f

puts "ENTER NUMBER B: "
num2=$stdin.gets.chomp().to_f

puts "ENTER OPERATION YOU WANT TO BE PERFORMED: "
op=$stdin.gets.chomp()

if op=="+"
  puts (num1+num2)
elsif op=="-"
  puts (num1-num2)
elsif op=="*"
  puts (num1*num2)
elsif op=="/"
  puts (num1/num2)
else
  puts "INVALID OPERATOR"
end
