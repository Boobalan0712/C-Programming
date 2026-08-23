#include<stdio.h>
#include<string.h>
int main()
{
	char s[20]="vector india coding",t;
	int i,j,l;
	l=strlen(s);
	for(i=0,j=l-1;i<j;i++,j--)
	{
		t=s[i];
		s[i]=s[j];
		s[j]=t;
	}
	i=0;
	j=0;
l:
	if(s[j]!=' ')
	{
		j++;
		goto l;
	}
	j--;
r:
	if(i<j)
	{
		t=s[i];
		s[i]=s[j];
		s[j]=t;
		j--;
		i++;
		goto r;
	}
	for(i=0;s[i]!=' ';i++)
		printf("%c",s[i]);
	printf("\n");
	return 0;
}
