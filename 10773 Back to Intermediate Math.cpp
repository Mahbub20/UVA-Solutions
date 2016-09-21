#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0),cin.tie(0);
    double d,v,u,diff,n,t1,t2;
    int k = 1;
    cin >> n;
    while(n--)
    {
        cin >> d >> v >> u;
        if(v==0 || u<=v || u==0)printf("Case %d: can't determine\n",k++);
        else{
            t1 = d/u;
            t2 = d/(sqrt(pow(u,2)-pow(v,2)));
            diff = t2-t1;
            printf("Case %d: %.3lf\n",k++,diff);
        }
    }
    return 0;
}
