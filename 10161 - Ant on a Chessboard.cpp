#include<bits/stdc++.h>
using namespace std;
int main()
{
  int root,n,c,i,x,y;
  while(1)
  {
     cin >> n;
     if(n==0)break;
     root = ceil(sqrt(n));
     c = root*root-root+1;
     x = y = root;
     if(root%2==0)
     {
       if(n>c)y-=n-c;
       else x-=c-n;
     }
     else{
        if(n>c)x-=n-c;
        else y-=c-n;
     }
     cout << x << " " << y << endl;
  }
  return 0;
}
