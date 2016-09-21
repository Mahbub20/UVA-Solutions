#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t,i,j,ar[40],n,p,q,cnt,sum,k = 1;
   cin >> t;
   while(t--)
   {
      cin >> n >> p >> q;
      for(i = 0;i<n;i++)
      {
        cin >> ar[i];
      }
       cnt = 0;
       sum = 0;
      for(i = 0;i<n;i++)
      {
         sum+=ar[i];
         if(sum>q || cnt>=p)break;
         cnt++;
      }
      cout << "Case " << k++ << ": " << cnt << endl;
   }
   return 0;
}
