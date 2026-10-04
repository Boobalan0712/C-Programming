#include<stdio.h>
int rec_rev(int);
int main()
{
        int n,rev;
        scanf("%d",&n);
        rev=rec_rev(n);
        printf("Rev is : %d\n",rev);
        return 0;
}
int rec_rev(int n)
{
        static int rev=0,div;
        if(n>0)
        {
                div=n%10;
                rev=rev*10+div;
                rec_rev(n/10);
        }
        else
                return rev;
}
