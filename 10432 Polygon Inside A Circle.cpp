#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
int main()
{
    double n,r,res,res1,res2;
    while(cin >> r >> n)
    {
        res = r*r*n/2*sin(2.0*3.1415926535897932384626433832795/n);
        printf("%.3lf\n",res);
    }
    return 0;
}
