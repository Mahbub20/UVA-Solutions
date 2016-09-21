#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
using namespace std;
int main()
{
    long long n,res,m;
    int k = 1;
    while(cin >> n && n>0)
    {
        res = ceil((sqrt(8*n+9)+3)/2);
        cout << "Case "<< k++ << ":" << " " <<res << endl;
    }
    return 0;
}
