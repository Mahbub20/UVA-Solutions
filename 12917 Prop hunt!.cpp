#include<bits/stdc++.h>
using namespace std;
int main()
{
    int p,h,o;
    while(cin >> p >> h >> o)
    {
        if(p+h<=o)cout << "Props win!\n";
        else cout << "Hunters win!\n";
    }
    return 0;
}
