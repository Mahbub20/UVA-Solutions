#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    while(scanf("%d",&a)==1 && a>0)
    {
        int cola = 0;
        int temp = a;
        while(a>=3)
        {
            a-=3;
            cola++;
            a+=1;
        }
        if(a==2)printf("%d\n",temp+cola+1);
        else{
            printf("%d\n",temp+cola);
        }
    }
    return 0;
}

