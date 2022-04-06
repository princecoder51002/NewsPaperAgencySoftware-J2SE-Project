# EXPLANATION IN NOTES

class Question

attr_accessor :prompt, :answer

def initialize(prompt,answer)
@prompt=prompt
@answer=answer
end
end

p1= "what color are apple?\n(a)red\n(b)blue\n(c)black\n(d)orange"
p2= "what color are banana?\n(a)red\n(b)blue\n(c)yellow\n(d)orange"
p3= "what color are pears?\n(a)red\n(b)green\n(c)black\n(d)orange"

questions = [
  Question.new(p1, "a"),
  Question.new(p2, "c"),
  Question.new(p3, "b")
]

def run_test(questions)
answer = ""
score = 0
for question in questions
puts question.prompt
answer = $stdin.gets.chomp()

if answer == question.answer
 score+=10
end
end

puts ("you got " + score.to_s + "/" + "30")
end

run_test(questions)
