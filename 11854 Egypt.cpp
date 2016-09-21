#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
    int a,b,c,res,res1,s,f;
    while(cin >> a >> b >> c && a>0 && b>0 && c>0)
    {
        if(a>b && a>c)
        {
            res = pow(a,2);
            res1 = pow(b,2)+pow(c,2);
        }
        else if(b>a && b>c)
        {
             res = pow(b,2);
            res1 = pow(a,2)+pow(c,2);
        }
        else{
            res = pow(c,2);
            res1 = pow(a,2)+pow(b,2);
        }
        if(res==res1)cout << "right" << endl;
        else{
            cout << "wrong" << endl;
        }
    }
    return 0;
}
