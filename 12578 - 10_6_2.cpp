#include<bits/stdc++.h>
using namespace std;
#define PI acos(-1)
int main()
{
    int t,l;
    double r,w,c_area,r_area,T_area;
    cin >> t;
    while(t--)
    {
        cin >> l;
        w = (double)l*6/10;
        r = (double)l*2/10;
        c_area = PI*r*r;
        r_area = l*w;
        T_area = r_area-c_area;
        printf("%.2lf %.2lf\n",c_area,T_area);
    }
       return 0;
}
