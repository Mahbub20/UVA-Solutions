#include<stdio.h>
int main()
{

    int n,k,j,h;
    while(scanf("%d %d",&n,&k)==2)
    {
        if(k<2)break;
        int flag=0, i=0;
        i=n;
        while(n>=k)
        {
            j= n%k;
            h= n/k;
            n= j+h;

            if(h>=1)flag+=h;

        }
        printf("%d\n",flag+i);
    }
    return 0;
}
