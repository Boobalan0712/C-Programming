#include<stdio.h>
void sum_fun(int *,int *,int);
int main()
{
	int a[6]={1,22,121,34,78,444},b[6];
	int i,ele=sizeof(a)/sizeof(a[0]);
	sum_fun(a,b,ele);
	for(i=0;i<ele;i++)
		printf("%d ",b[i]);
	return 0;
}
void sum_fun(int *p,int *q,int e)
{
	int i,j,temp,div,sum;
	for(i=0;i<e;i++)
	{
		temp=*p;
		sum=0;
		while(temp)
		{
			div=temp%10;
			sum+=div;
			temp/=10;
		}
		*q=sum;
		p++;
		q++;
	}
}
