#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t,x,i,j;
  while(cin >> t && t>0)
  {
    queue<int>que;
   for(i = 1;i<=t;i++)
   {
     que.push(i);
   }
   cout << "Discarded cards:";
   while(que.size()>1)
   {
      cout << " " << que.front();
      que.pop();
      x = que.front();
      que.pop();
      if(!que.empty())cout << ",";
      que.push(x);
   }
   cout << "\nRemaining card: ";
   cout << que.front() << endl;
   que.pop();
  }
  return 0;
}

