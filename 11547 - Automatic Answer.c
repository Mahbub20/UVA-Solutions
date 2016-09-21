#include<stdio.h>
#include<stdlib.h>
int main()
{
    int t,n,res;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        n*=567;
        n/=9;
        n+=7492;
        n*=235;
        n/=47;
        n-=498;
        res = abs(n)/10;
        res = res%10;
        printf("%d\n",res);
    }
    return 0;
}
