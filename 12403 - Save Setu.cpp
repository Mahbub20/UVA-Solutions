#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,d,result,t1,sum = 0,f,k = 1;
    string s,s1;
    cin >> f;
    while(f--)
    {
      cin >> t;
    while(t--){
        cin >> s;
        if(s == "donate"){
            cin >> d;
            sum+=d;
        }
        else
         printf("Case %lld:\n%lld\n",k,sum);
    }
    k++;
    sum = 0;
    }
    return 0;
}
