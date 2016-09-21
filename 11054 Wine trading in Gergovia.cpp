#include<bits/stdc++.h>
using namespace std;
int ar[100010];
int main()
{
    long long int ans,i,t;
    while(cin >> t && t)
    {
        ans = 0;
        for(i = 0;i<t;i++)
        {
            cin >> ar[i];
        }
        for(i = 0;i<t-1;i++)
        {
            ans+=abs(ar[i]);
            ar[i+1]+=ar[i];
        }
        cout << ans << endl;
    }

    return 0;
}
