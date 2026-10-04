#include<stdio.h>
int rec_fact(int);
int main()
{
        int n;
        scanf("%d",&n);
        printf("factorial of %d is %d\n",n,rec_fact(n));
        return 0;
}
int rec_fact(int n)
{
        static int fact;
        if(n>0)
        {
                fact=n*rec_fact(n-1);
        }
        else
                return 1;
}
