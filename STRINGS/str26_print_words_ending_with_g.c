#include<stdio.h>
int main()
{
	char s[20]="c dg coding doing";
	int i,j,c=0;
	for(i=0;s[i];i++)
	{
		c++;
		if(s[i]=='g')
		{
			for(j=i;s[j]!=' ';j--);
			j++;
			for(j;j<c;j++)
				printf("%c",s[j]);
			printf(" ");
		}
	}
	printf("\n");
	return 0;
}


