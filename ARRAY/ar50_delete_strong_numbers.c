#include<stdio.h>
int main()
{
	int a[6]={2,145,2,14,3,2},temp,ele,sum,div,fact,i,j;
	ele=sizeof(a)/sizeof(a[0]);
	for(i=0;i<ele;i++)
	{
		temp=a[i];
		sum=0;
		while(temp)
		{
			fact=1;
			div=temp%10;
			for(j=div;j>0;j--)
				fact=fact*j;
			sum+=fact;
			temp/=10;
		}
		if(a[i]==sum)
		{
			for(j=i;j<ele-1;j++)
				a[j]=a[j+1];
			ele--;
			i--;
		}
	}
	for(i=0;i<ele;i++)
		printf("%d ",a[i]);
	printf("\n");
}
