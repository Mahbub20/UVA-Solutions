#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int r,n,j,p;
    int i = 1;
    while(cin >> r >> n && r >0 && n>0)
    {
        p = (r-1)/n;
        if(p>26)
        {
            printf("Case %d: impossible\n",i++);
        }
        else
            printf("Case %d: %d\n",i++,p);
    }
    return 0;
}
