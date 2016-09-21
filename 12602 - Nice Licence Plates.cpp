#include<bits/stdc++.h>
using namespace std;
int main()
{
    //stringstream ss;
    //string ar,temp;
    char ar[4];
    int t,i,j,n,sum,cmp,result;
    int cnv[3];
    cin >> t;
    while(t--)
    {
        sum = 0;
        scanf("%3s-%d",ar,&n);
        /*cin >> ar;
        ss << ar;
        while(getline(ss,temp,'-'))
        {
            if(stringstream(temp)>>n)
            {
                cout << n << endl;
            }
        }*/
        for(i = 0;i<3;i++)
        {
            cnv[i] = ar[i]-65;
            sum+=cnv[i]*pow(26,2-i);
        }
        //cout << sum << endl;
        result = abs(n-sum);
        if(result<=100)cout << "nice" << endl;
        else cout << "not nice" << endl;
    }
    return 0;
}
