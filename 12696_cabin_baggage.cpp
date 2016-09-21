#include<bits/stdc++.h>
using namespace std;
int main()
{
    double l,w,d,wt,sum,c = 0,t;
    cin >> t;
    while(t--)
    {
        cin >> l >> w >> d >> wt;
        sum = l+w+d;
        if(((l<= 56.00 && w<= 45.00 && d<= 25.00 )||(sum<=125)) && wt<=7)
        {
            cout << "1" << endl;
            c++;
        }
        else {
            cout << "0\n";
        }
    }
    cout << c << endl;
}
