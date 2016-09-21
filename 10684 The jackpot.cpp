#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    long int n,ar[10000],i,j;
    while(cin >> n && n)
    {
        for(i = 0;i<n;i++)
        {
            cin >> ar[i];
        }
        int mx = 0,sum = 0;
        for(i = 0;i<n;i++)
        {
            sum+=ar[i];
             if(sum>mx)
        {
            mx = sum;
        }
        if(sum<0)sum = 0;
        }
       if(mx>0)
       {
           printf("The maximum winning streak is %d.\n",mx);
       }
       else{
        printf("Losing streak.\n");
       }
    }
    return 0;
}
