#include<stdio.h>
int main()
{
    int t,l,ar[51],i,j,count,temp;
    scanf("%d",&t);
    while(t--)
    {
        count = 0;
        scanf("%d",&l);
        for(i = 0;i<l;i++)
        {
            scanf("%d",&ar[i]);
        }
        for(i = 0;i<l;i++)
        {
            for(j = 0;j<l-1;j++)
            {
                if(ar[j]>ar[j+1])
                {
                    temp = ar[j];
                    ar[j] = ar[j+1];
                    ar[j+1] = temp;
                    count++;
                }
            }
        }
        printf("Optimal train swapping takes %d swaps.\n",count);
    }
    return 0;
}
