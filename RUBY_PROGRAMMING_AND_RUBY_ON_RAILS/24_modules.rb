# MODULES ARE JUST CONTAINERS WHERE WE CAN STORE GROUP OF METHODS
# SOMETIMES WHEN WE ARE DECLARING METHODS WHICH ARE DOING SAME SORT OF THING , WE CAN PUT THEM IN A CONTAINER CALLED MODULES TO GIVE A CLEANER LOOK
# TO OUR PROGRAM AND KEEP THEM AT ONE PLACE

module Tools

def sayhi(name)
  puts "hello #{name}"
end

def saybye(name)
  puts "bye #{name}"
end
end

include Tools  # ACCESSING METHODS FROM MODULES
Tools.sayhi("prince") # sayhi() method inside Tools module
Tools.saybye("hardik")

# VERY IMPORTANT AND USEFUL THING THAT WE CAN ACCESS THESE METHODS IN OTHER/DIFFERENT FILES ALSO BY DOING THIS AS FOLLOWS

# require_relative "file_name.rb"
# include Tools # module file_name
#########CODE###########
