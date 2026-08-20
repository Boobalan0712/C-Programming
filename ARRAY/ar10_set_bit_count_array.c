#include<stdio.h>
int main()
{
	int a[5],b[5],i,s,pos;
	for(i=0;i<5;i++)
		scanf("%d",&a[i]);
	for(i=0;i<5;i++)
	{
		s=0;
		for(pos=31;pos>=0;pos--)
			if(a[i]>>pos&1)
				s++;
		b[i]=s;
	}
	for(i=0;i<5;i++)
		printf("%d ",b[i]);
	return 0;
}
