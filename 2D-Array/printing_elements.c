#include<stdio.h>
int main()
{
        int b[][3]={{10,20,30},{1,2,3}};
        int i,j,r,c;
        r=sizeof(b)/sizeof(b[0]);
        c=sizeof(b[0])/sizeof(b[0][0]);
        for(i=0;i<r;i++)
        {
                for(j=0;j<c;j++)
                        printf("%d ",b[i][j]);
                printf("\n");
        }
        printf("\n");
}
