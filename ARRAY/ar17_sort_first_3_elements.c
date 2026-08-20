#include<stdio.h>
int main()
{
	int a[7]={11,33,22,2,9,1,6},i,j,t;
	for(i=0;i<7;i++)
		for(j=0;j<2;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	for(i=0;i<7;i++)
		printf("%d ",a[i]);
	printf("\n");
}

