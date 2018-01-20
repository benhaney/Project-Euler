(1..500).each do |a|
  (a..500).each do |b|
    c = Math.sqrt(a*a+b*b)
    if (a + b + c == 1000)
      puts a*b*c
      exit
    end
  end
end
