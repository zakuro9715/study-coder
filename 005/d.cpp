#include<iostream>
#include<vector>
#include<utility>
#include<functional>
#include<algorithm>
using namespace std;
typedef pair<int, int> P;

int costs[1000];
vector<int> v[1000];
bool removed[1000];
vector<P> a;
int main()
{
  int N, M;
  cin >> N >> M;
  for(int i = 0; i < N; i++)
  {
    int x;
    cin >> x;
    costs[i] = x;
    a.push_back(make_pair(x, i));
  }
  for(int i = 0; i < M; i++)
  {
    int a, b;
    cin >> a >> b;
    a--; b--;
    v[a].push_back(b);
    v[b].push_back(a);
  }
  sort(a.begin(), a.end(), greater<P>());

  int cost = 0;
  for(int i = 0; i < a.size(); i++)
  {
    int x = a[i].first, y = a[i].second;
    for(int j = 0; j < v[y].size(); j++)
    {
      int to = v[y][j];
      if(!removed[to])
        cost +=  costs[to];
    }
    removed[y] = true;
  }
  cout << cost << endl;
}
