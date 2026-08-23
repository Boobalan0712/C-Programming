#include<stdio.h>
int main()
{
	char s[10]="pawan";
	int l,i;
	for(l=0;s[l];l++);
	for(i=2;i<l;i++)
		if(!(l%i))
			break;
	if(i==l)
		printf("yes %d is prime number.\n",l);
}
