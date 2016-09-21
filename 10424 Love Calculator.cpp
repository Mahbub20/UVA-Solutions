#include<iostream>
#include<ctype.h>
#include<map>
#include<cstdio>
using namespace std;
string str,str1;
int summation(int k , string st)
{
    char c;
    map<char,int>mp;
    int j = 1,i,sum = 0,sum1;;
    for(c = 'a';c<='z';c++)
    {
        mp[c] = j++;
    }
    int temp;
    for(i = 0;i<k;i++)
    {
        if(isalpha(st[i]))
        {
        if(isupper(st[i]))
        {
            sum+= mp[tolower(st[i])];
        }
        else{
            sum+= mp[st[i]];
        }
        }
    }
     while(sum>9)
        {
            sum1 = 0;
            while(sum!=0)
            {
            temp =sum%10;
            sum1+=temp;
            sum/=10;
            }
            sum = sum1;
        }
        return sum1;
}
int main()
{
    char c;
    double str_sum,str1_sum,f_sum,avg;
    int l1,l2;
    while(getline(cin,str))
    {
        getline(cin,str1);
        l1 = str.size();
    l2 = str1.size();
    str_sum = summation(l1 , str);
    str1_sum = summation(l2 , str1);
    if(str_sum<str1_sum)
    {
        avg = (double)(str_sum / str1_sum)*100.0;
    }
    else{
        avg = (double)(str1_sum / str_sum)*100.0;
    }
    printf("%.2lf %\n",avg);
    }
    return 0;
}
