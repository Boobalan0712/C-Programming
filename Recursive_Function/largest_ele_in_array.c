#include<stdio.h>
int rec_lar_arr(int *,int);
int main()
{
        int a[4]={10,13,20,17},ele,l;
        ele=sizeof(a)/sizeof(a[0]);
        l=rec_lar_arr(a,ele);
        printf("The largest element in array is %d\n",l);
        return 0;
}
int rec_lar_arr(int *p,int e)
{
        static int l;
        if(*p>l)
                l=*p;
        p++;
        static int i=1;
        if(i<e)
        {
                i++;
                rec_lar_arr(p,e);
        }
        else
                return l;
}
