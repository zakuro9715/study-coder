def f(a, b)
  v = [0]
  t = true
  while a > 0 && b > 0
    nx = t ? v[-1] : (v[-1] + 1) % 2
    v.push(nx)
    t = !t
    if nx == 0
      a -= 1
    else
      b -= 1
    end
  end
  while a > 0
    v.push(0)
    a -= 1
  end
  while b > 0
    v.push(1)
    b -= 1
  end

  x = 0
  (2..v.length).each do |i|
    x += 1 if (v[i] == v[i - 1])
  end
  x
end

a, b = gets.split.map(&:to_i)
x = [f(a, b), f(b, a)].max
puts "#{x} #{a + b - x - 1}"
