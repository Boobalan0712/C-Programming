#include<stdio.h>
int main()
{
	char s[10]="program";
	int len,i;
	for(len=0;s[len];len++);
	for(i=0;i<len;i++)
	{
		printf("%c--> %d  %o  %x\n",s[i],s[i],s[i],s[i]);
	}
	return 0;
}
