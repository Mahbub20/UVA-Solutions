#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
  char a[100000];
  int l,i,j,c = 0;
  while(gets(a))
  {
      l = strlen(a);
      for(i = 0;i<l;i++)
      {
          if(a[i]=='"')
          {
            c++;
            if(c%2==1)
            {
              cout << "``";
            }
            else{
                cout << "''";
            }
          }
          else{
            cout << a[i];
          }

      }
      cout << endl;
  }
  return 0;
}
