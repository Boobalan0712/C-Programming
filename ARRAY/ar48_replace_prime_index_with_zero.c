#include<stdio.h>
int main()
{
	int a[8]={11,22,0,0,55,0,77,0},c,ele,i,j;
	ele=sizeof(a)/sizeof(a[0]);
	for(i=0;i<ele;i++)
	{
		c=0;
		for(j=2;j<=i;j++)
			if(!(i%j))
				c++;
		if(c==1)
			a[i]=0;
	}
	for(i=0;i<ele;i++)
		printf("%d ",a[i]);
	printf("\n");
}
