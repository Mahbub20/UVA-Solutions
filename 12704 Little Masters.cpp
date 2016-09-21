#include<bits/stdc++.h>
using namespace std;
int main()
{
    double x,y,r,high,low;
    int t;
    cin >> t;
    while(t--)
    {
        cin >> x >> y >> r;
        high = r+sqrt(x*x+y*y);
        low = r-sqrt(x*x+y*y);
        printf("%.2lf %.2lf\n",low,high);
    }
    return 0;
}
