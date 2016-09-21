#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char ar[1000];
    int i,j,l;
    while(gets(ar))
    {
        l = strlen(ar);
        for(i = 0;i<l;i++)
        {
            printf("%c",ar[i]-7);
        }
        printf("\n");
    }
    return 0;
}

