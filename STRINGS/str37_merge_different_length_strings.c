#include<stdio.h>
int main()
{
	char s1[10],s2[10],s3[20];
	int i,j,k=0;
	printf("Enter First string s1 : ");
	scanf("%s",s1);
	printf("Enter Second string s2 : ");
	scanf("%s",s2);
	for(i=0,j=0;s1[i]&&s2[j];i++,j++)
	{
		s3[k++]=s1[i];
		s3[k++]=s2[j];
	}
	while(s1[i])
		s3[k++]=s1[i++];
	while(s2[j])
		s3[k++]=s2[j++];
//	for(j=0;s2[j];j++)
//		s3[k++]=s2[j];
	s3[k]=s2[j];
	printf("%s\n",s3);
	return 0;
}
