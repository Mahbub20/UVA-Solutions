#include<bits/stdc++.h>
using namespace std;
int main()
{
  int u = 10,l = 1,g;
  string s;
  while(cin >> g && g>0)
  {
     cin.ignore();
     getline(cin,s);
     if(s=="too high")
     {
        u = min(u,g-1);
     }
     else if(s=="too low")
     {
        l = max(l,g+1);
     }
     else if(s=="right on")
     {
        if(g<=u && g>=l)
        {
           cout << "Stan may be honest\n";
        }
        else {
           cout << "Stan is dishonest\n";
        }
        u = 10;
        l = 1;
     }
  }
  return 0;
}
