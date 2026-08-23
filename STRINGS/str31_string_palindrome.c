#include<stdio.h>
int main()
{
	char s[10],a[10],t;
	int i,j,l,c=0;
	scanf("%s",s);
	for(l=0;s[l];l++);
	i=0;
	j=l-1;
	while(s[i])
	{
		a[i]=s[j];
		i++;
		j--;
	}
	for(i=0;s[i];i++)
		if(s[i]==a[i])
			c++;
	if(c==l)
		printf("Yes. Palindrome.\n");
	else
		printf("Not Palindrome\n");
}
