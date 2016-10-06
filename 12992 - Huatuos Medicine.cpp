#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t,n,i,odd[220],k,j = 1;
  for(i = 1,k = 1;i<=200,k<=100;i+=2,k++)
  {
    odd[k] = i;
  }
  cin >> t;
  while(t--)
  {
     cin >> n;
     printf("Case #%d: %d\n",j++,odd[n]);
  }
  return 0;
}
