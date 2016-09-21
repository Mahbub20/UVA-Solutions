#include<stdio.h>
int main()
{
    long long i,j,n,s,c,m,k;
    while(scanf("%lld %lld",&m,&n)==2)
    {
        s = 0;
        printf("%lld %lld ",m,n);
        if(m>n)
        {
            k = m;
            m = n;
            n = k;
        }
        for(i = m;i<=n;i++)
        {
            c = 1;
            j = i;
            while(j>1)
            {
                if(j%2==0)
                {
                    j = j/2;
                    c++;
                }
                else{
                    j = 3*j+1;
                    c++;
                }
            }
            if(c>=s)
            {
                s = c;
            }
        }
        printf("%lld\n",s);
        s = 0;
    }
    return 0 ;
}
