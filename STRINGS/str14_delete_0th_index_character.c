#include<stdio.h>
int main()
{
	char s[20]="coding sirji";
	int i,index,j;
	printf("Enter index to delete:");
	scanf("%d",&index);
	for(i=0;s[i];i++)
		if(i==index)
			for(j=i;s[j];j++)
				s[j]=s[j+1];
	printf("%s\n",s);
	return 0;
}
