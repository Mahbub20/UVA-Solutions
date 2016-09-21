#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t,n,i,j,f,k = 1;
  string s,s1,s2;
  vector<string>vec;
  cin >> t;
  while(t--)
  {
    cin >> n;
    for(i = 0;i<n;i++)
    {
      cin >> s;
      vec.push_back(s);
    }
    cin >> s1;
    cout << "Case " << k++ << ":" << endl;
    for(i = 0;i<n;i++)
    {
       f = 0;
       s2 = vec[i];
       for(j = 0;j<s1.size();j++)
       {
         if(s2[j]!=s1[j])f++;
       }
       if(f<=1)cout << s2 << endl;
    }
    vec.clear();
  }
  return 0;
}
