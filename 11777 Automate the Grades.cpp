#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
    int ar[8],i,j,n,sum,sum1,t_sum,k = 1;
    cin >> n;
    while(n--)
    {
        sum = 0;
        for(i = 0;i<7;i++)
        {
            cin >> ar[i];
        }
        for(i = 0;i<4;i++)
        {
            sum+=ar[i];
        }
        sort(ar+4,ar+7);
        sum1 = (ar[5]+ar[6])/2;
        t_sum = sum+sum1;
        if(t_sum>=90)printf("Case %d: A\n",k++);
        else if(t_sum>=80 && t_sum<90)printf("Case %d: B\n",k++);
        else if(t_sum>=70 && t_sum<80)printf("Case %d: C\n",k++);
        else if(t_sum>=60 && t_sum<70)printf("Case %d: D\n",k++);
        else{
            printf("Case %d: F\n",k++);
        }
    }
    return 0;
}
