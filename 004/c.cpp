#include<iostream>
#include<algorithm>
using namespace std;

long long a[200001], q[200001];
int main()
{
  int N, Q;
  ios::sync_with_stdio(false);
  cin >> N >> Q;
  for(int i = 0; i < N; i++)
    cin >> a[i];
  for(int i = 0; i < Q; i++)
  {
    int l, r;
    cin >> l >> r;
    q[l]++; q[r + 1]--;
  }
  for(int i = 1; i <= N; i++)
    q[i] += q[i - 1];
  sort(a, a + N + 1);
  sort(q, q + N + 1);
  long long s = 0;
  for(int i = 0; i <= N; i++)
    s += a[i] * q[i];
  cout << s << endl;
}
