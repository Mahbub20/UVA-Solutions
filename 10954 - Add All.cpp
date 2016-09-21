#include<iostream>
#include<queue>
using namespace std;
int main()
{
  long int n,i,num,sum;
  while(cin >> n && n)
  {
    priority_queue< int,vector<int>,greater<int> >pq;
    for(i = 0;i<n;i++)
    {
      cin >> num;
      pq.push(num);
    }
    if(n==1)
    {
      cout << num << endl;
      continue;
    }
    sum = 0;
    while(pq.size()>1)
    {
       num = pq.top();
       pq.pop();
       num+=pq.top();
       pq.pop();
       sum+=num;
       pq.push(num);
    }
    cout << sum << endl;
  }
  return 0;
}
