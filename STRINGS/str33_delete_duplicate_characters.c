#include<stdio.h>
int main()
{
	char s[20];
	int i,j,k;
	printf("Enter String: ");
	scanf("%[^\n]",s);
	for(i=0;s[i];i++)
		for(j=1+i;s[j];j++)
			if(s[i]==s[j])
			{
				for(k=j;s[k];k++)
					s[k]=s[k+1];
				j--;
			}
	printf("%s\n",s);
	return 0;
}
