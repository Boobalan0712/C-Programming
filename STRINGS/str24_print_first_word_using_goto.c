#include<stdio.h>
int main()
{
	char s[20]=" vector india pvt";
	int i;
	i=0;
l:
	printf("%c",s[i]);
	i++;
	if(s[i]!=' ')
		goto l;
	printf("\n");
	return 0;
}
