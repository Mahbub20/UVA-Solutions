#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
int main()
{
    int i,j,n,c = 1,k;
    cin >> k;
    while(k--)
    {
        cin >> n;
        printf("Case #%d: %d ",c++,n);
        for(i = 2,j = 0;j<2;i++)
        {
            if(n%i==0)
            {
                j++;
                printf("= %d * %d ",i,n/i);
            }
        }
        cout << endl;
    }
    return 0;
}
