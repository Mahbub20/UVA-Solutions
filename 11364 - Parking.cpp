#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t,n,i,ar[101],dis;
    cin >> t;
    while(t--)
    {
        cin >> n;
        for(i = 0;i<n;i++)
        {
            cin >> ar[i];
        }
        int maxx = *max_element(ar,ar+n);
        int minn = *min_element(ar,ar+n);
        dis = (maxx-minn)*2;
        cout << dis << endl;
    }
    return 0;
}
