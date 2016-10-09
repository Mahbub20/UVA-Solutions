#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long int t,cday,cmonth,cyear,pday,pmonth,pyear,term1,term2;
  int k = 1;
  char c;
  cin >> t;
  while(t--)
  {
    cin >> cday >> c >> cmonth >> c >> cyear;
    cin >> pday >> c >> pmonth >> c >> pyear;
    term1 = cyear*10000+cmonth*100+cday;
    term2 = pyear*10000+pmonth*100+pday;
    int res;
    if(term1>term2)
    res = (term1-term2);
    res = res/10000;
    printf("Case #%d: ",k++);
    if(term2>term1)cout << "Invalid birth date\n";
    else if(res>130)cout << "Check birth date\n";
    else if(res<=130)cout << res << endl;
    else if(cday==pday || cmonth==pmonth) cout << "0\n";
  }
  return 0;
}
