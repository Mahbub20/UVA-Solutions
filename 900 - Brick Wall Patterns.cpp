#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long int n,i,ar[100000];
  while(cin >> n && n>0)
  {
    ar[1] = 1;
    ar[2] = 2;
    for(i = 3;i<=n;i++)
    {
      ar[i] = ar[i-2]+ar[i-1];
    }
    cout << ar[n] << endl;
  }
  return 0;
}
