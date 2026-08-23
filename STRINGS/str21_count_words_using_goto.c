#include<stdio.h>
int main()
{
	char s[20]="hi 5 #$2 cs";
	int i,l,c=0;
	for(l=0;s[l];l++);
	i=0;
l:
	if(s[i]!=' '&&(i==0||s[i-1]==' '))
			c++;
	i++;
	if(i<l)
		goto l;
	printf("Word count=%d\n",c);
	return 0;
}
