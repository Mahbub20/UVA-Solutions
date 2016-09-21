#include<iostream>
using namespace std;
int main()
{
  int p,r,q;
  while(cin >> p >> r)
  {
    q = p-1;
    int ar[q],cnt = 0,sum = 0,i,j,bnk,b,sub;
    for(i = 0;i<r;i++)
    {
       sum = 0;
       cin >> bnk;
       cin >> b;
    for(j = 0;j<q;j++)
    {
      cin >> ar[j];
      sum+=ar[j];
    }
    //cout << sum << endl;
    if(sum>=bnk)continue;
    if(sum+b>bnk)b = 0;
    sub = bnk-sum;
    if(sub>=10000)cnt+=(10000-b);
    else if(sub>=1000)cnt+=(1000-b);
    else if(sub>=100)cnt+=(100-b);
    else if(sub>=10)cnt+=(10-b);
    else if(sub>=1)cnt+=(1-b);
    }
    cout << cnt << endl;
  }
  return 0;
}
