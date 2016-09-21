#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,m,i,j;
   int b[10010];
   while(cin >> n && n!=EOF)
   {
      for(i = 0;i<n;i++)
      {
         cin >> b[i];
      }
      sort(b,b+n);
      cin >> m;
      i = 0;
      j = n-1;
      int b1,b2;
      while(i<j)
      {
         if(b[i]+b[j]<m)
         {
            i++;
         }
         else if(b[i]+b[j]==m)
         {
            b1 = i;
            b2 = j;
            i++;
            j--;
         }
         else j--;
      }
      cout << "Peter should buy books whose prices are " << b[b1] << " and " << b[b2] <<"."<< "\n\n";
   }
   return 0;
}
