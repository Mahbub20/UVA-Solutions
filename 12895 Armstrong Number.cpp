#include<bits/stdc++.h>
using namespace std;
long long int power(int n,int r);
int check_armstrong(long long int n)
{
  long long int temp,digits = 0,remainder,sum;
  temp = n;
  while(temp!=0)
  {
      digits++;
      temp/=10;
  }
  temp = n;
  sum = 0;
  while(temp!=0)
  {
      remainder = temp%10;
      sum+=power(remainder,digits);
      temp/=10;
  }
  if(sum==n)return 1;
  else return 0;
}
long long int power(int n,int r)
{
    int c;
    long long int p = 1;
    for(c = 1;c<=r;c++)
    {
        p*=n;
    }
    return p;
}
int main()
{
    int t;
    long long int number;
    cin >> t;
    while(t--)
    {
        cin >> number;
        if(check_armstrong(number)==1)cout << "Armstrong\n";
        else cout << "Not Armstrong\n";
    }
    return 0;
}
