#include<stdio.h>
int main()
{
	int a[5],i,ele,sum=0;
	ele=sizeof(a)/sizeof(a[0]);
	for(i=0;i<ele;i++)
	{
		scanf("%d",&a[i]);
		sum+=a[i];
	}
	printf("%d\n",sum);
}
