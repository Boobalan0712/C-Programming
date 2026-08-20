#include<stdio.h>
int main()
{
	int a[7]={-1,22,3,-4,-8,33,77},ele,e,t,i,j;
	ele=sizeof(a)/sizeof(a[0]);
	e=ele;
	for(i=0;i<ele;i++)
		printf("%d ",a[i]);
	printf("\n");
	for(i=0;i<e;i++)
	{
		if(a[i]<0)
		{
			t=a[i];
			for(j=i;j<ele-1;j++)
				a[j]=a[j+1];
			a[ele-1]=t;
			e--;
			i--;
		}
	}
	for(i=0;i<ele;i++)
		printf("%d ",a[i]);
	printf("\n");
}
