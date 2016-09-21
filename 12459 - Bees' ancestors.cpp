#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long int n,m,i,j,a,sum;
    while(cin >> a && a)
    {
        n = 0;
        m = 1;
        for(i = 1;i<=a;i++)
        {
           sum = n+m;
           n = m;
           m = sum;
        }
        cout << sum << endl;
    }
    return 0;
}
