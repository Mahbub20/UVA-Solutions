#include<bits/stdc++.h>
using namespace std;
int main()
{
 string s;
 int ar[110],t,i,j,len,cnt,res;
 cin >> t;
 while(t--)
 {
   cin >> s;
   len = s.size();
   cnt = 0,res = 0;
   for(i = 0;i<len;i++)
   {
     if(s[i]=='O')ar[i] = 1;
     else if(s[i]=='X')ar[i] = 0;
   }
   for(j = 0;j<i;j++)
   {
     if(ar[j]==1)cnt++;
     else cnt = 0;
     res+=cnt;
   }
   cout << res << endl;
 }
}

