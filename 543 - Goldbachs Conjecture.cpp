#include<bits/stdc++.h>
using namespace std;
bool isprime(int n)
{
  bool flag = false;
  for(int i = 2;i<=sqrt(n);i++)
  {
    if(n%i==0)
    {
      flag = true;
      break;
    }
  }
  if(flag==false)return true;
  else return false;
}
int main()
{
 int n,i,j;
 while(cin >> n && n)
 {
   for(i = 3;i<n-2;i++)
   {
     if(isprime(i))
     if(isprime(n-i))
     {
        printf("%d = %d + %d\n",n,i,n-i);
        break;
     }
   }
 }
 return 0;
}
