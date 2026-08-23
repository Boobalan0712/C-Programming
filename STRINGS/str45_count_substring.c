#include<stdio.h>
int main()
{
	char m[20]="abcd cd 12 cd",s[5]="cd";
	int i,j,k,l,c=0;
	for(l=0;s[l];l++);
	for(i=0;m[i];i++)
	{
		k=i;
		for(j=0;m[k]&&s[j]&&m[k]==s[j];j++,k++);
		if(j==l)
			c++;
	}
	printf("Count =%d\n",c);
	return 0;
}
