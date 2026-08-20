#include<stdio.h>
int main()
{
	int a[7]={2,4,2,6,145,28,1},c=0,sum,i,j,k,ele,div,temp;
	ele=sizeof(a)/sizeof(a[0]);
	for(i=0;i<ele;i++)
	{
		temp=a[i];
		sum=0;
		while(temp)
		{
			div=temp%10;
			for(j=div,k=div-1;k;k--)
				j=j*k;
			sum+=j;
			temp/=10;
		}
		if(a[i]==sum)
		{
			c++;
			printf("%d ",a[i]);
		}
	}
	printf(",count= %d",c);
	printf("\n");
}
