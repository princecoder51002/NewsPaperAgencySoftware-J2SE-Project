#


def get_day_name(day)

day_name = ""
case day
when "mon" # when day=mon
  day_name="Monday"
when "tue"
  day_name="Tuesday"
when "wed"
  day_name="Wednesday"
when "thrus"
  day_name="Thrusday"
when "fri"
  day_name="friday"
when "sat"
  day_name="saturday"
when "sun"
  day_name="sunday"
else
  day_name = "INVALID ABBREVIATION"
end
return day_name
end

puts get_day_name("thrus")
