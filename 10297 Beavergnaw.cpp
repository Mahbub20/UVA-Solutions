#include<iostream>
#include<cstdio>
#include<cmath>
#define PI acos(-1)
using namespace std;
int main()
{
    double d,v,result;
    while(cin >> d >> v && d>0 && v>0)
    {
        result = pow(d*d*d-6*v/PI,1.0/3);
        printf("%.3lf\n",result);
    }
    return 0;
}
