#include<bits/stdc++.h>
/*using namespace std;
int main()
{
    int t,q,p,ar[10001],ar1[10001],rp,c,l = 0,i,j;
    while(cin >> t >> q)
    {
      for( i = 0;i<t;i++)
      {
          cin >> ar[i];
      }
      for(j = 0;j<q;j++)
      {
          cin >> ar1[j];
      }
      sort(ar,ar+t);
       printf("CASE# %d:\n",++l);
      for(i = 0;i<t;i++)
      {
          rp = 0;
          for(j = 0;i<q;i++)
          {
              if(ar1[j]==ar[i] && rp!=1)
              {
                   printf("%d found at %d\n",ar1[j],i+1);
                   rp = 1;
              }
          }
          if(rp==0)printf("%d not found\n",ar1[j]);
      }
    }
    return 0;
}*/
using namespace std;
int a[10001],b[10001];
int main()
{
    int q,n,s,d,i,k,j,l;

    l=0;
    while(scanf("%d%d",&n,&q)==2)
    {
        if(n==0&&q==0) break;

        for(i=0;i<n;i++)scanf("%d",&a[i]);
        for(i=0;i<q;i++)scanf("%d",&b[i]);

        sort(a,a+n);

        printf("CASE# %d:\n",++l);

        for(i=0;i<q;i++)
        {k=0;
            for(j=0;j<n;j++)
            {
                if(b[i]==a[j]&&k!=1)
                {
                   printf("%d found at %d\n",b[i],j+1);
                   k=1;
                }
            }
            if(k==0)printf("%d not found\n",b[i]);
        }
    }

    return 0;
}
