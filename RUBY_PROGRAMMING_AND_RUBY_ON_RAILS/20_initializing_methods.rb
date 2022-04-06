class Book

attr_accessor :title, :author, :pages
# def initialize(name) # it is an initialize method as name suggests(this name is inbuilt) and rhis method is called when an instance is created
# puts ("creating book name as " + name)
# end

def initialize(title,author,pages)
# @title refers to attribute in our class
@title = title
@author = author
@pages = pages
end

end

book1 = Book.new("french kiss","pp kines", 400) #.new() means creating a new object as well as calling initialize function 
# book1.title="prince wadhwa"
# book1.author="JK rowling"
# book1.pages=400

book2 = Book.new("kiss leads to..","ty hike", 780)
# book2.title="prince wadhwa 2"
# book2.author="JK rowling 2"
# book2.pages=478

puts book1.title
puts book1.pages
puts book1.author

puts book2.title
puts book2.pages
puts book2.author
