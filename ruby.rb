str = "b" * 500000 + "a"

puts(/b+$/.match(str))