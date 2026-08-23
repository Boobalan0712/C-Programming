#include<stdio.h>
int main()
{
	char m[30]="coding 123abc vector ptr1",t;
	int i,j,k,l,st=0,c;
	for(i=0;m[i];i++)
	{
		st=i;
		c=0;
		for(j=i; m[j]!=' ' && m[j] ;j++)
			if(m[j]>='0'&&m[j]<='9')
				c++;
			if(c>0)
			{
				for(k=st,l=j-1;k<l;k++,l--)
				{
					t=m[k];
					m[k]=m[l];
					m[l]=t;
				}
			}
		i=j;
	}
	printf("%s\n",m);
	return 0;
}
