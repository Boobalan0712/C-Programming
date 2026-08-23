#include<stdio.h>
int main()
{
	char s[10]="bcd",*p=s;
	int pos,i,c=0;
	while(*p)
	{
		c=0;
		for(pos=31;pos>=0;pos--)
			if(*p>>pos&1)
				c++;
		p++;
		printf("%d ",c);
	}
	printf("\n");
}
