#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,ar[110],a,b,fib,i;
    while(cin >> t && t>=0)
    {
        a = 1;
        b = 1;
        i = 0;
        while(i<=t)
        {
            fib = a+b;
            ar[i] = fib - 1;
            a = b;
            b = fib;
            i++;
        }
        cout << ar[t-1] << " " <<  ar[t] << endl;
    }
    return 0;
}
