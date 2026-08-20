#include<stdio.h>
int main()
{
	int a[7],ele,i,j,num;
	ele=sizeof(a)/sizeof(a[0]);
	i=0;
	num=1;
	while(i<ele)
	{
		for(j=2;j<num;j++)
			if(!(num%j))
				break;
		if(num==j)
		{
			a[i]=num;
			i++;
		}
		num++;
	}
	for(i=0;i<ele;i++)
		printf("%d ",a[i]);
	printf("\n");
}
