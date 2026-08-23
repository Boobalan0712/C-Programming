#include<stdio.h>
int main()
{
	char s[20],t;
	int i,j,k;
	printf("Enter String to reverse by words: ");
	scanf("%[^\n]",s);
	for(i=0;s[i];)
	{
		j=i;
		while(s[j]&&s[j]!=' ')
			j++;
		k=j-1;
		while(i<k)
		{
			t=s[k];
			s[k]=s[i];
			s[i]=t;
			i++;
			k--;
		}
		if(s[j])
			i=j+1;
		else
			break;
	}
	printf("%s\n",s);
	return 0;
}
