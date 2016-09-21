#include<stdio.h>
int main()
{
  long long int n,i,j,sum,temp,tab;
  while(scanf("%lld",&n)==1 && n>0)
   {
      if(n<10)
       {
           printf("%lld\n",n);
           continue;
       }
       if(n>9)
       {
         while(n>9)
      {
        sum = 0;
        while(n!=0)
        {
            temp = n%10;
            sum+=temp;
            n/=10;
        }
        n = sum;
      }
      printf("%lld\n",sum);
    }
   }

       return 0;
}

