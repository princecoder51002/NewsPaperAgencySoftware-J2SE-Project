# instance methods / object methods / class methods

class Student

attr_accessor :name, :major, :gpa
def initialize(name,major,gpa)
@name=name
@major=major
@gpa=gpa
end

def has_honors # method for objects and called by objects and it will always be declared/making in class
if @gpa >= 4.9
  return true
else
  return false
end
end
end

student1 = Student.new("prince","coder",4.6)
student2 = Student.new("saksham","webdev",5.0)

puts student1.has_honors
puts student2.has_honors
