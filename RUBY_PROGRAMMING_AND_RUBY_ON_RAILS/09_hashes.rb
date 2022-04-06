

# HASH is basically a type of data structure where we store different bunch of informations , it is different from an array in such a a way
# that it stores a key value pair is basically we store a value and a key for this , sometimes hashes are also known as dictionaries , as in dictionary
# we have a word and a definition corresponding to it so we can say that a word is a key and definition is a value

states = {
  "pennsulvania" => "pa",
  "new york" => "ny",
  "oregon" => "or",
  # "pennsulvania" => "pa", it is not possible as same entry is not allowd i hashes
  :bathinda => "ba", #another format of input
  1 => "gf" # in addition to strings we can also use numbers
}

puts states["new york"]
puts states[:bathinda]
puts states[1]
