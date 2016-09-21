#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t,r,k = 1,rem,res,res1,res2;
  cin >> t;
  while(t--)
  {
      cin >> r;
      rem = r/2;//10
      res = r+rem;//value of y 30
      res1 = res+res/2;//value of x1 45
      res2 = res1+rem;//value of x2 55
      printf("Case %d:\n%d %d\n%d %d\n%d %d\n%d %d\n",k++,-res1,res,res2,res,res2,-res,-res1,-res);

  }
  return 0;
}
