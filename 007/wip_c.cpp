#include<iostream>
#include<set>
#include<map>
#include<string>
using namespace std;

struct Node
{
  map<char, Node> ch;
  set<string> v;
};

Node tree;

int N, M;

bool dfs(Node& t, string& s, int n, bool b)
{
  
  for(auto& c: t.ch.)
  {
    if(!b || s[n] == c.first)
  }
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin >> N >> M;
  for(int i = 0; i < N; i++)
  {
    string s;
    cin >> s; 
    
    auto& t = tree;
    for(int i = 0; i < s.size(); i++)
    {
      string s1 = s.substr(i);
      if(t.ch.find(s[i]) == t.ch.end())
        t.ch[s[1]] = Node();
      t = t.ch[s[1]];
      t.v.insert(s1);
    }
  }
  for(int i = 0; i < M; i++)
  {
    string s;
    cin >> s;
    auto& t = tree;
    for(int i = 0; i < s.size(); i++)
    {
      s2 = s.substr(i + 1);
      for(char c = 'a'; c <= 'c'; c++)
      {
        if(c == s[i])
          continue;
        if(t.ch.find(s1) == t.ch.end())
      }
    }
    cout << "NO" << endl;
    continue;
found:
    cout << "YES" << endl;
  }
}
