#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,ar[1000010],i,j,m,d,b,c;
    while(cin >> n)
    {
      for(i = 0;i<n;i++)
    {
        cin >> ar[i];
    }
    cin >> m;
    d = 2000000;
    for(i = 0;i<n;i++)
    {
        for(j = 1;j<=n;j++)
        {
            if(ar[i]+ar[j]==m)
            {
                if(ar[i]>ar[j])
                {
                    if(ar[i]-ar[j]<d)
                    {
                        b = ar[j];
                        c = ar[i];
                        d = ar[i]-ar[j];
                    }
                }
                else{
                    if(ar[j]-ar[i]<d)
                    {
                        b = ar[i];
                        c = ar[j];
                        d = ar[j]-ar[i];
                    }
                }
            }
        }
    }
    printf("Peter should buy books whose prices are %lld and %lld.\n\n",b,c);
    }
    return 0;
}
