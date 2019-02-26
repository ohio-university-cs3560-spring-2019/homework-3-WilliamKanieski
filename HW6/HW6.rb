input = gets 

input = input.gsub(/\bf/, "gh")
input = input.gsub(/\bF/, "Gh")
input = input.gsub(/sh\b/, "ti")
input = input.gsub(/Sh\b/, "Ti")
input = input.gsub(/sH\b/, "tI")
input = input.gsub(/SH\b/, "TI")
input = input.gsub(/\Bi\B/, "o")
input = input.gsub(/\BI\B/, "O")


puts input
