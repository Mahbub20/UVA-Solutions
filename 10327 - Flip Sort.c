#include<stdio.h>
int main()
{
    int n,i,j,count,ar[1000],temp;
    while(scanf("%d",&n)==1)
    {
        count = 0;
        for(i = 0;i<n;i++)
        {
            scanf("%d",&ar[i]);
        }
        for(i = 0;i<n;i++)
        {
            for(j = 0;j<n-1;j++)
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
        printf("Minimum exchange operations : %d\n",count);
    }
    return 0;
    }

