#include<stdio.h>
int del_count_fun(char *);
int main()
{
	char s[20]="a1b2c3d4123";
	int c=del_count_fun(s);
	printf("%s\n",s);
	printf("digit count= %d\n",c);
	return 0;
}
int del_count_fun(char *s)
{
	int i,j,c=0;
	for(i=0;s[i];i++)
	{
		if(s[i]>='0'&&s[i]<='9')
		{
			c++;
			for(j=i;s[j];j++)
				s[j]=s[j+1];
			i--;
		}
	}
	return c;
}
