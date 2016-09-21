#include<iostream>
#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<math.h>
using namespace std;
int main()
{
    char ar[30];
    int l,i,j,n,flag;
    while(gets(ar))
    {
        flag = 0;
        int sum = 0;
        l = strlen(ar);
        for(i = 0;i<l;i++)
        {
            if(ar[i]>='a'&& ar[i]<='z')
            {
                n = toascii(ar[i])-96;
                sum+=n;
            }
            else{
                n = toascii(ar[i])-38;
                sum+=n;
            }
        }
        for(j = 2;j<=sqrt(sum);j++)
        {
            if(sum%j==0)
            {
              flag = 1;
              break;
            }
        }
        if(flag==0 || sum==1)
        {
            printf("It is a prime word.\n");
        }
        else{
            printf("It is not a prime word.\n");
        }
    }
    return 0;
}
