#include<stdio.h>
int main()
{
	char s[20]="abc3456 567abc";
	int i,j,temp;
	for(i=0;s[i];i++)
	{
		if(s[i]>='0'&&s[i]<='9')
		{
			temp=s[i]-48;
			for(j=2;j<temp;j++)
				if(!(temp%j))
					break;
			if(temp==j)
			{
				for(j=i;s[j];j++)
					s[j]=s[j+1];
				i--;
			}
		}
	}
	printf("%s\n",s);
	return 0;
}
