#include<stdio.h>
int main()
{
	char s[20]="armstrong num";
	int i,j;
	i=0;
	while(i<3)
	{
		for(j=0;s[j];j++)
			s[j]=s[j+1];
		i++;
	}
	printf("%s\n",s);
	return 0;
}
