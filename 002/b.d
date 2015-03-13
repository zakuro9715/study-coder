module main;
import std.stdio;
import std.conv;
import std.algorithm;

int[] ar;

void main()
{
  int x, k, r = -1;
  readf("%d %d\n", &x, &k);

  ar ~= x;
  ar ~= 0;
  for(auto i = 0; i < k; i++)
  {
    int n, m, nr;
    readf("%d ", &n);
    if(n == 1)
    {
      int a, b;
      readf("%d %d\n", &a, &b);
      ar ~= a;
      ar ~= b;
    }
    else
    {
      int a;
      readf("%d\n", &a);
      ar ~= a;
    }
  }
  
  sort(ar);
  auto s1 = 0, s2 = 0;
  for(auto i = 1; i < ar.length; i++)
  {
    auto s = ar[i] - ar[i - 1] - 1;
    s1 += s / 2 + s % 2;
    s2 += s;
  }
  writeln(s1, " ", s2);
}
