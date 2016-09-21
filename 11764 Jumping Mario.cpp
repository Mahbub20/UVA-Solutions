#include<iostream>
#include<cstdio>
#include<vector>
#include<cstring>
using namespace std;
int main()
{
    int ar[55], t,n,l_j = 0,h_j = 0,i,j,k = 1;
    cin >> t;
    while(t--)
    {
        cin >> n;
        for(i = 0;i<n;i++)
        {
            cin >> ar[i];
        }
        if(i<2)
        {
            printf("Case %d: 0 0\n",k++);
            continue;
        }
        for(i = 0;i<n-1;i++)
        {
            if(ar[i]<ar[i+1])h_j++;
            else if(ar[i]>ar[i+1])l_j++;
        }
        printf("Case %d: %d %d\n",k++,h_j,l_j);
        h_j = 0;
        l_j = 0;
    }
    return 0;
}
