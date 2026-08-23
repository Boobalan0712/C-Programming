#include<stdio.h>
int main()
{
	char s[20]=" pawan coding sirji";
	int i;
	if(s[0]>='a'&&s[0]<='z')
		s[0]=s[0]^32;
	for(i=0;s[i];i++)
		if(s[i]==' ')
			if(s[i+1]>='a'&&s[i+1]<='z')
				s[i+1]=s[i+1]^32;
	printf("%s\n",s);
	return 0;
}
