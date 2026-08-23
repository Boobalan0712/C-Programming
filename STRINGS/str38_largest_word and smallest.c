#include<stdio.h>
int main()
{
	char s[20]="123 vector c ds";
	int i,j,count=0,max=0,start,pos;
        int min=20;
	for(i=0;s[i];i++)
	{
		if(s[i]!=' ')
		{
			count=0;
			start=i;
			for(j=i;s[j]!=' '&&s[j];j++)
				count++;
		/*	if(count>max)
			{
				max=count;
				pos=start;
			}         */
		/*	if(count<min)
			{
				min=count;
				pos=start;
			}          */
			i=j;
		}
	}
	for(i=pos;i<pos+max/*+min*/;i++)
		printf("%c",s[i]);
	printf("\n");
}
