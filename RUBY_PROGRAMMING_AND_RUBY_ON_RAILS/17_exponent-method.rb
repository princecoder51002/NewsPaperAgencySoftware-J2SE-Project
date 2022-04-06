# exponent methods but as well as application of for loop

def pow(num1,num2)

result = 1

num2.times do |index|
  result = result * num1
end

# num2.times do we can also use this without using index
#   result = result * num1
# end

return result

end

puts pow(6,8)
