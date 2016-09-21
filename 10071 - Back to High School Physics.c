#include<stdio.h>
int main()
{
    int deplacement,velocity,time,mul;
    while(scanf("%d %d",&velocity,&time)==2)
    {
    deplacement=velocity*time;
    mul=deplacement*2;
    printf("%d\n",mul);
    }

    return 0;


}
