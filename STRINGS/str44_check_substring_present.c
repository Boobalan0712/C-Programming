#include<stdio.h>
int main()
{
	char m[20]="123 bc",s[10]="ab";
	int i=0,j,l=0,c=0;
	while(s[l])
		l++;
	while(m[i])
	{
		j=0;
		while(s[j])
		{
			if(s[j]==m[i])
			{
				c++;
				i++;
				j++;
			}
			else if(m[i])
				i++;
			else
				break;
		}
	}
	if(c==l)
		printf("Yes\n");
	else
		printf("No\n");
	return 0;
}
