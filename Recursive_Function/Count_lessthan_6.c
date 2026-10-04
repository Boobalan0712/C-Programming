#include<stdio.h>
int rec_fun_count(int);
int main()
{
        int n;
        printf("Enter int n: ");
        scanf("%d",&n);
        printf("Count = %d\n",rec_fun_count(n));
}
int rec_fun_count(int num)
{
        int div;
        static int count;
        if(num>0)
        {
                div=num%10;
                num=num/10;
                if(div<6)
                        count++;
                return rec_fun_count(num);
        }
        else
                return count;
}
