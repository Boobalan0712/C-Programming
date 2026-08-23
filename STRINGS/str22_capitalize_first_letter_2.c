#include<stdio.h>
int main()
{
	char s[30]="pawan coding sirji";
	int i;
	for(i=0;s[i];i++)
		if(s[i]!=' '&&(i==0||s[i-1]==' '))
			if(s[i]>='a'&&s[i]<='z')
				s[i]=s[i]^32;
	printf("%s\n",s);
	return 0;
}
