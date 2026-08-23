#include<stdio.h>
int main()
{
	char s[10]="gnidoc 321";
	int i,j,l,t;
	for(l=0;s[l];l++);
	i=0,j=l-1;
	while(i<j)
	{
		t=s[i];
		s[i]=s[j];
		s[j]=t;

		i++;
		j--;
	}
	printf("%s",s);
	return 0;
}
