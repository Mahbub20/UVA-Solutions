#include<stdio.h>
int main()
{
    int i,j,k,a,flag,m = 1;
    while(scanf("%d",&a)==1 && a>0)
    {
        i = 1;
        j = 1;
        flag = 0;
        while(1)
        {
            j = i;
            i*=2;
            if(i>=a && a<=j)
            {
                break;
            }
             flag++;

         }
         printf("Case %d: %d\n",m++,flag);


}
    return 0;
}
