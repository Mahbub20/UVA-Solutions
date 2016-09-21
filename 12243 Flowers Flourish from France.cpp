#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    char c;
    int flag,k,l,p;
    while(getline(cin,s))
    {
        flag = 0;
        if(s=="*")break;
        c = s[0];
        for(int i = 1;i<=s.size();i++)
        {
            if(s[i]==' ')
            {
              k = toascii(s[0]);
              l = toascii(s[i+1]);
              p = abs(k-l);
              if(p!=32 && p!=0)flag = 1;
            }
        }
          if(flag==1)cout << "N\n";
          else cout << "Y\n";
    }

    return 0;
}
