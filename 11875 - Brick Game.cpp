#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int ar[100],t,n,i,k = 1;
    cin >> t;
    while(t--)
    {
        cin >> n;
       for(i = 0;i<n;i++)
       {
           cin >> ar[i];
       }
       printf("Case %d: %d\n",k++,ar[i/2]);
    }
    return 0;
}
