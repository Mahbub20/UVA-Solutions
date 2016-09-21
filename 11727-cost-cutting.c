#include<stdio.h>
int main()
{
    int i,a,b,c,n;
    scanf("%d",&n);
    if(n<20)
    {
        for(i=0;i<n;i++)
        {
            scanf("%d %d %d",&a,&b,&c);
            if(a>=1000 && b>=1000 && c>=1000){
                if((b>a && b<c) || (b<a && b>c))
                {
                    printf("Case %d: %d\n",i+1,b);
                }
                else if((a>b && a<c) || (a<b && a>c))
                {
                    printf("Case %d: %d\n",i+1,a);
                }
                else if((c>a && c<b) || (c<a && c>b))
                {
                    printf("Case %d: %d\n",i+1,c);
                }
            }
            else{
                break;
            }
        }
    }
    return 0;
}
