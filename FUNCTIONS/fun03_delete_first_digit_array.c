#include<stdio.h>
void del_fun(int *,int);
int main()
{
	int a[6]={12,142,1234,314,78,414},ele,i;
	ele=sizeof(a)/sizeof(a[0]);
	del_fun(a,ele);
	for(i=0;i<ele;i++)
		printf("%d ",a[i]);
	printf("\n");
}
void del_fun(int *p,int e)
{
	int i,j,temp,c,mod;
	for(i=0;i<e;i++)
	{
		temp=*p;
		c=0;
		while(temp)
		{
			c++;
			temp/=10;
		}
		temp=*p;
		mod=1;
		for(j=1;j<c;j++)
			mod=mod*10;
		temp=temp%mod;
		*p=temp;
		p++;
	}
}
