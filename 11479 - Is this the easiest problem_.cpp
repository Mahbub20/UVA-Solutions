//In the name of Allah
#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int t,k = 1;
    long long int a,b,c;
    cin >> t;
    while(t--)
    {
        cin >> a >> b >> c;
        if(a+b<=c || b+c<=a || c+a<=b)printf("Case %d: Invalid\n",k++);
        else if(a<=0 || b<=0 || c<=0)printf("Case %d: Invalid\n",k++);
        else if(a==b && b==c)printf("Case %d: Equilateral\n",k++);
        else if(a==b || b==c || c==a)printf("Case %d: Isosceles\n",k++);
        else{
            printf("Case %d: Scalene\n",k++);
        }
    }
    return 0;
}

