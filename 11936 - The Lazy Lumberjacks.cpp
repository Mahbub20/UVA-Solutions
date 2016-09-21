#include<bits/stdc++.h>
using namespace std;
int main()
{
  int a,b,c,t,i,j;
  cin >> t;
  while(t--)
  {
    cin >> a >> b >> c;
    if((a+b>c) && (b+c>a) && (a+c>b))
      {
         cout << "OK\n";
      }
      else cout << "Wrong!!\n";
  }
  return 0;
}
