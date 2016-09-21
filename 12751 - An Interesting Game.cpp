#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,x,init,sum1,sum2,diff,result,t,c = 1;
    cin >> t;
    while(t--)
    {
        cin >> n >> k >> x;
        init = n*(n+1)/2;
        sum1 = (x+k-1)*(x+k)/2;
        sum2 = (x-1)*(x)/2;
        diff = sum1-sum2;
        result  = init-diff;
        printf("Case %d: %d\n",c++,result);
    }
    return 0;
}
