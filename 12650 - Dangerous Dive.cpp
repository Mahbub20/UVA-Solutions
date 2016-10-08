#include<bits/stdc++.h>
using namespace std;
int ar[10010];
void init(int n)
{
  int i;
  for(i = 1;i<=n;i++)
    {
      ar[i] = i;
    }
}
int main()
{
  int n,r,i,j,k,cnt;
  while(cin >> n >> r)
  {
    cnt = 0;
    init(n);
    while(r--)
    {
      cin >> k;
      ar[k] = 0;
    }
    for(j = 1;j<=n;j++)
    {
      if(ar[j]!=0)cout << ar[j] << " ";
      else cnt++;
    }
    if(cnt==n)cout << "*" << endl;
    else cout << endl;
  }
  return 0;
}
