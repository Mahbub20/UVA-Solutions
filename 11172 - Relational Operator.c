#include<stdio.h>
int main()
{
    int n,i,j;
    long long a,b;
    scanf("%d",&n);

    for(i = 0; i < n; i++)
    {
        scanf("%lld %lld",&a,&b);
        if(a<b)
        {
            printf("<\n");
        }
        else if(a>b)
        {
            printf(">\n");
        }
        else
        {
            printf("=\n");
        }
    }

    return 0;
}
