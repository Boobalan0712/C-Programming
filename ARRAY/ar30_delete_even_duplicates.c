#include<stdio.h>
int main()
{
	int a[10]={3,3,2,4,4,2,5,3,4,9},i,j,k,ele;
	ele=sizeof(a)/sizeof(a[0]);
	for(i=0;i<ele-1;i++)
		for(j=1+i;j<ele;j++)
			if(a[i]==a[j]&&a[i]%2==0)
			{
				for(k=j;k<ele-1;k++)
					a[k]=a[k+1];
				j--;
				ele--;
			}
	for(i=0;i<ele;i++)
		printf("%d ",a[i]);
	printf("\n");
}
