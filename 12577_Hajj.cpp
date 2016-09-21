#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    string s;
    int k = 1;
    while(cin >> s)
    {
        if(s =="Hajj")
        {
            cout << "Case " << k++ << ": Hajj-e-Akbar\n";
        }
        else if(s =="Umrah")
        {
            cout << "Case " << k++ << ": Hajj-e-Asghar\n";
        }
        else if(s == "*")return 0;
    }
    return 0;
}
