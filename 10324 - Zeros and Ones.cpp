#include<bits/stdc++.h>
using namespace std;
bool check(string ar,int a,int b)
{
  int i,j;
  for(i = a;i<b;i++)
  {
    if(ar[i]!=ar[i+1])
    return false;
  }
  return true;
}
int main()
{
  string s;
  bool track;
  int i,j,n,mn,mx,sz,k = 1;
  while(cin >> s)
  {
    cin >> n;
    printf("Case %d:\n",k++);
    while(n--)
    {
      cin >> i >> j;
      mn = min(i,j);
      mx = max(i,j);
      track = check(s,mn,mx);
      if(track)cout << "Yes\n";
      else cout << "No\n";
    }
  }
  return 0;
}
