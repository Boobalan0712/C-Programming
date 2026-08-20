#include<stdio.h>
int main()
{
	int a[10]={3,3,2,4,4,1,2,3,7,9},d=0,i,j,ele,k;
	ele=sizeof(a)/sizeof(a[0]);
	for(i=0;i<ele-1;i++)
	{
		for(j=1+i;j<ele-d;j++)
			if(a[i]==a[j])
			{
				for(k=j;k<ele-1-d;k++)
					a[k]=a[k+1];
				j--;
				d++;
			}
	}
	for(i=0;i<ele-d;i++)
		printf("%d ",a[i]);
	printf("\n");
}
