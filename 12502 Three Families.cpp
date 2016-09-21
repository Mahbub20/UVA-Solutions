#include<iostream>
using namespace std;
int main()
{
    int a,b,c,res,t;
    cin >> t;
    while(t--)
    {
        cin >> a >> b >> c;
        res = c*(2*a-b)/(a+b);
        cout << res << endl;
    }
    return 0;
}
