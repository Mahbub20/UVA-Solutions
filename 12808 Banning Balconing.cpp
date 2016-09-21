#include<bits/stdc++.h>
using namespace std;
int main()
{
    double L,D,H,V,d,t,T;
    cin >> T;
    while(T--)
    {
        cin >> L >> D >> H >> V;
        L = L/1000;
        D = D/1000;
        H = H/1000;
        V = V/1000;
        t = sqrt(2*H/9.8);
        d = V*t;
        if(fabs(d-D)<0.5 || fabs(d-(D+L))<0.5)cout << "EDGE\n";
        else if(d<D|| d>D+L)cout << "FLOOR\n";
        else cout << "POOL\n";
    }
    return 0;
}
