#include<stdio.h>
int main()
{
	int a[5],pos1,pos2,i,j;
	printf("Enter array ele: ");
	for(i=0;i<5;i++)
		scanf("%d",&a[i]);
	printf("Enter pos1: ");
	scanf("%d",&pos1);
	printf("Enter pos2: ");
	scanf("%d",&pos2);
	for(i=0;i<5;i++)
	{
		if(i==pos1)
			for(j=i;j<4;j++)
			{
				a[j]=a[j+1];
			}
		if(pos1<pos2)
			pos2--;
		if(i==pos2)
			for(j=i;j<3;j++)
			{
				a[j]=a[j+1];
			}
	}
	for(i=0;i<5-2;i++)
		printf("%d ",a[i]);
	printf("\n");
}
