#include<bits/stdc++.h>
using namespace std;
int main()
{
  string words[] = {"Happy", "birthday", "to", "you", "Happy", "birthday", "to", "you", "Happy", "birthday", "to", "Rujia", "Happy", "birthday", "to", "you" };
  int i,j = 0,k = 0,n,m = 1;
  string ar[110];
  cin >> n;
  for(i = 0;i<n;i++)
  {
    cin >> ar[i];
  }
  if(n>16)m = ceil(n/16)+1;
  for(i = 0;i<m*16;i++,j++,k++)
  {
     if(j==n)j = 0;
     if(k==16)k = 0;
     cout << ar[j] << ": " << words[k] << endl;
  }
  return 0;
}
