#include<stdio.h>
#include<math.h>
int bin(int a);
int hex(int b);
int main()
{
    long long int m,res,res1;
    int n;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%lld",&m);
        res = bin(m);
        res1 = hex(m);
        printf("%lld %lld\n",res,res1);
    }
    return 0;
}
int bin(int a)
{
    int temp,count = 0;
    while(a!=0)
    {
        temp = a%2;
        a/=2;
        if(temp==1)
        {
         count++;
        }
    }
    return count;
}
int hex(int b)
{
    int k,tab,c = 0;
    while(b!=0)
    {
        tab = b%10;
        b/=10;
        if(tab==0)
        {
           c+=0;
        }
        else if(tab==1||tab==2||tab==4||tab==8)
        {
            c+=1;
        }
        else if(tab==3||tab==5||tab==6||tab==9)
        {
            c+=2;
        }
        else if(tab==7)
        {
            c+=3;
        }
    }
    return c;
}
