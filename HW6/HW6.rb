input = gets 

input = input.gsub(/\bf/, "gh")
input = input.gsub(/sh\b/, "ti")
input = input.gsub(/\Bi\B/, "o")

puts input
