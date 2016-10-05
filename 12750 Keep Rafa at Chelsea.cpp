#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t,n,i,j,k = 1;
  char ch;
  cin >> t;
  while(t--)
  {
    cin >> n;
    getchar();
    int cnt = 0,res = -1;
    for(i = 1;i<=n;i++)
    {
      cin >> ch;
      getchar();
      if(ch!='W')
      {
        cnt++;
        if(cnt==3 && res==-1)
        {
          res = i;
        }
      }
      else cnt = 0;
    }
    if(res==-1)
    {
      printf("Case %d: Yay! Mighty Rafa persists!\n",k++);
    }
    else printf("Case %d: %d\n",k++,res);
  }
  return 0;
}
