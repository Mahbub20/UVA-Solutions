#include<bits/stdc++.h>
using namespace std;
long long f(long long n)
{
   if(n==0)return 0;
   return f(n/2)+(n%2);
}
int main()
{
  long long t,n;
  cin >> t;
  while(t--)
  {
    cin >> n;
    cout << f(n) << endl;
  }
  return 0;
}
