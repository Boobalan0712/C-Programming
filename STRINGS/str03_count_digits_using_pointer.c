#include<stdio.h>
int main()
{
	char s[20]="p6c3s1 123 ok7";
	char *p=s;
	int c=0;
	while(*p)
	{
		if(*p>='0'&&*p<='9')
			c++;
		p++;
	}
	printf("Count = %d\n",c);
	return 0;
}
