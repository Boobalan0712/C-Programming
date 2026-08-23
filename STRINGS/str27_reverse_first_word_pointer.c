#include<stdio.h>
int main()
{
	char s[20]="vector india pvt",*p,*q,t;
	int i,j;
	p=s;
	q=p;
	while(*p!=' ')
	{
		q=p++;
	}
	p=s;
	while(p<q)
	{
		t=*p;
		*p=*q;
		*q=t;
		p++;
		q--;
	}
	printf("%s\n",s);
	return 0;
}

