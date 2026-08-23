#include<stdio.h>
int main()
{
	char s[20]="abcccababc",ch;
	int i,j,l,c=0;
	scanf("%c",&ch);
	for(l=0;s[l];l++);
	i=l-1;
	while(c<2)
	{
		if(ch==s[i])
		{
			c++;
			for(j=i;s[j];j++)
				s[j]=s[j+1];
		}
		i--;
	}
	printf("%s\n",s);
	return 0;
}
