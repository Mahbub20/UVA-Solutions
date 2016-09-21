#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    while(cin >> n >> m)
    {
        int res;
        res = n>=m?n:m;
        cout << res << endl;
    }
    return 0;
}
