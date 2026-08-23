#include<stdio.h>
int main()
{
	char s[20]="covid19 a12b";
	int i,j;
	for(i=0;s[i];i++)
		if(s[i]>='0'&&s[i]<='9')
		{
			for(j=i;s[j];j++)
				s[j]=s[j+1];
			i--;
		}
	printf("%s\n",s);
	return 0;
}
