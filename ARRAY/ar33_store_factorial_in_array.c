#include<stdio.h>
int main()
{
	int a[4]={4,5,6,4},b[4],i,f,ele,j;
	ele=sizeof(a)/sizeof(a[0]);
	for(i=0;i<ele;i++)
	{
		for(j=a[i],f=a[i]-1;f>0;f--)
			j=j*f;
		b[i]=j;
	}
	for(i=0;i<ele;i++)
		printf("%d ",b[i]);
	printf("\n");
}
