#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
    unsigned long long int n,sum;
    while(cin >> n)
    {
        sum = (2*((n/2+1)*(n/2+1))-3)*3;
        cout << sum << endl;
    }

    return 0;
}
