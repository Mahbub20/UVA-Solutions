#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
int main()
{
    int i,j;
    string ar;
    char al[48] = {'q','w','e','r','t','y','u','i','o','p','[',']',92,
                   'a','s','d','f','g','h','j','k','l',';',39,
                   'z','x','c','v','b','n','m',',','.','/',
                   '`','1','2','3','4','5','6','7','8','9','0','-','='};
    while(getline(cin,ar,'\n'))
    {
        for(i = 0;i<ar.size();i++)
        {
            if(ar[i]==' ' || ar[i]=='\n')
                cout << ar[i];
            for(j = 0;j<47;j++)
            {
                if(ar[i]==al[j])
                {
                    cout << al[j-2];
                }
            }
        }
        cout << endl;
    }
    return 0;
}
