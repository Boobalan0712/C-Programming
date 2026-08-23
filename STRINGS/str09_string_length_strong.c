#include<stdio.h>
int main()
{
	char s[10]="ve";
	int l,temp,i,j,div,sum,fact=1;
	for(l=0;s[l];l++);
	temp=l;
	sum=0;
	while(temp)
	{
		fact=1;
		div=temp%10;
		for(j=div;j>0;j--)
			fact=fact*j;
		sum+=fact;
		temp/=10;
	}
	if(sum==l)
		printf("%d is strong number.\n",l);
	else
		printf("%d is not strong number.\n",l);
	return 0;
}
