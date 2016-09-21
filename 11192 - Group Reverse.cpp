#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    int n;
    while(cin >> n && n)
    {
        cin >> str;
        int len = str.size();
        int m = len/n;
        for(int i = 0;i<len;i+=m)
        {
            for(int j = i+m-1;j>=i;j--)
            {
                cout << str[j];
            }
        }
        cout << endl;
    }
    return 0;
}
