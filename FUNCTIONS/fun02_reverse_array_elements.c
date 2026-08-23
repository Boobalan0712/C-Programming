#include<stdio.h>
void rev_fun(int *,int *,int);
int main()
{
	int a[6]={12,42,123,34,78,414},b[6],ele,i;
	ele=sizeof(a)/sizeof(a[0]);
	rev_fun(a,b,ele);
	for(i=0;i<ele;i++)
		printf("%d ",b[i]);
	printf("\n");
}
void rev_fun(int *p,int *q,int e)
{
	int i,j,temp,rev,div;
	for(i=0;i<e;i++)
	{
		temp=*p;
		rev=0;
		while(temp)
		{
			div=temp%10;
			rev=rev*10+div;
			temp/=10;
		}
		*q=rev;
		q++;
		p++;
	}
}
