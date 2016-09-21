#include<iostream>
#include<cstdio>
using namespace std;
int gcd(int a,int b);
int main()
{
    int n,g,i,j;
    while(cin >> n && n>0)
    {
        g = 0;
        for(i = 1;i<n;i++)
        {
            for(j = i+1;j<=n;j++)
            {
              g+=gcd(i,j);
            }
        }
        cout << g << endl;
    }
    return 0;
}
int gcd(int a,int b)
{
    int c;
    while(a!=0)
    {
     c=b%a;
     b=a;
     a=c;
    }
    return b;
}
