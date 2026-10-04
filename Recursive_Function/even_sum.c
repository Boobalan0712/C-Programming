#include<stdio.h>
int rec_fun_sum(int);
int main()
{
        int num,sum;
        printf("Enter int num: ");
        scanf("%d",&num);
        sum=rec_fun_sum(num);
        printf("sum= %d\n",sum);
        return 0;
}
int rec_fun_sum(int num)
{
        int div;
        static int s=0;
        if(num>0)
        {
                div=num%10;
                if(!(div%2))
                        s+=div;
                num/=10;
                return rec_fun_sum(num);
        }
        else
                return s;
}
