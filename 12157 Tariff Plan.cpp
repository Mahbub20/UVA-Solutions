#include<iostream>
#include<map>
#include<cstdio>
#include<vector>
using namespace std;
int main()
{
    int t,n,a,mile,juice,k = 1,i;
    cin >> t;
    for(i = 0;i<t;i++)
    {
        mile = 0;
        juice = 0;
        cin >> n;
        while(n--)
        {
            cin >> a;
            mile+=(a+30)/30;
            juice+=(a+60)/60;
        }
        mile*=10;
        juice*=15;
        if(mile<juice)
        {
          printf("Case %d: Mile %d\n",k++,mile);
        }
        else if(juice<mile)
        {
            printf("Case %d: Juice %d\n",k++,juice);
        }
        else{
            printf("Case %d: Mile Juice %d\n",k++,mile);
        }
    }
    return 0;
}
