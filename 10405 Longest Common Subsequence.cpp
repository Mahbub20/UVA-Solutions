#include<bits/stdc++.h>
using namespace std;
int len1,len2,i,j,ar[2000][2000];
int main()
{
  string s,s1;
  while(getline(cin,s))
  {
    getline(cin,s1);
    len1 = s.size();
    len2 = s1.size();
    for(i = 1;i<=len1;i++)
    {
      for(j = 1;j<=len2;j++)
      {
        if(s[i-1]==s1[j-1])
        {
          ar[i][j] = ar[i-1][j-1]+1;
        }
        else{
          ar[i][j] = max(ar[i][j-1],ar[i-1][j]);
        }
      }
    }
    cout << ar[len1][len2] << endl;
  }
  return 0;
}
