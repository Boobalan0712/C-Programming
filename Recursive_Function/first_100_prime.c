#include<stdio.h>
void rec_prime(void);
int main()
{
        rec_prime();
        return 0;
}
void rec_prime(void)
{
        static int n=2,c=0;
        int j=1,i=0;
        if(c<100)
        {
l:
                if(!(n%j))
                {
                        i++;
                }
                j++;
                if(j<=n)
                        goto l;
                if(i==2)
                {
                        printf("%d ",n);
                        c++;
                }
                n++;
        }
        if(c==100)
                return;
        rec_prime();
}
