#include<stdio.h>
int main()
{
	int a[3]={1,5,7},b[3]={11,22,33},c[6],i,j;
	for(i=0;i<3;i++)
		printf("%d ",a[i]);
	printf("\n");
	for(i=0;i<3;i++)
		printf("%d ",b[i]);
	printf("\n");
	for(i=0,j=0;i<3;i++)
	{
		c[j++]=a[i];
		c[j++]=b[i];
	}
	for(i=0;i<6;i++)
		printf("%d ",c[i]);
	printf("\n");
}
