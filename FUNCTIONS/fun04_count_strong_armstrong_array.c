#include<stdio.h>
int strong_fun(int *,int);
int armstrong_fun(int *,int);
int main()
{
	int a[6]={2,153,145,2,3,153},ele;
	ele=sizeof(a)/sizeof(a[0]);
	printf("Strong number count = %d\n",strong_fun(a,ele));
	printf("Armstrong number count = %d\n",armstrong_fun(a,ele));
}
int strong_fun(int *p,int e)
{
	int i,j,c=0,sum,fact,rem,temp;
	for(i=0;i<e;i++)
	{
		temp=*p;
		sum=0;
		while(temp)
		{
			rem=temp%10;
			fact=1;
			for(j=rem;j>0;j--)
				fact=fact*j;
			sum+=fact;
			temp/=10;
		}
		if(sum==*p)
			c++;
		p++;
	}
	return c;
}
int armstrong_fun(int *p,int e)
{
	int i,j,div,temp,pow,c,sum,count=0;
	for(i=0;i<e;i++)
	{
		temp=*p;
		c=0;
		while(temp)
		{
			c++;
			temp/=10;
		}
		temp=*p;
		sum=0;
		while(temp)
		{
			div=temp%10;
			for(pow=1,j=c;j>0;j--)
				pow=pow*div;
			sum+=pow;
			temp/=10;
		}
		if(sum==*p)
			count++;
		p++;
	}
	return count;
}
