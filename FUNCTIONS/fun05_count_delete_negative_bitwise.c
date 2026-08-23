#include<stdio.h>
int count_del_fun(int *,int);
int main()
{
	int a[6]={-2,2,-5,-12,5,-7},ele,c,i;
	ele=sizeof(a)/sizeof(a[0]);
	c=count_del_fun(a,ele);
	printf("-ve number count =%d\n",c);
	for(i=0;i<ele-c;i++)
		printf("%d ",a[i]);
	return 0;
}
int count_del_fun(int *p,int e)
{
	int i,j,c=0;
	for(i=0;i<e;i++)
	{
		if(p[i]<0)
		{
			c++;
			for(j=i;j<e-1;j++)
			{
				p[j]=p[j+1];
			}
			e--;
			i--;
		}
	}
	return c;
}
