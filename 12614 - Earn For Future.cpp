#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,a,b;
    cin >> t;
    while(t--)
    {
        cin >> n;
        while(n--)
        {
            cin >> a >> b;
            printf("%d\n",a&b);
        }
    }
    return 0;
}
