#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
long long int ar[2000005];
int main()
{
    long long int n,m,i;
    while(scanf("%lld",&n)==1 && n>0)
    {
       for(i = 0;i<n;i++)
    {
        cin >> ar[i];
    }
    sort(ar,ar+n);
    for(i = 0;i<n;i++)
    {
        printf("%lld",ar[i]);
        if(i<(n-1))cout <<" ";
    }
    printf("\n");
    }

    return 0;
}
