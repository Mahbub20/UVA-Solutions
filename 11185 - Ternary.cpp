#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    long long t,n,m,i;
    long long int ar[1000000],c;
    while(scanf("%lld",&n)==1 && n>=0)
    {
        if(n==0)printf("0");
        c = 0;
        t = n;
        i = 0;
        while(n>0)
        {
            ar[i]= n%3;
            c++;
            n/=3;
            i++;
        }
        for(i = c-1;i>=0;i--)
        {
            printf("%lld",ar[i]);
        }
        printf("\n");
    }
    return 0;
}
