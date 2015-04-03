#include<iostream>
#include<utility>
#include<vector>
#include<algorithm>
using namespace std;
typedef pair<int, int> P;

vector<P> p;
vector<int> ans;
int main()
{
  int N, K;
  cin >> N >> K;
  for(int i = 0; i < N; i++)
  {
    int a;
    cin >> a;
    p.push_back(make_pair(a, i + 1));
  }
  sort(p.begin(), p.end());
  int s = 0;
  for(int i = 0; i < p.size(); i++)
  {
    if(s + p[i].first > K)
      break;
    s += p[i].first;
    ans.push_back(p[i].second);
  }
  cout << ans.size() << endl;
  if(!ans.size())
    return 0;
  for(int i = 0; i < ans.size() - 1; i++)
    cout << ans[i] << " ";
  cout << ans.back() << endl;
}
