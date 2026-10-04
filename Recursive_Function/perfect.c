#include<stdio.h>
int rec_perfect(int);
int main()
{
        int n,sum;
        printf("Enter a number: ");
        scanf("%d",&n);
        sum=rec_perfect(n);
        if(n==sum)
                printf("%d is perfect number.n",n);
        else
                printf("%d is not a perfect number.\n",n);
        return 0;
}
int rec_perfect(int n)
{
        static int sum=0,j=1;
        if(!(n%j))
                sum+=j;
        j++;
        if(j<n)
                rec_perfect(n);
        else
                return sum;
}
