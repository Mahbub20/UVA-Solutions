#include<bits/stdc++.h>
using namespace std;
bool is_cool(string word)
{
   int let[27];memset(let,0,sizeof(let));
   int i,j,k,cnt;
   bool store[40];memset(store,false,sizeof(store));
   for(i = 0;i<word.size();i++)
   {
     let[word[i]-'a']++;
   }
   cnt = 0;
   for(i = 0;i<27;i++)
   {
     if(let[i]>0)
     {
        if(store[let[i]]==false)store[let[i]] = true;
        else return false;
        cnt++;
     }
   }
   if(cnt<=1)return false;
   return true;
}
int main()
{
  string word;
  long long cnt,t,k = 1;
  while(cin >> t)
  {
  cnt = 0;
  while(t--)
  {
    cin >> word;
    if(is_cool(word))cnt++;
  }
  cout << "Case " << k++ << ": " << cnt << endl;
  }

  return 0;
}
