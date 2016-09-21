#include<bits/stdc++.h>
using namespace std;
#define s 1000010
long int st[s],track[s];
long int sum(long int n)
{
   long int tmp = n,sum = 0,rem;
        while(tmp!=0)
        {
          rem = tmp%10;
          sum+=rem;
          tmp/=10;
        }
    return sum;
}
void sieve()
{
  long int sq,i,j;
  sq = sqrt(s);
  for(i = 4;i<=s;i+=2)st[i] = 1;
  for( i = 3;i<=sq;i+=2)
  {
    if(st[i]==0)
    {
      for( j = i*2;j<=s;j+=i)st[j] = 1;
    }
  }
  st[0] = 1;
  st[1] = 1;
}
int main()
{
 sieve();
 long int t,a,b,i,j,cnt = 0;;
 for(i = 0;i<=1000000;i++)
    {
      if(st[i]==0 && st[sum(i)]==0)
      {
        cnt++;
      }
      track[i] = cnt;
    }
 scanf("%ld",&t);
 while(t--)
 {

    scanf("%ld %ld",&a,&b);
   printf("%ld\n",track[b]-track[a-1]);
 }
 return 0;
}
