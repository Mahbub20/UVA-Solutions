#include<stdio.h>
int main()
{
   int n,h[101],i,j,sum,sub,average,sum1,k = 1;
   while(scanf("%d",&n)==1 && n>0)
   {
       sum1 = 0;
       sum = 0;
       for(i = 1;i<=n;i++)
   {
       scanf("%d",&h[i]);
   }
   for(i = 1;i<=n;i++)
   {
       sum+=h[i];
   }
   average = sum/n;
   h[0] = average;
   for(j =1;j<=n;j++)
   {
       if(h[0]>h[j])
       {
           sub = h[0]-h[j];
           sum1+=sub;
       }
   }
   printf("Set #%d\nThe minimum number of moves is %d.\n",k++,sum1);
   printf("\n");
   }

   return 0;
}
