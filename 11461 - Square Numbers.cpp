#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
int main()
{
    long long int n,m,i,c,res;
    while(scanf("%lld %lld",&n,&m)==2 && n>0 && m>0)
    {
        c = 0;
        for(i=n;i<=m;i++)
        {
            res = sqrt(i);
            if(pow(res,2)==i)
            {
                c++;
            }
        }
        printf("%lld\n",c);
    }
    return 0;
}
