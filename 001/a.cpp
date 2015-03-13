#include<iostream>
#include<algorithm>
using namespace std;

int n, s[100];
int main()
{
  cin >> n;
  for(auto i = 0; i < n; i++)
    cin >> s[i];
  sort(s, s + n);
  cout << 1 << " " << s[0] << endl;
  if(s[n - 1] > 0)
  {
    cout << 1 << " " << s[n - 1] << endl;;
    cout << n - 2;
    for(auto i = 1; i < n - 1; i++)
      cout << " " << s[i];
  }
  else
  {
    cout << 2 << " " << s[1] << " " << s[2] << endl;
    cout << n - 3;
    for(auto i = 3; i < n; i++)
      cout << " " << s[i];
  }
  cout << endl;
}
