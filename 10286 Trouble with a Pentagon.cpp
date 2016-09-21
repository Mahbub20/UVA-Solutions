#include<iostream>
#include<cstdio>
#include<cmath>
#define PI acos(-1)
using namespace std;
int main()
{
    double p_len,s_len,res;
    res = sin(72*PI/180)/sin(63*PI/180);
    while(cin >> p_len)
    {
        s_len = res*p_len;
        printf("%.10lf\n",s_len);
    }
    return 0;
}
