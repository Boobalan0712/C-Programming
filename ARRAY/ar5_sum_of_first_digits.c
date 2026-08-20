#include<stdio.h>
int main()
{
	int a[5],i,temp,sum=0,ele,j;
	int *p=a;
	ele=sizeof(a)/sizeof(a[0]);
	for(i=0;i<ele;i++)
		scanf("%d",&p[i]);
	for(i=0;i<ele;i++)
	{
		temp=p[i];
		int c=0,div=1,rem;
		while(temp)
		{
			c++;
			temp/=10;
		}
		for(j=0;j<c-1;j++)
		{
			div=div*10;
		}
		rem=p[i]%div;
		printf("%d ",rem);
		//sum+=rem;
	}
	//printf("%d\n",sum);
}
