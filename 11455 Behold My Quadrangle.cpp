#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
    long long int ar[4];
    int i,n;
    cin >> n;
    while(n--)
    {
        for(i = 0;i<4;i++)
        {
             cin >> ar[i];
        }
        sort(ar,ar+4);
        if(ar[0]==ar[1] && ar[2]==ar[3])
        {
            if(ar[0]==ar[2])
            {
                cout << "square\n";
            }
            else{
                cout << "rectangle\n";
            }
        }
        else{
            if(ar[0]+ar[1]+ar[2]>ar[3])
            {
                cout << "quadrangle\n";
            }
            else{
                cout << "banana\n";
            }
    }
    }

    return 0;
}
