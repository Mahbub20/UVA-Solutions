#include<bits/stdc++.h>
using namespace std;
int main()
{
  int i,j,n,w,h,spot;
  while(cin >> w >> h >> n && w!=0)
  {
     vector<vector<int> >board(w,vector<int>(h,0));
     spot = w*h;
    for(int k = 0;k<n;++k)
  {
    int x1,y1,x2,y2;
    cin >> x1 >> y1 >> x2 >> y2;
     for(i = min(x1,x2)-1;i<=max(x1,x2)-1;++i)
  {
    for(j = min(y1,y2)-1;j<=max(y1,y2)-1;++j)
    {
      if(board[i][j]==0)
      {
        --spot;
        board[i][j] = 1;
      }
    }
  }
  }
  if(spot==0)cout << "There is no empty spots.\n";
  else if(spot==1)cout << "There is one empty spot.\n";
  else cout << "There are " << spot <<  " empty spots.\n";
  }
  return 0;
}
