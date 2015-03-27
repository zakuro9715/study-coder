program main(input, output);

uses math;

var 
  i, n, s, t, sum, v: integer;
  d: array[1..100] of integer;

function dist(s, t, dir: integer): integer;
var 
  i: integer;
  res: integer = 0;
begin
  i := s;
  while i <> t do
  begin
    inc(res, d[i]);
    inc(i, dir);
    if i < 0 then
      i := n;
    if i > n then
      i := 0;
  end;
  dist := res;
end;

begin
  sum := 0;
  readln(n);
  for i := 1 to n do
  begin
    read(d[i]);
    inc(sum, d[i]);
  end;
  readln();
  read(s);
  read(t);
  v := dist(s, t, 1);
  writeln(min(sum - v, v));
end.
