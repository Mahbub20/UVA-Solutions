#include<bits/stdc++.h>
using namespace std;
int main()
{
  int s,ar[20],i,j,k = 1;
  cin >> s;
  while(s--)
  {
     j = 0;
    for(i = 0;i<13;i++)
    {
      cin >> ar[i];
    }
    for(i = 0;i<13;i++)
    {
      if(ar[i]==0)
      {
         j = 1;
         break;
      }
    }
    if(j==0)printf("Set #%d: Yes\n",k++);
    else printf("Set #%d: No\n",k++);
  }
  return 0;
}
