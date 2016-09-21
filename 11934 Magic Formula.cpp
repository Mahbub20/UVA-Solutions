#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long int a,b,c,d,l,i,j,f,cnt;
  while(cin >> a >> b >> c >> d >> l)
  {
    if(a==0&&b==0&&c==0&&d==0&&l==0)break;
       cnt = 0;
       for(i = 0;i<=l;i++)
       {
         f = (i*i*a)+(b*i)+c;
         if(f%d==0)cnt++;
       }
       cout << cnt << endl;
  }
  return 0;
}
