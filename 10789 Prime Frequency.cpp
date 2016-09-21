#include<bits/stdc++.h>
#define sz 2010
using namespace std;
bool is_prime(long long n)
{
  int i,j;
  bool track = true;
  for(i = 2;i<=sqrt(n);i++)
  {
    if(n%i==0)
    {
      track = false;
      break;
    }
  }
  if(track && n!=1)return true;
  else return false;
}
int main()
{
  int t,i,j,len,k = 1,f;
  string s;
  cin >> t;
  while(t--)
  {
     f = 0;
     int cnt[10000] = {0};
    cin >> s;
    len = s.size();
    for(i = 0;i<len;i++)
    {
      cnt[s[i]]++;
    }
    for(i = 48;i<122;i++)
    {
      if(is_prime(cnt[i]))
      {
        printf("%c",i);
        f = 1;
      }
      if(f==0)cout << "empty\n";
    }
    cout << endl;

  }
  return 0;
}
