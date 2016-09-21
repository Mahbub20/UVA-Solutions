#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    double c,f,res;
    int t,k = 1;
    cin >> t;
    while(t--)
    {
        cin >> c >> f;
        res = (5*f/9)+c;
        printf("Case %d: %.2lf\n",k++,res);
    }
    return 0;
}

