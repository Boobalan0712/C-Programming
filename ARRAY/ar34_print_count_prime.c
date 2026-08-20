#include<stdio.h>
int main()
{
	int a[7]={3,4,5,6,7,8,9},i,j,ele,c=0;
	ele=sizeof(a)/sizeof(a[0]);
	for(i=0;i<ele;i++)
	{
		for(j=2;j<a[i];j++)
			if(!(a[i]%j))
				break;
		if(a[i]==j)
		{
			printf("%d ",a[i]);
			c++;
		}
	}
	printf("count = %d ",c);
	printf("\n");
}
