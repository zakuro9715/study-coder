a, d = gets.split.map(&:to_f)
n = gets.to_i
(1..n).each do |i|
  x = d * i % (4 * a)
  case
  when x < a
    puts("#{x} 0")
  when x < 2 * a
    printf("#{a} #{x - a}", a, x - a)
  when x < 3 * a
    printf("#{a - (x - 2 * a)} #{a}")
  else
    printf("0 #{a - (x - 3 * a)}")
  end
  puts
end
