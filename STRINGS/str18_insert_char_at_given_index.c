#include<stdio.h>
int main()
{
	char s[20]="abcdef",ch;
	int index,i,j,l;
	for(l=0;s[l];l++);
	printf("Enter index to insert:");
	scanf("%d",&index);
	printf("Enter char to insert on index:");
	scanf(" %c",&ch);
	for(j=l;j>=index;j--)
		s[j+1]=s[j];
	s[index]=ch;
	printf("%s\n",s);
	return 0;
}
