#include<stdio.h>
int main()
{
	int a[6],res,i;
	for(i=0;i<6;i++)
		scanf("%d",&a[i]);
	res=a[0];
	for(i=1;i<6;i++)
		if(a[i]<res)
			res=a[i];
	printf("res = %d\n",res);
}
