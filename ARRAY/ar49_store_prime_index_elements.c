#include<stdio.h>
int main()
{
	int a[8]={11,22,33,44,55,66,77,88},b[8],k=0,ele,c,i,j;
	ele=sizeof(a)/sizeof(a[0]);
	for(i=0;i<ele;i++)
	{
		c=0;
		for(j=2;j<=i;j++)
			if(!(i%j))
				c++;
		if(c==1)
			b[k++]=a[i];
	}
	for(i=0;i<k;i++)
		printf("%d ",b[i]);
	printf("\n");
}
