X, K = gets.split.map(&:to_i)

puts(
  [0, *K.times.flat_map{ gets.split.map(&:to_i).drop 1 }.sort, X]
    .each_cons(2).map { |x, y| [(y - x) / 2, y - x - 1] }
    .transpose.map { |x| x.inject(:+) }
    .join(' ')
)
