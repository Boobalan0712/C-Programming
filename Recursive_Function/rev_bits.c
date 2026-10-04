#include<stdio.h>
int rec_rev(int *);
int main()
{
        int n,p,i;
        scanf("%d",&n);
        for(i=31;i>=0;i--)
                printf("%d",n>>i&1);
        printf("\n");
        p=rec_rev(&n);
        for(i=31;i>=0;i--)
                printf("%d",p>>i&1);
        printf("\n");
        return 0;
}
int rec_rev(int *p)
{
        int n1,n2;
        static int m=31,n;
        if(m>n)
        {
                n1=(*p>>m)&1;
                n2=(*p>>n)&1;
                if(n1!=n2)
                {
                        *p=*p^(1<<m);
                        *p=*p^(1<<n);
                }
                m--;
                n++;
                rec_rev(p);
        }
        else
                return *p;
}
