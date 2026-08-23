#include<stdio.h>
int main()
{
	char s[20]="abc pqr aeio";
	int i=0,j,c=0;
	do
	{
		if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
			c++;
		i++;
	}
	while(s[i]);
	printf("Vowel Count = %d\n",c);
	return 0;
}
