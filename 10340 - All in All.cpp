#include<bits/stdc++.h>
using namespace std;
int main()
{
  int i,j,k,len;
  string s,s1;
  while(cin >> s >> s1)
  {
   len = s.size();
   int cnt = 0;
   for(i = 0;i<s1.size() && cnt <len;i++)
   {
     if(s1[i]==s[cnt])cnt++;
   }
   if(cnt==len)cout << "Yes\n";
   else cout << "No\n";
  }
  return 0;
}
