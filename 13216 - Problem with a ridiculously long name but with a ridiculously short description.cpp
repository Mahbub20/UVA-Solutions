#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t,i,j,len;
  string str;
  cin >> t;
  while(t--)
  {
    //getchar();
    cin >> str;
    len = str.size();
    if(str.size()==1 && str[0]=='1')cout << "66" << endl;
    else if(str.size()==1 && str[0]=='0')cout << "1" << endl;
    else{
       i = str[len-1] - '0';
       i%=5;
       switch(i)
       {
         case 0:
           cout << "76" << endl;
           break;

        case 1:
           cout << "16" << endl;
           break;

        case 2:
           cout << "56" << endl;
           break;

        case 3:
           cout << "96" << endl;
           break;

        case 4:
           cout << "36" << endl;
           break;
       }

    }
  }
  return 0;
}
