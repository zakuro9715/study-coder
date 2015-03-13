a, d = gets.split.map(&:to_f)
n = gets.to_i
1..n.times do |i|
  x = d * (i + 1) % (4 * a)
  case
  when x < a
    printf("%f %f", x, 0)
  when x < 2 * a
    printf("%f %f", a, x - a)
  when x < 3 * a
    printf("%f %f", a - (x - 2 * a), a)
  else
    printf("%f %f", 0, a - (x - 3 * a))
  end
  puts
end
