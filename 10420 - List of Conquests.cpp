#include<bits/stdc++.h>
using namespace std;
int main()
{
  set<string>st;
  map<string,int>mp;
  set<string>::iterator it;
  int i,j,t;
  string s,line;
  cin >> t;
  getchar();
  while(t--)
  {
    cin >> s;
    getline(cin,line);
    mp[s]++;
    st.insert(s);
  }
  for(it = st.begin();it!=st.end();it++)
  {
    cout << *it << " " << mp[*it] << endl;
  }
  return 0;
}
