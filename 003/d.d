module main;
import std.stdio;
import std.algorithm;
int N = 1100000;
bool[1100000] not_prime;
void main()
{
  int a, b, k;
  readf("%d %d %d\n", &a, &b, &k);
  not_prime[0] = not_prime[1] = true;
  for(auto i = 2; i < N; i++)
  {
    for(auto j = i + i; j < N; j += i)
      not_prime[j] = true;
  }

  auto x = a - 1;
  while(k)
  {
    if(x == b)
    {
      writeln(-1);
      return;
    }
    if(!not_prime[++x])
      k--;
  }
  auto ans = x - a + 1;
  for(auto i = a ; x <= b; i++)
  {
    while(k && x <= b)
    {
      if(!not_prime[++x])
        k--;
    }
    ans = max(ans, x - i + 1);
    if(!not_prime[i])
      k++;
    if(not_prime[x])
      break;
  }
  writeln(ans);
}
