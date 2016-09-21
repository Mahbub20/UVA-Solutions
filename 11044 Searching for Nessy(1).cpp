#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int n,r,c;
    cin >> n;
    while(n--)
    {
        cin >> r >> c;
        cout << (r/3)*(c/3) << endl;
    }
    return 0;
}
