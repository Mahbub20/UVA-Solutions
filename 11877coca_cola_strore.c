#include<stdio.h>
int main()
{
    int n,cola;
    while(scanf("%d",&n)!=EOF && n>0)
    {
        cola = 0;
        while(n>=3)
        {
            n-=3;
            cola++;
            n+=1;
        }
        if(n==2)
        {
            printf("%d\n",cola+1);
        }
        else{
            printf("%d\n",cola);
        }

    }
    return 0;

}
