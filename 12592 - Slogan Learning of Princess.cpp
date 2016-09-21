#include<bits/stdc++.h>
using namespace std;
int main()
{
   map<string,string>mp;
   int t,n;
   string s,s1,s3;
   cin >> t;
   cin.ignore();
   while(t--)
   {
       getline(cin,s);
       getline(cin,s1);
       mp[s] = s1;
   }
   cin >> n;
   cin.ignore();
   while(n--)
   {
       getline(cin,s3);
       cout << mp[s3] << endl;
   }
    return 0;
}
