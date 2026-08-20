#include<stdio.h>
int main()
{
	int a[5],in,i,j;
	printf("Enter array ele: ");
	for(i=0;i<5;i++)
		scanf("%d",&a[i]);
	printf("Enter index: ");
	scanf("%d",&in);
	for(i=0;i<5;i++)
		if(i==in)
			for(j=i;j<5;j++)
				a[j]=a[j+1];
	for(i=0;i<5-1;i++)
		printf("%d ",a[i]);
	printf("\n");
}
