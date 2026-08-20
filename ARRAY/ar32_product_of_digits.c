#include<stdio.h>
int main()
{
	int a[5]={11,202,234,456,90},i,ele,temp,prd,div;
	ele=sizeof(a)/sizeof(a[0]);
	for(i=0;i<ele;i++)
	{
		temp=a[i];
		prd=1;
		while(temp)
		{
			div=temp%10;
			prd=prd*div;
			temp/=10;
		}
		a[i]=prd;
	}
	for(i=0;i<ele;i++)
		printf("%d ",a[i]);
	printf("\n");
}
