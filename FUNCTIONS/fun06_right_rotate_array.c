#include<stdio.h>
void rotate_fun(int *,int,int);
int main()
{
	int a[6]={-2,2,-5,-12,5,-7},i,ele,n;
	ele=sizeof(a)/sizeof(a[0]);
	printf("Enter no of right rotation :");
	scanf("%d",&n);
	rotate_fun(a,ele,n);
	for(i=0;i<ele;i++)
		printf("%d ",a[i]);
	printf("\n");
}
void rotate_fun(int *p,int e,int r)
{
	int i,j,temp;
	for(i=0;i<r;i++)
	{
		j=e-1;
		temp=p[j];
		for(j=e-1;j>=0;j--)
		{
			p[j]=p[j-1];
		}
		p[0]=temp;
	}
}
