#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    long long n,m,p,q,sum = 0,r;
    cin >> n;
    while(n--)
    {
        cin >> m;
        while(m--)
        {
          cin >> p >> q >> r;
          sum+= p*r;
        }
        cout << sum << endl;
        sum = 0;

    }
    return 0;
}
