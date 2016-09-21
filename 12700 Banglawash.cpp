#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,mtc,mxB,mxW,mxT,mxA,k = 1;
    string str;
    cin >> t;
    while(t--)
    {
        mxB = 0;
        mxW = 0;
        mxT = 0;
        mxA = 0;
       cin >> mtc;
       cin >> str;
       for(int i = 0;i<mtc;i++)
       {
           if(str[i]=='B')mxB++;
           else if(str[i]=='W')mxW++;
           else if(str[i]=='T')mxT++;
           else{
            mxA++;
           }
       }
       if(mxA==mtc)printf("Case %d: ABANDONED\n",k++);
       else if((mxB+mxA)==mtc)printf("Case %d: BANGLAWASH\n",k++);
       else if((mxW+mxA)==mtc)printf("Case %d: WHITEWASH\n",k++);
       else if(mxB>mxW)
       {
        printf("Case %d: BANGLADESH %d - %d\n",k++,mxB,mxW);
       }
       else if(mxB<mxW)
       {
        printf("Case %d: WWW %d - %d\n",k++,mxW,mxB);
       }
       else{
        printf("Case %d: DRAW %d %d\n",k++,mxB,mxT);
       }
    }
    return 0;
}
