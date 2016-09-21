#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
    long long int x,i,j,sum;
    while(cin >> x)
    {
        sum = 0;
        for(i = 1;i<=x;i++)
        {
            sum+=i*i*i;
        }
        cout << sum << endl;
    }
    return 0;
}
