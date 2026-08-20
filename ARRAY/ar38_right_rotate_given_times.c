#include<stdio.h>
int main()
{
	int a[7]={11,21,31,41,51,61,71},t,rot,i,j,ele;
	ele=sizeof(a)/sizeof(a[0]);
	for(i=0;i<ele;i++)
		printf("%d ",a[i]);
	printf("\n");
	printf("Enter no. of rotation on right: ");
	scanf("%d",&rot);
	int k;
	for(i=0,k=0;i<rot;i++)
	{
		t=a[ele-1];
		for(j=ele;j>0;j--)
			a[j]=a[j-1];
		a[k]=t;
	}
	for(i=0;i<ele;i++)
		printf("%d ",a[i]);
	printf("\n");
}
