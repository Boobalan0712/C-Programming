#include<stdio.h>
int main()
{
	int a[10],i,e=0,p=0,n=0,o=0;
	for(i=0;i<9;i++)
		scanf("%d",&a[i]);
	for(i=0;i<9;i++)
	{
		if(a[i]>=0)
		{
			if(!(a[i]%2))
				e++;
			else
				o++;
			p++;
		}
		else
			n++;
	}
	printf("+ve = %d, -ve = %d , odd = %d ,even = %d\n",p,n,o,e);
}
