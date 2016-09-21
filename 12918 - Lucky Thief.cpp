#include<iostream>
using namespace std;
int main()
{
    long long k,d,res,t;
    cin >> t;
    while(t--)
    {
        cin >> k >> d;
        res = ((d-1)+(d-k))*k/2;
        cout << res << endl;
    }
    return 0;
}
