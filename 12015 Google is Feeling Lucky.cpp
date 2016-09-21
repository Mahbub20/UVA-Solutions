#include<bits/stdc++.h>
using namespace std;
int main()
{
   int rnk[20],t,n,k = 1,maxi;
   string name;
   string page[20];
   cin >> t;
   while(t--)
   {
     maxi = -1;
     printf("Case #%d:\n",k++);

     for(int i = 0;i<10;i++)
     {
       cin >> name >> n;
       rnk[i] = n;
       page[i] = name;
       maxi = max(n,maxi);
     }
     for(int i = 0;i<10;i++)
     {
        if(rnk[i]==maxi)
        {
           cout << page[i] << endl;
        }
     }
   }
   return 0;
}
