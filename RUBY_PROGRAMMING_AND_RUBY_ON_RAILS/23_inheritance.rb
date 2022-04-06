# INHERITANCE BASICALLY ALLOWS US TO EXTEND THE FUNCTIONALITY OF ONE CLASS INTO OTHER CLASSES (WE DIVIDED THEM IN SUPER CLASS AND SUB CLASSES)

class Chef

def make_chicken
  puts "the chef make chicken"
end

def make_salad
  puts "the chef make salad"
end

def make_special_dish
  puts "the chef makes bbq ribs"
end

end
# inheritance here : that we pass all the functionalities of normal chef to this italian chef
class ItalianChef < Chef # italian chef can do everything that normal chef can do (<,it means italian chef inherit all the properties of normal chef)
  def make_special_dish  # METHOD OVER-RIDING
    puts "the chef makes bbq ribs but in italian style"
  end

  def make_pasta # different method but only for italian chef which normal chef cant do
    puts "ialian chef can make pasta"
  end
end

chef = Chef.new()
chef.make_chicken

italian_chef = ItalianChef.new()
italian_chef.make_salad #it has qualities bcz of iheritance
italian_chef.make_special_dish
italian_chef.make_pasta
# chef.make_pasta it will give us error
