#include<stdio.h>
int main()
{
	int a[5]={2,4,6,28,6},sum,ele,i,j;
	ele=sizeof(a)/sizeof(a[0]);
	for(i=0;i<ele;i++)
		printf("%d ",a[i]);
	printf("\n");
	for(i=0;i<ele;i++)
	{
		sum=0;
		for(j=1;j<a[i];j++)
			if(!(a[i]%j))
				sum+=j;
		if(a[i]==sum)
		{
			printf("num= %d, pos= %d\n",a[i],i);
			break;
		}
	}
}
