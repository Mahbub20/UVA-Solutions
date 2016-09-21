#include<bits/stdc++.h>
using namespace std;
bool palindrome(char str[])
{
	int len = strlen(str),i;
	for(i=0;i<=strlen(str)/2;i++)
    {
		if(str[i]!=str[len-1-i])
			return false;
	}
	return true;
}

int main()
{
	char str[1000],str2[1000];
	int i,j;
	while(gets(str) && strcmp(str,"DONE"))
    {
        i=0;
		j=0;
		while(str[i]!='\0')
        {
			if((str[i]>='A' && str[i]<='Z') || (str[i]>='a' && str[i]<='z'))
				str2[j++] = tolower(str[i]);
			i++;
		}
		str2[j] = '\0';

		if(palindrome(str2))
            printf("You won't be eaten!\n");
		else
            printf("Uh oh..\n");
	}
	return 0;
}
