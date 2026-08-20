#include<stdio.h>
int main()
{
	int a[6]={11,12,14,13,15,18},ele,i,j,o=0;
	ele=sizeof(a)/sizeof(a[0]);
	for(i=0;i<ele-1;i++)
		if(a[i]%2)
		{
			for(j=i;j<ele-1;j++)
				a[j]=a[j+1];
			i--;
			ele--;
		}
	for(i=0;i<ele;i++)
		printf("%d ",a[i]);
	printf("\n");
}
