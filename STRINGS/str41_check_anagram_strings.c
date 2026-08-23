#include<stdio.h>
int main()
{
	char s1[10],s2[10];
	scanf("%s %s",s1,s2);
	int i,j,c=0,k=0,l;
	for(l=0;s1[l];l++);
	for(i=0;s2[i];i++);
	if(l!=i)
	{
		printf("Not Anagram.\n");
		return 0;
	}
	for(i=0;s1[i];i++)
	{
		c=0;
		k=0;
		for(j=0;s2[j];j++)
			if(s1[i]==s2[j])
				c++;
		for(j=0;s1[j];j++)
			if(s1[i]==s1[j])
				k++;
		if(c!=k)
		{
			printf("Not anagram.\n");
			return 0;
		}
	}
	printf("Yes both string are Anagram\n");
	return 0;
}
