#include<stdio.h>
int main()
{
	char s[10]="Aa1Bb2Cc3",t;
	int i,j,k;
	i=0;
	while(s[i])
	{
		j=1+i;
		while(s[j])
		{
			if(s[i]>s[j])
			{
				t=s[i];
				s[i]=s[j];
				s[j]=t;
			}
			j++;
		}
		i++;
	}
	printf("%s\n",s);
}
