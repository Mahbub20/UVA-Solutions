#include<stdio.h>
int main()
{
    long long i,x,y,m,n,k;
    scanf("%lld",&k);
    if(k>0)
    {
        scanf("%lld %lld",&m,&n);
        for(i=0;i<k;i++)
        {
            scanf("%lld %lld",&x,&y);
            if(x<m && y>n)
            {
                printf("NO\n");
            }
            else if(x>m && y>n)
            {
                printf("NE\n");
            }
            else if(x>m && y<n)
            {
                printf("SE\n");
            }
            else if(x<m && y<n)
            {
                printf("SO\n");
            }
            else {
                printf("divisa\n");
            }
        }
    }
    return 0;
}
