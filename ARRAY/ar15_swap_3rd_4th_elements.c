#include<stdio.h>
int main()
{
	int a[6]={111,222,333,444,555,666},ele,*p,*q,t;
	ele=sizeof(a)/sizeof(a[0]);
	p=a;
	q=p+ele-1;
	*p=*p^*q;
	*q=*q^*p;
	*p=*p^*q;
	/*t=*p;
	*p=*q;
	*q=t; */
	for(t=0;t<ele;t++)
		printf("%d ",a[t]);
}
	
