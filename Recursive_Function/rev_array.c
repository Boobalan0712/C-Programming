#include<stdio.h>
int * rec_rev_arr(int *,int);
int main()
{
        int a[]={10,20,30,40,50},ele;
        ele=sizeof(a)/sizeof(a[0]);
        int *p;
        p=rec_rev_arr(a,ele);
        for(int i=0;i<ele;i++)
        printf("%d ",p[i]);
        return 0;
}
int * rec_rev_arr(int *p,int e)
{
        int t;
        static int i;
        if(i<(e-1)-i)
        {
                t=p[i];
                p[i]=p[(e-1)-i];
                p[(e-1)-i]=t;
                i++;
                return rec_rev_arr(p,e);
        }
        else
                return p;
}
