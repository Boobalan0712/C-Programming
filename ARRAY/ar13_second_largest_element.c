#include<stdio.h>
int main()
{
	int a[7],i,sl,l;
	for(i=0;i<7;i++)
		scanf("%d",&a[i]);
	l=a[0];
	sl=0;
	for(i=1;i<7;i++)
	{
		if(a[i]>l)
		{
			sl=l;
			l=a[i];
		}
		else if(a[i]>sl&&a[i]!=l)
			sl=a[i];
	}
	if(sl==0)
		printf("Second largest is not present\n");
	printf("Second largest is : %d\n",sl);
}
