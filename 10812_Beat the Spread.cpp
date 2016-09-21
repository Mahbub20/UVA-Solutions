#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int s,d,a,b,n;
    cin >> n;
    while(n--)
    {
        cin >> s >> d;
        if(s<d || (s+d)%2==1)
        {
            printf("impossible\n");
            continue;
        }
        a = (s+d)/2;
        b = s-a;
        printf("%d %d\n",a,b);
    }
    return 0;
}
