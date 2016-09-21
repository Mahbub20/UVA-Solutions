#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    long long int n,i;
    while(scanf("%lld",&n)==1 && n>0)
    {
        if(n<=100)
        {
            printf("f91(%lld) = %lld\n",n,91);
        }
        if(n>=101)
        {
            printf("f91(%lld) = %lld\n",n,n-10);
        }
    }
    return 0;
}
