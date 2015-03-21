program main(input, output);
var a, b, n, i, j: integer;
var m: array[0..23,0..59] of integer;
var ans: integer = 0;
begin
  for i := 0 to 23 do
    for j := 0 to 59 do
      m[i,j] := 0;
  read(n);
  for i := 1 to n do
  begin
    read(a);
    read(b);
    m[a,b] := m[a,b] + 1;
  end;
  for i := 0 to 23 do
    for j := 0 to 59 do
      if ans < m[i,j] then
        ans := m[i,j];
        
  writeln(ans);
end.
