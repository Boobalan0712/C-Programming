#include<stdio.h>
int main()
{
	int a[7]={3,4,5,6,7,28,9},i,j,c=0,sum,ele;
	ele=sizeof(a)/sizeof(a[0]);
	for(i=0;i<ele;i++)
	{
		sum=0;
		for(j=1;j<a[i];j++)
		{
			if(!(a[i]%j))
				sum+=j;
		}
		if(sum==a[i])
		{
			c++;
			printf("%d ",a[i]);
		}
	}
	printf(",count=%d",c);
	printf("\n");
}
