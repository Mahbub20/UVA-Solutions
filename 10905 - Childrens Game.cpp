#include<bits/stdc++.h>
using namespace std;
bool cmp(string a,string b)
{
  return (a+b)>(b+a);
}
int main()
{
  int t;
  string s;
  vector<string>vec;
  while(cin >> t && t>0)
  {
    for(int i = 0;i<t;i++)
  {
    cin >> s;
    vec.push_back(s);
  }
  sort(vec.begin(),vec.end(),cmp);
  for(int j = 0;j<t;j++)
  {
    cout << vec[j];
  }
  cout << endl;
  vec.clear();
  }

  return 0;
}
