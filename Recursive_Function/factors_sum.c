#include<stdio.h>
int rec_div_sum(int);
int main()
{
        int n;
        scanf("%d",&n);
        printf("sum= %d\n",rec_div_sum(n));
        return 0;
}
int rec_div_sum(int n)
{
        static int i=1,j,sum;
        if(i==n)
                return sum;
        if(!(n%i))
        {
                sum+=i;
        }
        i++;
        rec_div_sum(n);
}
