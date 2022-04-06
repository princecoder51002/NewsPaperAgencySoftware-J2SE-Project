# RUBY ALLOWS US TO CREATE OUR OWN DATA TYPES (WHICH IS CALLED A CLASS OR KNOWN AS CUSTOM DATA TYPE)

class Book #class name must be starting with capital letters

attr_accessor :title, :author, :pages # all the books have title , author and pages

end

book1 = Book.new() # we  want to create a new book / instance of Book(class)
book1.title="prince wadhwa"
book1.author="JK rowling"
book1.pages=400

puts book1.title
puts book1.pages
puts book1.author

# NOTE: we can create as many objects we want
