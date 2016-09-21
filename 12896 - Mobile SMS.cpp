#include<bits/stdc++.h>
using namespace std;
char sms[10][10] = {" ",
                    ".,?\"" , "abc" , "def",
                    "ghi" , "jkl" , "mno",
                    "pqrs" , "tuv" , "wxyz"
                   };
int main()
{
    int t,ar[120],ar1[120],i,j,n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        for(i = 0;i<n;i++)
        {
            cin >> ar[i];
        }
        for(i = 0;i<n;i++)
        {
            cin >> ar1[i];
        }
        for(i = 0;i<n;i++)
        {
            cout << sms[ar[i]][ar1[i]-1];
        }
        puts("");
    }
    return 0;
}
