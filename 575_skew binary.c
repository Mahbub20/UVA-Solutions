#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
  long int i,l,sum,n,tab;
  char ar[500];
  while(scanf("%s",&ar))
  {
      sum = 0;
     l = strlen(ar);
     for(i = 0;i<l;i++)
     {
        n = ar[i]-'0';
        tab = n*(pow(2,l-i)-1);
        sum+=tab;
     }
     if(sum==0)break;
     printf("%ld\n",sum);
  }
  return 0;
}
