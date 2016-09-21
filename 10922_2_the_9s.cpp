#include<bits/stdc++.h>
using namespace std;
int main()
{   string s;
   int i,j,sum,f,tem,b,sum1,temp;
   bool trc;
   while(cin >> s)
   {
      if(s[0]=='0' && (s.size()==1))break;
      sum = 0;
      for(i = 0;i<s.size();i++)
      {
        sum+=s[i]-'0';
      }
      if(sum%9==0)trc = true;
      else trc = false;
      f = 1;
      tem = sum;
      if(trc==true)
      {
      while(tem!=9 && tem>9)
      {
       sum1 = 0;
      while(tem!=0)
      {
        b = tem%10;
        sum1+=b;
        tem/=10;
      }
      f++;
      tem = sum1;
      }
      }
        if(trc==true)
    cout << s << " is a multiple of 9 and has 9-degree " << f << "." << endl;
     else if(trc==false){
       cout << s << " is not a multiple of 9." << endl;
     }
   }
}
