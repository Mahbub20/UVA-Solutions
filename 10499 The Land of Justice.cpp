#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    long long n;
    while(cin >> n && n>=0)
    {
        if(n==1)cout << "0%" << endl;
        else{
            printf("%lld%\n",n*25);
        }
    }
    return 0;
}
