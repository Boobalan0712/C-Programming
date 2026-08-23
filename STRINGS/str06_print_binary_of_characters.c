#include<stdio.h>
int main()
{
	char s[20]="12 ab AB";
	char *p=s;
	int pos;
	while(*p)
	{
		if(*p==32)
			goto l;
		printf("%c =",*p);
		for(pos=31;pos>=0;pos--)
		{
			printf("%d",*p>>pos&1);
		}
		printf("\n");
l:
		p++;
	}
}
