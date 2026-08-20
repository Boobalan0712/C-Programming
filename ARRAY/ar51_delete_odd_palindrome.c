#include<stdio.h>
int main()
{
	int a[6]={22,141,222,45,33,77},temp,ele,i,rev,div,j;
	ele=sizeof(a)/sizeof(a[0]);
	for(i=0;i<ele;i++)
	{
		if(a[i]%2)
		{
			temp=a[i];
			rev=0;
			while(temp)
			{
				div=temp%10;
				rev=rev*10+div;
				temp/=10;
			}
			if(a[i]==rev)
			{
				for(j=i;j<ele-1;j++)
					a[j]=a[j+1];
				ele--;
				i--;
			}
		}
	}
	for(i=0;i<ele;i++)
		printf("%d ",a[i]);
	printf("\n");
	return 0;
}
