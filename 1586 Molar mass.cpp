#include<bits/stdc++.h>
using namespace std;
int main()
{
  double mass[120];
  mass['C'] = 12.01;
  mass['H'] = 1.008;
  mass['O'] = 16.00;
  mass['N'] = 14.01;
  int i,j,t,len,mul;
  double curweight,tweight;
  string s;
  cin >> t;
  while(t--)
  {
    cin >> s;
    len = s.size();
    tweight = 0;
    for(i = 0;i<len;i++)
    {
      if(s[i]>'9')tweight+=mass[s[i]];
      else
      {
        curweight = mass[s[i-1]];
        mul = atoi(s.c_str()+i)-1;
        tweight += mul*curweight;
      }
    }
    cout << setprecision(3) << fixed << tweight << endl;
  }
  return 0;
}
