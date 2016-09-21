#include<bits/stdc++.h>
using namespace std;
int search(char ar[],char c,int n)
{
  int i;
  for(i = 0;i<n;i++)
  {
    if(ar[i]==c)return i;
  }
  return -1;
}
void printPostorder(char preor[],char inor[],int n)
{
  int root = search(inor,preor[0],n);
  if(root!=0)
  {
    printPostorder(preor+1,inor,root);
  }
  if(root!=n-1)
  {
    printPostorder(preor+root+1,inor+root+1,n-root-1);
  }
  cout << preor[0];
}

int main()
{
  int t,n,l,m;
  char inor[100],preor[100];
  cin >> t;
  getchar();
  while(t--)
  {
    cin >> n >> preor >> inor;
    printPostorder(preor,inor,n);
    cout << endl;
  }
}
