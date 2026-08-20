#include<stdio.h>
int main()
{
	int a[7]={2,3,5,7,11,13},ele,pos,i,num;
	ele=sizeof(a)/sizeof(a[0]);
	for(i=0;i<ele;i++)
		printf("%d ",a[i]);
	printf("Enter num: ");
	scanf("%d",&num);
	for(pos=0;pos<ele;pos++)
		if(a[pos]>num)
			break;
	for(i=ele+1;i>pos;i--)
		a[i]=a[i-1];
	a[pos]=num;
	for(i=0;i<ele;i++)
		printf("%d ",a[i]);
}
