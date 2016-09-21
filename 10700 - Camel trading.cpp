#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll addFirst(string s)
{
 stack<ll>stk;
 istringstream ss(s);
 ll num,mn = 1;
 char c;
 ss>> num;
 stk.push(num);
 while(ss>>c)
 {
   if(c=='+')
   {
     ll x = stk.top();
     stk.pop();
     ss >> num;
     stk.push(num+x);
   }
   else{
      ss >> num;
      stk.push(num);
   }
 }
 while(!stk.empty())
 {
  mn*=stk.top();
  stk.pop();
 }
 return mn;
}
ll multiFirst(string s)
{
  stack<ll>stk;
 istringstream ss(s);
 ll num,mn = 0;
 char c;
 ss>> num;
 stk.push(num);
 while(ss>>c)
 {
   if(c=='*')
   {
     ll x = stk.top();
     stk.pop();
     ss >> num;
     stk.push(num*x);
   }
   else{
      ss >> num;
      stk.push(num);
   }
 }
 while(!stk.empty())
 {
  mn+=stk.top();
  stk.pop();
 }
 return mn;
}
int main()
{
  ll t;
  string line;
  cin >> t;
  getchar();
  while(t--)
  {
    getline(cin,line);
    printf("The maximum and minimum are %lld and %lld.\n",addFirst(line),multiFirst(line));
  }
}
