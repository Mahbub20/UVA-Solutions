#include<bits/stdc++.h>
#define mx 1005
using namespace std;
int T[mx][mx];
int main()
{
  string s,s1;
  int i,j,t,p,q;
  cin >> t;
  getline(cin,s);
  while(t--)
  {
    getline(cin,s);
    s1 = string(s.rbegin(),s.rend());
    p = s.size();
    q = s1.size();
    for(i = 0;i<=p;i++)T[i][0] = 0;
    for(i = 0;i<=q;i++)T[0][i] = 0;
    for(i = 1;i<=p;i++)
    {
      for(j = 1;j<=q;j++)
      {
        if(s[i-1]==s1[j-1])T[i][j] = T[i-1][j-1]+1;
        else T[i][j] = max(T[i-1][j],T[i][j-1]);
      }
    }
    cout << T[p][q] << endl;
  }
  return 0;

}
