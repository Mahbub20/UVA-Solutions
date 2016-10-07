#include<bits/stdc++.h>
using namespace std;
int fact[12];
void fnc()
{
   int i;
   fact[0] = fact[1] = 1;
   for(i = 2;i<=10;i++)
   {
     fact[i] = fact[i-1]*i;
   }
}
int main()
{
 fnc();
 int i,j,n;
 while(cin >> n)
 {
   int ans = 0;
   for(i = 8;i>=1;i--)
   {
     while(n>=fact[i])
     {
       ans++;
       n-=fact[i];
     }
   }
   cout << ans << endl;
 }
 return 0;
}
