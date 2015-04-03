#include<iostream>
using namespace std;

int N, K, D, dp[200][2];

int dfs(int n, bool b)
{
  if(n <= 0)
  {
    if(n == 0 && b)
      return 1;
    return 0;
  }
  if(dp[n][b] != -1)
    return dp[n][b];
  dp[n][b] = 0;
  for(int i = 1; i <= K; i++)
  {
    dp[n][b] = (dp[n][b] + dfs(n - i, b || (i >= D))) % 1000000007;
  }
  return dp[n][b];
}

int main()
{
  fill((int*)dp, (int*)dp + 400, -1);
  cin >> N >> K >> D;
  cout << dfs(N, false) << endl;
}
