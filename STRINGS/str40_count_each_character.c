#include<stdio.h>
int main()
{
	char s[20]="1213ac1c";
	int i,j,k,c;
	for(i=0;s[i];i++)
	{
		c=1;
		for(j=1+i;s[j];j++)
			if(s[i]==s[j])
			{
				c++;
				for(k=j;s[k];k++)
					s[k]=s[k+1];
				j--;
			}
		printf("%c-->%d,",s[i],c);
	}
	printf("\n");
	return 0;
}
