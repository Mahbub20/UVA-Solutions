#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,j,m,a,r,g,i,t,sum,rem,c;
    string pizza;
    cin >> n;
    while(n--)
    {
        m = 0,a = 0,r = 0,g = 0,i = 0,t = 0;
       cin >> pizza;
       for(j = 0;j<pizza.size();j++)
       {
           if(pizza[j]=='M')m++;
           if(pizza[j]=='A')a++;
           if(pizza[j]=='R')r++;
           if(pizza[j]=='G')g++;
           if(pizza[j]=='I')i++;
           if(pizza[j]=='T')t++;
       }
       c = 0;
       while(1)
       {
           if(a>=3 && r>=2 && m>=1 && i >=1 && t>=1 && g>=1)
           {
               c++;
               a = a-3;
               r = r-2;
               m = m-1;
               i = i-1;
               t = t-1;
               g = g-1;
           }
           else {
            break;
           }
       }
       cout << c << endl;
    }
    return 0;
}
