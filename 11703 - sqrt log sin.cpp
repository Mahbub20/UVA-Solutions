#include<bits/stdc++.h>
using namespace std;
int ar[1000001];
int main()
{
  ar[0] = 1;
  for(int i = 1;i<1000001;i++)
  {
    int p = (int)(i-sqrt(i));
    int q = (int)log(i);
    int r = (int)(i*pow(sin(i),2));
    ar[i] = (ar[p]+ar[q]+ar[r])%1000000;
  }
  int n;
  while(cin >> n && n>-1)
  {
    cout << ar[n] << endl;
  }
  return 0;
}
