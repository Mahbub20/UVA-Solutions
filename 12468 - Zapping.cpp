#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,res,res1,result;
    while(cin >> n >> m)
    {
        if(n<0 && m<0)break;
        res = abs(n-m);
        if(res>=50)cout << 100-res << endl;
        else{
            cout << res << endl;
        }
    }
    return 0;
}
