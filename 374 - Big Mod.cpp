#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll int bigmod(ll int a,ll int b,ll int m)
{
  if(b==0)return 1%m;
  ll x = bigmod(a,b/2,m);
  x = (x*x)%m;
  if(b%2==1)
  {
    x = (x*a)%m;
  }
  return x;
}
int main()
{
  ll int a,b,m;
  while(cin >> a >> b >> m)
  {
    cout << bigmod(a,b,m);
    cout << endl;
  }
  return 0;
}
