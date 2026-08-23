#include<stdio.h>
void rev_word_fun(char *);
int count_word_fun(char *);
int main()
{
	char s[30];
	printf("Enter string: ");
	scanf("%[^\n]",s);
	rev_word_fun(s);
	printf("%s\n",s);
	printf("Word count = %d\n",count_word_fun(s));
}
void rev_word_fun(char *p)
{
	int i,j;
	char *q,*r,t;
l:
	r=p;
	while(*r&&*r!=' ')
		r++;
	q=r-1;
	while(p<q)
	{
		t=*p;
		*p=*q;
		*q=t;
		p++;
		q--;
	}
	if(*r)
	{
		p=r+1;
		goto l;
	}
}
int count_word_fun(char *p)
{
	int i,j,c=0,k=0;
	for(i=0;p[i];i++)
	{
		if(p[i]!=' ')
		{
			if(p[i]>='0'&&p[i]<='9')
				c++;
		}
		else if(c>0)
		{
			k++;
			c=0;
		}
	}
	if(c>0)
		k++;
	return k;
}
