#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ar[110][110];
    int i,j,n,m,cnt;
    while(cin >> n >> m)
    {
        cnt = 0;
        for(i = 0;i<n;i++)
        {
            for(j = 0;j<m;j++)
            {
                cin >> ar[i][j];
            }
        }
        for(i = 0;i<n;i++)
        {
            for(j = 0;j<m;j++)
            {
                if(ar[i][j]==0)
                {
                    cnt++;
                    break;
                }
            }
        }
        cout << n-cnt << endl;
    }
    return 0;
}
