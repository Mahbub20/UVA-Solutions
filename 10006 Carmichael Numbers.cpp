#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    long long n,i,j,f;
 int ar[16] = {561,1105,1729,2465,2821,6601,8911,10585,15841,29341,41041,46657,52633,62745,63973};
 int ar1[16];
 while(cin >> n && n>0)
 {
     if(n>560)
     {
     f = 0;
     i = 0;
     int c = 0;
     while(c<15)
     {
         if(n==ar[i])
         {
             f = 1;
             break;
         }
         i++;
         c++;
     }
      if(f==1)printf("The number %lld is a Carmichael number.\n",n);
     else{
        printf("%lld is normal.\n",n);
     }
 }
 else{
    printf("%lld is normal.\n",n);
 }
}
return 0;
}
