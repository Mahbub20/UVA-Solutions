#include<stdio.h>
int main()
{
    int n,i,c,c1,k = 1,m;
    while(scanf("%d",&n)==1 && n>0 )
    {
        c = 0;
        c1 = 0;
        for(i = 0;i<n;i++)
        {
            scanf("%d",&m);
            if(m==0)
            {
                c++;
            }
            else{
                c1++;
            }
        }
        printf("Case %d: %d\n",k++,c1-c);
    }
    return 0;
}
