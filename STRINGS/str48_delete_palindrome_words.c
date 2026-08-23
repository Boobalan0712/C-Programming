#include<stdio.h>
int main()
{
	char s[20]="laxmi madam vector",a[20],t;
	int i,j,k,b,c,d,e;
	for(i=0;s[i];i++)
	{
		for(j=i;s[j]!=' '&&s[j];j++);
		for(b=0,i,k=j-1;k>=i&&s[k]!=' ';k--,b++)
		{
			a[b]=s[k];
		}
		a[b]='\0';
		k=i;
		c=0;
		for(b=0;a[b]&&a[b]==s[k];b++,k++)
			c++;
		e=j-i;
		if(e==c)
		{
			while(e+1)
			{
				for(d=i;s[d];d++)
					s[d]=s[d+1];
				e--;
			}
		}
		i=j;
	}
	printf("%s\n",s);
}
