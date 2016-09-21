#include<bits/stdc++.h>
using namespace std;
int check(int n)
{
    int i,j,len;
    char ar[10000];
    sprintf(ar,"%d",n);
    len = strlen(ar);
    for(i =  0;i<len-1;i++)
    {
        for(j = i+1;j<len;j++)
        {
            if(ar[i]==ar[j])
            {
                return 1;
            }
        }
    }
    return 0;
}
int main()
{
   int k,m,i,status,cnt;
   while(cin >> k >> m)
   {
       cnt = 0;
       for(i = k;i<=m;i++)
       {
           status = check(i);
           if(status==0)cnt++;
       }
       cout << cnt << endl;
   }
   return 0;
}
