#include<stdio.h>
int main()
{
	char s[20];
	printf("Enter string: ");
	scanf("%[^\n]",s);
	int i,j;
	for(i=0;s[i];i++)
		if(s[i]=='_'&&s[i+1]=='_')
		//if(s[i]==' '&&s[i+1]==' ')
			for(j=i;s[j];j++)
				s[j]=s[j+1];
	printf("%s",s);
}
