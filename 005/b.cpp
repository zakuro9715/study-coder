#include<iostream>
#include<cmath>
using namespace std;

int main()
{
  int a, b;
  cin >> a >> b;
  if(a <= b)
  {
    if(a < b)
      cout << 0 << endl;
    else
      cout << "infinity" << endl;
    return 0;
  }
  int n = 0;
  double s = sqrt(a - b);
  for(int i = 1; i <= s; i++)
  {
    if(!((a - b) % i))
    {
      if(i > b && i != s)
        n++;
      if((a - b) / i > b)
        n++;
    }
  }
  cout << n << endl;
}
