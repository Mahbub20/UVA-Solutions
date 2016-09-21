#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    while(cin >> a >> b >> c)
    {
        if((a==b)&&(b==c))cout << "*\n";
        else if(a==b)cout << "C\n";
        else if(b==c)cout << "A\n";
        else if(a==c)cout << "B\n";
    }
    return 0;
}
