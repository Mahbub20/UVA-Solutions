#include<bits/stdc++.h>
#define mx 1000010
long long status[mx];
using namespace std;
void sieve()
{
    long long int sq,i,j;
    sq = sqrt(mx);
    for(i = 4;i<=mx;i+=2)
    {
        status[i] = 1;
    }
    for(i = 3;i<=sq;i+=2)
    {
        if(status[i]==0)
        {
            for(j = i*2;j<=mx;j+=i)
            {
                status[j] = 1;
            }
        }
    }
    status[1] = 1;
    status[0] = 1;
}
 int palindrome(long long int p)
{
    long long int rvrs = 0,temp;
    temp = p;
    while(p!=0)
    {
        rvrs = rvrs*10;
        rvrs = rvrs+p%10;
        p/=10;
    }
    if(rvrs==temp)return 0;
    else return 1;
}
int main()
{
   sieve();
   long long int t,s;
   while(cin >> t)
   {
       if(status[t]==0 && palindrome(t)==0)
       {
           cout << 2*t << endl;
           break;
       }
       else{
        cout << 2*t << endl;
       }
   }
   return 0;
}
