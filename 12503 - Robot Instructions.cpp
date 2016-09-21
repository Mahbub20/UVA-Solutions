#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,s1[110];
    int t,n,m,pos;
    cin >> t;
    while(t--)
    {
        pos = 0;
        cin >> n;
        for(int i = 1;i<=n;i++)
        {
            cin >> s;
            if(s=="LEFT")
            {
                s1[i] = s;
                pos--;
            }
            else if(s=="RIGHT")
            {
                s1[i] = s;
                pos++;
            }
            else {
                cin >> s;
                cin >> m;
                if(s1[m]=="LEFT")
                {
                    s1[i] = s1[m];
                    pos--;
                }
                else
                {
                    pos++;
                    s1[i] = s1[m];
                }
            }
        }
        cout << pos << endl;
    }
    return 0;
}
