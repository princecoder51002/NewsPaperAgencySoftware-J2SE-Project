# BUILDING A GUESSING GAME AS WE MAKE IT IN C PROGRAMMING ALSO

secret_word = "prince" #word has to be guess
guess = "" # what user guesses
guess_count=0
guess_limit = 10 # limit for user guesses
out_of_guesses = false # condition if user didnt guess

while guess!=secret_word and !out_of_guesses # condition that guessed word is not matched with secrent word and also ran out of guesses

 if guess_count<guess_limit # condition for ran out of guesses
  puts "Enter your guess: "
  guess = $stdin.gets.chomp()
  guess_count+=1

else
  out_of_guesses=true
end
end

if out_of_guesses #checking whether users tells right word in limited guesses
  puts "YOU LOSE AND RAN OUT OF GUESSES"
else
puts ("YOU WON!  AND ATTEMPTED IN " + guess_count.to_s + " COUNTS")
end
