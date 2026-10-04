#include<stdio.h>
void rec_fib(int);
int main()
{
        int n;
        scanf("%d",&n);
        rec_fib(n);
        return 0;
}
void rec_fib(int n)
{
        static int a=0,b=1,c;
        if(n>0)
        {
                printf("%d ",a);
                c=a+b;
                a=b;
                b=c;
                rec_fib(n-1);
        }
}
