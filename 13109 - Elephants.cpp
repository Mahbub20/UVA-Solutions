#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long int t,n,w,i,j,p,sum,cnt;
  vector<int>vec;
  cin >> t;
  for(j = 0;j<t;j++)
  {
    sum = 0;
    cnt = 0;
    cin >> n >> w;
    for(i = 0;i<n;i++)
    {
      cin >> p;
      vec.push_back(p);
    }
    sort(vec.begin(),vec.end());
    for(i = 0;i<vec.size();i++)
    {
      sum+=vec[i];
      if(sum>w)break;
      cnt++;
    }
    cout << cnt << endl;
    vec.clear();
  }
  return 0;
}
