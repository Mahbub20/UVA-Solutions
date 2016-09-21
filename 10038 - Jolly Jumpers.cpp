#include<iostream>
#include<stdio.h>
#include<algorithm>

using namespace std;
int main()
{
    int i, j, k, l, m, n, o, p,diff;

    int ar[3001];
    while(scanf("%d",&n)==1)
    {
        int c = 0, jolly=0;
        int dif_array[3001];
        for(i=0; i<n; i++)
        {

            scanf("%d", &ar[i]);
            dif_array[i]= 0;
        }
        for(j=0; j<n-1; j++)
        {
            dif_array[j] = abs(ar[j]-ar[j+1]);
            c++;
        }
        sort(dif_array, dif_array+n-1);

        if(dif_array[0]>1)jolly = 1;
        else
        {
            for(k=0; k<c-1; k++)
            {
                if(abs((dif_array[k] - dif_array[k+1])) == 1)
                {
                    continue;
                }
                else
                {
                    jolly = 1;
                    break;
                }
            }
        }

        if(jolly == 0)
        {
            printf("Jolly\n");
        }
        else
        {
            printf("Not jolly\n");
        }
    }
    return 0;
}
