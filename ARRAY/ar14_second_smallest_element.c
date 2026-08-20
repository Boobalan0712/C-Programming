#include<stdio.h>
int main()
{
	int a[7],i,s,ss;
	for(i=0;i<7;i++)
		scanf("%d",&a[i]);
	s=a[0];
	ss=0;
	for(i=1;i<7;i++)
	{
		if(a[i]<s)
		{
			ss=s;
			s=a[i];
		}
		else if(a[i]<ss&&a[i]!=s)
			ss=a[i];
	}
	printf("First small is %d\n",s);
	printf("Second small is %d\n",ss);
}
