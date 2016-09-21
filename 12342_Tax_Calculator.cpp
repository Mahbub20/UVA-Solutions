#include<bits/stdc++.h>
using namespace std;
int main()
{
   double sal,tax;
   int t,k = 1;
   cin >> t;
   while(t--)
   {
     tax = 0;
     cin >> sal;
     sal-=180000;
     if(sal>0)
     {
        tax+=(min(300000.0,sal)*10)/100;
        sal-=300000;
     }
     if(sal>0)
     {
       tax+= (min(400000.0,sal)*15)/100;
       sal-=400000;
     }
     if(sal>0)
     {
       tax+=(min(300000.0,sal)*20)/100;
       sal-=300000;
     }
     if(sal>0)tax+=(sal*25.0)/100;
     if(tax>0)
     {
        tax = max(2000.0,ceil(tax));
     }
     printf("Case %d: %.0lf\n",k++,tax);
   }
   return 0;
}
