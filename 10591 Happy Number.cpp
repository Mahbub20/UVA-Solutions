#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long n,a,sum,t,temp,k = 1;
  cin >> t;
  while(t--)
  {
     cin >> n;
     a = n;
     sum = 0;
     while(n<9 || n>9)
     {
        if(n<=9)
        {
          sum = n;
          break;
        }

        while(n!=0)
     {
       temp = n%10;
       sum+=(temp*temp);
       n/=10;
     }
     n = sum;
     sum = 0;
     }
    if(sum==1||sum==7)printf("Case #%lld: %lld is a Happy number.\n",k++,a);
     else{
        printf("Case #%lld: %lld is a Unhappy number.\n",k++,a);
     }
  }
  return 0;
}
