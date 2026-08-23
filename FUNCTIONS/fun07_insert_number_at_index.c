#include<stdio.h>
void in_fun(int *,int,int,int);
int main()
{
	int a[6],i,n,p,ele;
	ele=sizeof(a)/sizeof(a[0]);
	for(i=0;i<ele-1;i++)
		scanf("%d",&a[i]);
	printf("Enter pos and num: ");
	scanf("%d %d",&p,&n);
	in_fun(a,ele,p,n);
	for(i=0;i<ele;i++)
		printf("%d ",a[i]);
	printf("\n");
}
void in_fun(int *p,int e,int pos,int n)
{
	int i;
	for(i=e-1;i>pos;i--)
	{
		p[i]=p[i-1];
	}
	p[pos]=n;
}
