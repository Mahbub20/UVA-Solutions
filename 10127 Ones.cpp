#include<iostream>
using namespace std;
int main()
{
    int n,m,c;
    while(cin >> n)
    {
        m = 1;
        c = 1;
        while(m%n)
        {
            c++;
            m = (m*10+1)%n;
        }
        cout << c << endl;
    }
    return 0;
}
