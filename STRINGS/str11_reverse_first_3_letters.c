#include<stdio.h>
int main()
{
	char s[20]="gnidoc coding";
	int i,j,r,t;
	printf("%s\n",s);
	printf("Enter no to reverse: ");
	scanf("%d",&r);
	for(i=0,j=r-1;i<j;i++,j--)
	{
		t=s[i];
		s[i]=s[j];
		s[j]=t;
	}
	printf("%s\n",s);
	return 0;
}
