#include<stdio.h>
int main()
{
	int a[10]={3,3,2,4,4,2,5,3,4,9},c,i,j,k,ele;
	ele=sizeof(a)/sizeof(a[0]);
	for(i=0;i<ele-1;i++)
	{
		c=1;
		for(j=1+i;j<ele;j++)
		{
			if(a[i]==a[j])
			{
				c++;
				for(k=j;k<ele-1;k++)
					a[k]=a[k+1];
				j--;
				ele--;
			}
		}
		if(c>1)
		printf("%d ->%d times, ",a[i],c);
	}
	printf("\n");
}
