#include<bits/stdc++.h>
using namespace std;
long long int phi(long long int n)
{

  long long int res = n,i,j;
  if(n==1)return 0;
  if(n%2==0)
  {
    while(n%2==0)
     n/=2;
     res-=res/2;
  }
  for(i = 3;i<=sqrt(n);i+=2)
  {
    if(n%i==0)
    {
      while(n%i==0)
      {
        n/=i;
      }
       res-=res/i;
    }
  }
  if(n>1)res-=res/n;
  return res;
}
int main()
{
  long long int n;
  while(cin >> n && n>0)
  {
    cout << phi(n) << endl;
  }
  return 0;
}
