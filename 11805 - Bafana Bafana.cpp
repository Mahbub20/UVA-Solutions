#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int n,k,p,res,t,c = 1;
    cin >> t;
    while(t--)
    {
        cin >> n >> k >> p;
        res = k+p;
        while(res>n)
        {
            res = res-n;
        }
        printf("Case %d: %d\n",c++,res);
    }
}
