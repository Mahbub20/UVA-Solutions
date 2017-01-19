#include<bits/stdc++.h>
using namespace std;
int record(char c)
{
  switch(c)
  {
    case 'W': return 64;
    case 'H': return 32;
    case 'Q': return 16;
    case 'E': return 8;
    case 'S': return 4;
    case 'T': return 2;
    case 'X': return 1;
  }
}
int main()
{
  string s;
  int i,j,cnt,sum;
  while(cin >> s)
  {
    if(s=="*")break;
    cnt = 0;
    sum = 0;
    for(i = 1;i<s.size();i++)
    {

      if(s[i]=='/')
      {
        if(sum==64)cnt++;
        sum=0;
        continue;
      }
      sum+=record(s[i]);
    }
    cout << cnt << endl;
  }
  return 0;
}
