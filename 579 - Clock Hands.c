#include<stdio.h>
int main()
{
    double hour,minute,anghour,angminute,angle,rightangle;
    while(scanf("%lf:%lf",&hour,&minute)==2)
    {
        if(hour==0 && minute==0)
            {
                break;
            }
                anghour= hour*30 + 30*(minute*6)/360;
            angminute= minute*6;
        if(anghour>angminute)
            {
            angle= anghour-angminute;
            }
        else{
            angle= angminute-anghour;
            }
        if(angle>180)
        {
            rightangle= 360-angle;
            printf("%0.3lf\n",rightangle);
        }
        else{
            printf("%0.3lf\n",angle);
        }
    }
        return 0;
}
