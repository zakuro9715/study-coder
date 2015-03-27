program main(input, output);
var 
  n, i: longint;
  a, b, s: integer;
begin
  s := 0;
  readln(n);
  for i := 1 to n do
  begin
    read(a);
    readln(b);
    if abs(s + a) < abs(s - b) then
    begin
      inc(s, a);
      write('A');
    end
    else
    begin
      inc(s, -b);
      write('G');
    end;
  end;
  writeln();
end.
