#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t,n,len;
  char ch,ch1;
  string s,l;
  cin >> t;
  while(t--)
  {
    cin >> s;
    cin >> n;
    l = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    len = s.size();
    while(n--)
    {
      cin >> ch >> ch1;
      for(int i = 0;i<26;i++)
      {
        if(l[i]==ch1)l[i]= ch;
      }
    }
     for(int i = 0;i<len;i++)
      {
        if(s[i]=='_')cout << s[i];
        else cout << l[s[i]-65];
      }
      cout << endl;
  }
  return 0;
}
