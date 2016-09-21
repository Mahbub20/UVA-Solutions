#include<iostream>
#include<stdio.h>
#include<math.h>
#define PI 3.141592653589793
using namespace std;
int main()
{
    double x,y,x1,y1,x2,y2,a,b,c,res,r;
    while(scanf("%lf %lf %lf %lf %lf %lf",&x,&y,&x1,&y1,&x2,&y2)==6)
    {
        a = sqrt(pow(x-x1,2)+pow(y-y1,2));
        b = sqrt(pow(x1-x2,2)+pow(y1-y2,2));
        c = sqrt(pow(x2-x,2)+pow(y2-y,2));
        r = a*b*c/(sqrt((a+b+c)*(b+c-a)*(c+a-b)*(a+b-c)));
        res = 2*PI*r;
        printf("%.2lf\n",res);
    }
    return 0;
}
