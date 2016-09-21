#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int k = 1;
    string s;
    while(cin >> s)
    {
        if(s=="#")break;
        else if(s=="HELLO")cout << "Case " << k++ << ": ENGLISH" << endl;
        else if(s=="HOLA")cout << "Case " << k++ << ": SPANISH" << endl;
        else if(s=="HALLO")cout << "Case " << k++ << ": GERMAN" << endl;
        else if(s=="BONJOUR")cout << "Case " << k++ << ": FRENCH" << endl;
        else if(s=="CIAO")cout << "Case " << k++ << ": ITALIAN" << endl;
        else if(s=="ZDRAVSTVUJTE")cout <<"Case " << k++ << ": RUSSIAN" << endl;
        else{
            cout << "Case " << k++ << ": UNKNOWN" << endl;
        }
    }
    return 0;
}
