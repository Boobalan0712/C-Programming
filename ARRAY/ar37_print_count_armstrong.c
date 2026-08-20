#include<stdio.h>
int main()
{
	int a[7]={22,4,21,6,153,28,11},temp,i,j,ele,c=0,sum,pow,div,arm;
	ele=sizeof(a)/sizeof(a[0]);
	for(i=0;i<ele;i++)
	{
		temp=a[i];
		pow=0;
		while(temp)
		{
			pow++;
			temp/=10;
		}
		temp=a[i];
		sum=0;
		while(temp)
		{
			div=temp%10;
			arm=1;
			for(j=0;j<pow;j++)
				arm=arm*div;
			sum+=arm;
			temp/=10;
		}
		if(a[i]==sum)
		{
			c++;
			printf("%d ",a[i]);
		}
	}
	printf(",count = %d ",c);
	printf("\n");
}
