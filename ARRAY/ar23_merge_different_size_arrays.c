#include<stdio.h>
int main()
{
	int a[2]={1,5},b[4]={11,22,33,44},c[6],i,k;
	i=0;
	k=0;
	while(i<2&&i<4)
	{
		c[k++]=a[i];
		c[k++]=b[i];
		i++;
	}
	while(i<2)
		c[k++]=a[i++];
	while(i<4)
		c[k++]=b[i++];
	for(i=0;i<6;i++)
		printf("%d ",c[i]);
	printf("\n");
}
