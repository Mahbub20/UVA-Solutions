#include<bits/stdc++.h>
using namespace std;
#define sz 1000000
int st[sz];
int factor[sz];
int k = 0;
void sieve()
{
  int sq,i,j;
  sq = sqrt(sz);
  for(i = 4;i<=sz;i+=2)st[i] = 1;
  for(i = 3;i<=sq;i+=2)
  {
    if(st[i]==0)
    {
      for(j = i*2;j<=sz;j+=i)st[j] = 1;
    }
  }
  st[0] = 1;
  st[1] = 1;
  for(i = 0;i<sz;i++)
  {
    if(st[i]==0)
    {
      factor[k++] = i;
    }
  }
}
int main()
{
 sieve();
 int n,i;
 while(cin >> n && n)
 {
   int cnt = 0;
   for(i = 0;i<k;i++)
   {
     if(n%factor[i]==0)cnt++;
   }
  printf("%d : %d\n",n,cnt);
 }
 return 0;
}
