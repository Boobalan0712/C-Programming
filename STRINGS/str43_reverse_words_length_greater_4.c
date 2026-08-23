#include<stdio.h>
int main()
{
	char s[16]="ias abcde mkdir",t;
	int i,j,k,l,c;
	for(i=0;s[i];i++)
	{
		c=0;
		for(j=i;s[j]!=' '&&s[j];j++)
			c++;
		if(c>4)
		{
			for(k=i,l=j-1;k<l;k++,l--)
			{
				t=s[k];
				s[k]=s[l];
				s[l]=t;
			}
		}
	//	if(s[j])
			i=j;
	//	else 
	//		break;
	}
	printf("%s\n",s);
	return 0;
}
