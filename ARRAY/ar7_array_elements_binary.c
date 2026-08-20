#include<stdio.h>
int main()
{
	int a[5]={10,100,1000,100,10},pos,i;
	int *p=a;
	for(i=0;i<5;i++)
	{
		for(pos=31;pos>=0;pos--)
		{
			printf("%d",*(p+i)>>pos&1);
			if(!(pos%4))
				printf(" ");
		}
		printf("\n");
	}
}
