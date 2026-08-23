#include<stdio.h>
int main()
{
	char s[10]="acbcccab",ch;
	scanf("%c",&ch);
	int i,j;
	for(i=0;s[i];i++)
		if(ch==s[i])
		{
			for(j=i;s[j];j++)
				s[j]=s[j+1];
			i--;
		}
	printf("%s\n",s);
	return 0;
}
