#include<stdio.h>
int main()
{
	int a[7]={11,23,22,44,55,44,88},ele,e,i,j,t;
	ele=sizeof(a)/sizeof(a[0]);
	e=ele;
	for(i=0;i<e;i++)
	{
		if(a[i]%2)
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
// 11 22 22 44 55 33 88
// 22 22 44 55 33 88 11
// 22 22 44 33 88 11 55
