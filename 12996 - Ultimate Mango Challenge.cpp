#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t,l,n,i,ar[20],ar1[20],sum,ret,k = 1;
  cin >> t;
  while(t--)
  {
    sum = 0;
    ret = 1;
    cin >> n >> l;
    for(i = 0;i<n;i++)
    {
      cin >> ar[i];
      sum+=ar[i];
    }
    for(i = 0;i<n;i++)
    {
      cin >> ar1[i],ret&= ar[i] <= ar1[i];
    }
    ret &= sum <= l;
    printf("Case %d: %s\n",k++,ret? "Yes":"No");
  }
  return 0;
}
