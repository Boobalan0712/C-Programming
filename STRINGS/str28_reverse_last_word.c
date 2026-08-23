#include<stdio.h>
int main()
{
	char s[30]="vector india coding 123",t;
	int i,j,l;
	for(l=0;s[l];l++);
	i=l-1;
	j=i;
	while(s[j]!=' ')
		j--;
	j++;
	while(j<i)
	{
		t=s[i];
		s[i]=s[j];
		s[j]=t;
		j++;
		i--;
	}
	printf("%s\n",s);
}
