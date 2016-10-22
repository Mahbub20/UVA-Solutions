#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long int i,j,k,n,temp,product,c = 1;
  while(cin >> n)
  {
    vector<long long> vec(n);
    for(i = 0;i<n;i++)
    {
      cin >> vec[i];
    }
    product = 0;
    for(i = 0;i<vec.size();i++)
    {
       for(j = i;j<vec.size();j++)
       {
         temp = 1;
         for(k = i;k<=j;k++)
         {
           temp*=vec[k];
         }
         product = max(product,temp);
       }
    }
    printf("Case #%lld: The maximum product is %lld.\n\n",c++,product);
  }
  return 0;
}
