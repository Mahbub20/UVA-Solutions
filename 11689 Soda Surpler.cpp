#include<bits/stdc++.h>
using namespace std;
int main()
{
    int e,f,c,t,sum;
    cin >> t;
    while(t--)
    {
        cin >> e >> f >> c;
        int g = e+f;
        sum = 0;
        while(g>=c)
        {
            int h = g/c;
            sum+=h;
            g = h+g%c;
        }
        cout << sum << endl;
    }
    return 0;
}
