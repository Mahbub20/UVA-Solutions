#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
int func(long long int m);
int main()
{
    long long n,m,res,res1,rev,temp;
    while(scanf("%lld",&n)==1)
    {
        res1 = 0;
        if(n==0)
        {
            printf("%lld is not prime.\n",n);
            continue;
        }
        rev = 0;
        temp = n;
        while(n!=0)
        {
            rev = rev*10;
            rev = rev+n%10;
            n/=10;
        }
       res = func(temp);
       if(res==1)res1 = func(rev);
       if(temp!=rev && res==1 && res1==1)
        printf("%lld is emirp.\n",temp);
      else if(temp==rev && res==1 && res1==1)
        printf("%lld is prime.\n",temp);
      else if(res==1 && res1==0)
        printf("%lld is prime.\n",temp);
      else if(res==0)
        printf("%lld is not prime.\n",temp);
    }
    return 0;
}
int func(long long int m)
{
    int i,j,flag = 0;
    for(i = 2;i<=sqrt(m);i++)
    {
        if(m%i==0)
        {
            flag = 1;
            break;
        }
    }
    if(flag==0 && m!=1)
    {
        return 1;
    }
    else{
        return 0;
    }
}
