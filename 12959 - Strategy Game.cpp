#include<bits/stdc++.h>
using namespace std;
int main()
{
  int j,r,ar[1010],i,n,rec[1010],k,sum,l,ind,mx;
  while(true)
  {
    cin >> j >> r;
    n = j*r;
    for(i = 0;i<n;i++)
    {
      cin >> ar[i];
    }
    for(i = 0;i<r;i++)
    {
      sum = 0;
    for(k = i;k<n;k+=j)
    {
      sum+=ar[k];
    }
    rec[i] = sum;
    }
    for(i = 0;i<j;i++)
    {
        mx = rec[0];
        if(mx<rec[i])
        {
          cout << "ok1\n";
          mx = rec[i];
          ind = i+1;
        }
      }
      cout << ind << endl;//if(mx==rec[i])ind = j;
    }
    //cout << mx << " " << ind << " " << endl;
  }

