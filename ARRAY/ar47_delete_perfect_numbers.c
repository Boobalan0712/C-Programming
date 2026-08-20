#include<stdio.h>
int main()
{
	int a[6]={6,6,7,28,6,5,24},ele,sum,e,i,j;
	ele=sizeof(a)/sizeof(a[0]);
	for(i=0;i<ele;i++)
	{
		sum=0;
		for(j=1;j<a[i];j++)
			if(!(a[i]%j))
				sum+=j;
		if(a[i]==sum)
		{
			for(j=i;j<ele-1;j++)
				a[j]=a[j+1];
			ele--;
			i--;
		}
	}
	for(i=0;i<ele;i++)
		printf("%d ",a[i]);
	printf("\n");
}
