#include<stdio.h>
int main()
{
	int a[5]={10,15,64,100,511},i,pos,s=0,c=0;
	for(i=0;i<5;i++)
	{
		for(pos=31;pos>=0;pos--)
		{
			if(a[i]>>pos&1)
				s++;
			else
				c++;
		}
	}
	printf("set count =%d , clear count =%d\n",s,c);
}

