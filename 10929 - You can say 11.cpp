#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    int sum;
    while(1)
    {
        sum = 0;
        cin >> str;
        if(str[0]=='0' && str.size()==1)break;

            for(int i = 0;i<str.size();i+=2)
            {
                sum+=str[i]-'0';
            }
            for(int i = 1;i<str.size();i+=2)
            {
                sum-=str[i]-'0';
            }
        if(sum%11==0)cout << str << " is a multiple of 11." << endl;
        else cout << str << " is not a multiple of 11." << endl;
    }
}
