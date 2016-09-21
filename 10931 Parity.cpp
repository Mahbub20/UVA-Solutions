#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    long long int n,c,l, bin[1000],k,p;
    while(cin >> n && n>0)
    {
       k = 0;
      while (n!=0)
    {
        bin[k] = n%2;
        n/=2;
        k++;
    }
    c = 0;
    printf("The parity of ");
    for(p = k-1;p>=0;p--)
    {
       cout << bin[p];
       if(bin[p]==1)
       {
           c++;
       }
    }
    printf(" is %lld (mod 2).\n",c);
    }
    return 0;
}

