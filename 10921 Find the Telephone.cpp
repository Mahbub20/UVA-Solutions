#include<iostream>
#include<map>
#include<cstdio>
#include<cstring>
using namespace std;
char phn(char c)
{
    if(c=='0' || c == '1'|| c== '-')return c;
    if(c<='C')return '2';
    if(c<='F')return '3';
    if(c<='I')return '4';
    if(c<='L')return '5';
    if(c<='O')return '6';
    if(c<='S')return '7';
    if(c<='V')return '8';
    if(c<='Z')return '9';
}
int main()
{
   char ar[35];
   int i;
   while(cin >> ar)
   {
    for(i = 0;i<strlen(ar);i++)
    {
        cout << phn(ar[i]);
    }
    cout << endl;
   }
   return 0;
}
