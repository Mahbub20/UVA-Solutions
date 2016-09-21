#include<iostream>
using namespace std;
int main()
{
    long long int m,rev,tab,flag;
    int n;
    cin >> n;
    while(n--)
    {
        cin >> m;
        tab = m;
        flag = 0;
        while(1)
        {
            rev = 0;
            while(tab!=0)
            {
                rev = rev*10;
                rev = rev + tab%10;
                tab/=10;
            }
            if(rev==m)break;
            else{
                tab = rev+m;
                m = rev+m;
                flag++;
            }
        }
        cout << flag << " " << m << endl;

    }

    return 0;
}
