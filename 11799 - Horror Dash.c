#include<stdio.h>
int main()
{
    int i,k,n,x,y;
    int max=-1;

    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d ",&x);
        for(k=0;k<x; k++)
        {
            scanf("%d",&y);
            if(y>max)max=y;
        }
        if(max>0)
        {
            printf("Case %d: %d\n",i+1,max);
            max=-1;
        }

    }
    return 0;
}
