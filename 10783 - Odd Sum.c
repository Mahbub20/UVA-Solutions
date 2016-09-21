#include<stdio.h>
int main()
{
    int a,b,i,j,k,count,sum=0;
    scanf("%d",&k);
    for(i=0;i<k;i++)
    {
        scanf("%d %d",&a,&b);
        for(j=a;j<=b;j++)
        {
            if(j%2==1)
            {
                sum+=j;
            }

        }
        printf("Case %d: %d\n",i+1,sum);
        sum=0;
    }
    return 0;
}
