#include<bits/stdc++.h>
using namespace std;
int main()
{
  int x,y,a,b;
  while(cin >> x >> y >> a >> b)
  {
    if(x==0 && y==0 && a==0 && b==0)break;
    else if(x==a && y==b)cout << 0 <<endl;
    else if(x==a || y==b || x+y==a+b || x-y==a-b)cout << 1 << endl;
    else cout << 2 << endl;
  }
  return 0;
}
