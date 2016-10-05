#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t,l,w,h,v,m;
  while(cin >> t && t>0)
  {
    v = m = 0;
    while(t--)
    {
      cin >> l >> w >> h;
      if(h>m)
      {
        m = h;
        v = l*w*h;
      }
      else if(m==h)
      {
        v = max(v,l*w*h);
      }
    }
    cout << v << endl;
  }
  return 0;
}
