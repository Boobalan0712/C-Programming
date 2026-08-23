#include<stdio.h>
int main()
{
	char m[20]="abc45 78abc",s[10]="abc";
	int i,j,k,l,n;
	for(l=0;s[l];l++);
	for(i=0;m[i];i++)
	{
		k=i;
		for(j=0;s[j]&&m[k]&&m[k]==s[j];j++,k++);
		if(l==j)
		{
			while(j)
			{
				for(n=i;m[n];n++)
					m[n]=m[n+1];
				j--;
			}
		}
	}
	printf("%s\n",m);
	return 0;
}
