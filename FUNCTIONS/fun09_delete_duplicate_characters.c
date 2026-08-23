#include<stdio.h>
void del_char(char *);
int main()
{
	char s[20]="abcaaabbccaa";
	del_char(s);
	printf("%s\n",s);
}
void del_char(char *s)
{
	int i,j,k;
	for(i=0;s[i];i++)
	{
		for(j=1+i;s[j];j++)
			if(s[i]==s[j])
			{
				for(k=j;s[k];k++)
					s[k]=s[k+1];
				j--;
			}
	}
}
