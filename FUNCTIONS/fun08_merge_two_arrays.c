#include<stdio.h>
void in_fun(int *,int *,int *,int,int,int);
int main()
{
	int a[3],b[3],c[6],i,ele1,ele2,ele3;
	ele1=sizeof(a)/sizeof(a[0]);
	ele2=sizeof(b)/sizeof(b[0]);
	ele3=sizeof(c)/sizeof(c[0]);
	printf("Enter 1st array elements: ");
	for(i=0;i<ele1;i++)
		scanf("%d",&a[i]);
	printf("Enter 2nd array elements: ");
	for(i=0;i<ele2;i++)
		scanf("%d",&b[i]);
	in_fun(a,b,c,ele1,ele2,ele3);
	printf("Third array: ");
	for(i=0;i<ele3;i++)
		printf("%d ",c[i]);
	printf("\n");
	return 0;
}
void in_fun(int *a,int *b,int *c,int e1,int e2,int e3)
{
	int i,j,k=0;
	for(i=0,j=0;i<e1&&j<e2;i++,j++)
	{
		c[k++]=a[i];
		c[k++]=b[j];
	}
	for(i;i<e1;i++)
		c[k++]=a[i];
	for(j;j<e2;j++)
		c[k++]=b[j];
}
