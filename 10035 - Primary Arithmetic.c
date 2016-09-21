#include<stdio.h>
int main()
{
   long long unsigned int n,m,count,carry;
    while(scanf("%llu %llu",&n,&m)==2)
    {
    if(n==0 && m==0)break;
    carry = 0;
    count = 0;
    while(n>0 || m>0)
    {
        carry = n%10 + m%10 + carry;
        if(carry>=10)
        {
            count++;
        }
        carry/=10;
        n/=10;
        m/=10;
    }
    if(count==0)
    {
        printf("No carry operation.\n");
    }
    else if(count==1)
    {
        printf("1 carry operation.\n");
    }
    else{
        printf("%llu carry operations.\n",count);
    }
    }
    return 0;
}
