#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long s,n,x,a,b,c,t;
  while(cin >> s && s>0)
  {
    a = 1;
    b = 1;
    c = -2*(s+1);
    t = ceil((-b+sqrt(b*b-4*a*c))/2*a);
    x = (t*(t+1)/2)-s;
    cout << x << " "<< t << endl;
  }
  return 0;
}
