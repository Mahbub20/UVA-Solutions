#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int mat[200][200],e,f,a,b,n,i,j,c,d;
    while(cin >> n && n>0)
    {
        e = 0;
        f = 0;
        for(i = 1;i<=n;i++)
        {
            for(j = 1;j<=n;j++)
            {
                cin >> mat[i][j];
            }
        }
        for(i = 1;i<=n;i++)
        {
            a = 0;
            for(j = 1;j<=n;j++)
            {
                a+=mat[i][j];
            }
            if(a%2!=0)
            {
                c = i;
                e++;
            }
        }
        for(j = 1;j<=n;j++)
        {
            b = 0;
            for(i = 1;i<=n;i++)
            {
                b+=mat[i][j];
            }
            if(b%2!=0)
            {
                d = j;
                f++;
            }
        }
        if(e==0 && f==0)cout << "OK\n";
        else if(e==1 && f==1)printf("Change bit (%d,%d)\n",c,d);
        else{
            printf("Corrupt\n");
        }
    }
    return 0;

}
