#include<stdio.h>
int main()
{
	char s[20]="123 hello by6",* cp;
	int sum=0;
	cp=s;
	while(*cp)
	{
		if(*cp>='0'&&*cp<='9')
			sum = sum + *cp-48;
		cp++;
	}
	printf("sum = %d\n",sum);
	return 0;
}
