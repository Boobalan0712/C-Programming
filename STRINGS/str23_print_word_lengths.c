#include<stdio.h>
int main()
{
	char s[20]="vector india pvt";
	int i,c;
	for(i=0;s[i];i++)
	{
		if(s[i]!=' ')
			c++;
		if(s[i]==' ')
		{
			printf("%d ",c);
			c=0;
		}
	}
	printf("%d\n",c);
	return 0;
}
