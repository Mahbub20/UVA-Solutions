#include<bits/stdc++.h>
using namespace std;
int LCS(string X,string Y,int m,int n)
{
  int L[m+1][n+1];
  for(int i = 0;i<=m;i++)
  {
    for(int j = 0;j<=n;j++)
    {
       if(i==0 || j==0)L[i][j] = 0;
       else if(X[i-1]==Y[j-1])L[i][j] = L[i-1][j-1]+1;
       else L[i][j] = max(L[i-1][j],L[i][j-1]);
    }
  }
  return L[m][n];
}
int main()
{
  string x,y;
  int l1,l2,res,t = 1;
  while(getline(cin,x))
  {
    if(x=="#")return 0;
    getline(cin,y);
    l1 = x.size();
    l2 = y.size();
    res = LCS(x,y,l1,l2);
    printf("Case #%d: you can visit at most %d cities.\n",t++,res);
  }
  return 0;
}
