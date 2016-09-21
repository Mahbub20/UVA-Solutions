#include<bits/stdc++.h>
using namespace std;
int main()
{
  long t,n,i,j,l,m,h;
  cin >> t;
  while(t--)
  {
    cin >> l >> n;
    h = m = 0;
    while(n--)
    {
      cin >> i;
      h = max(h,max(l-i,i));
      m = max(m,min(l-i,i));
    }
    cout << m << " " << h << endl;
  }
  return 0;

}
