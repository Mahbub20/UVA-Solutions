#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,c,cnt;
    while(cin >>t){
            cnt = 0;
       for(int i = 0;i<5;i++)
    {
        cin >> c;
        if(c==t)cnt++;
    }
    cout << cnt << endl;
    }
    return 0;
}
