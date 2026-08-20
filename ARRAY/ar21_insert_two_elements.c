#include<stdio.h>
int main()
{
	int a[9]={30,11,45,34,14,8,50},l=0,ele,num,i;
	ele=sizeof(a)/sizeof(a[0]);
	scanf("%d",&num);
	for(i=0;i<ele;i++)
		if(a[i]!=0)
			l++;
	for(i=0;i<ele;i++)
		printf("%d ",a[i]);
	printf("\n");
	for(i=l;i>=0;i--)
		a[i+(ele-l)]=a[i];
	a[0]=num;
	num-=11;
	a[1]=num;	
	for(i=0;i<ele;i++)
		printf("%d ",a[i]);
	printf("\n");
}
