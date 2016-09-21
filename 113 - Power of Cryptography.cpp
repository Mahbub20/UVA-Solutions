#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
    double n,p,result;
    while(scanf("%lf %lf",&n,&p)==2)
    {
       result = pow(p,1.0/n);
       printf("%.0lf\n",result);
    }
    return 0;
}
