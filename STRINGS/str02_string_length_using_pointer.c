#include<stdio.h>
int main()
{
	char s[20],*p;
	scanf("%s",s);
	p=s;
	while(*p)
		p++;
	printf("Length : %d",p-s);
}
