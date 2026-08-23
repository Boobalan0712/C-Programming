#include<stdio.h>
int main()
{
	char s[20];
	int i,j,k,c;
	printf("Enter String: ");
	scanf("%[^\n]",s);
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
		if(c>2)	
			printf("%c-->%d\n",s[i],c);
	}
}
