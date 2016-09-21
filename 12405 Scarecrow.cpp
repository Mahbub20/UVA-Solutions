#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,res,i,j,k = 1,f;
    char c,ar[110];
    cin >> t;
    while(t--)
    {
        scanf("%d %s",&n,ar);
        f = 0;
        for(i = 0;i<n;)
        {
            if(ar[i]=='#')i++;
            else{
              f++;
              i+=3;
            }
        }
        printf("Case %d: %d\n",k++,f);
    }
    return 0;
}
