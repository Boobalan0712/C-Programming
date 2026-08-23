#include<stdio.h>
int main()
{
	char s[10]="123456",ch;
	int i,j,l,c=0;
k:
	printf("Enter char to insert:");
	scanf(" %c",&ch);
	for(l=0;s[l];l++);
	for(i=l;i>=0;i--)
	{
		s[i+1]=s[i];
	}
	c++;
	s[0]=ch;
	if(c<2)
		goto k;
	printf("%s\n",s);
	return 0;

}
