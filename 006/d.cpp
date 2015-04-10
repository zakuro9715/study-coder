#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;

int N, M, x[10000001], c[10000001], dd[10000001];
int main()
{
  cin >> N;
  for(int i = 0; i < N; i++)
  {
    int a;
    scanf("%d", &a);
    x[a]++;
  }
  for(int i = 2; i <= 10000000; i++)
  {
    c[i] += c[i - 1];
    if(dd[i])
      continue;
    for(int j = i; j <= 10000000; j += i)
    {
      dd[j] = true;
      c[i] += x[j];
    }
  }
  cin >> M;
  for(int i = 0; i < M; i++)
  {
    int a, b;
    scanf("%d%d", &a, &b);
    a = min(a, 10000000);
    b = min(b, 10000000);
    cout << max(0, (c[b] - c[a - 1])) << endl;
  }
}
