#include<stdio.h>
#include<string.h>
int main()
{
        char s[5][10],*p[5],*t;
        int i,j,ele;
        ele=sizeof(s)/sizeof(s[0]);
        for(i=0;i<ele;i++)
                p[i]=s[i];
        for(i=0;i<ele;i++)
                scanf("%s",s[i]);
        printf("Before array of pointer: ");
        for(i=0;i<ele;i++)
                printf("%s ",p[i]);
        printf("\n\n");
        for(i=0;i<ele-1;i++)
                for(j=0;j<ele-1-i;j++)
                        if(strcmp(p[j],p[j+1])>0)
                        {
                                t=p[j];
                                p[j]=p[j+1];
                                p[j+1]=t;
                        }
        printf("Original Array: ");
        for(i=0;i<ele;i++)
                printf("%s ",s[i]);
        printf("\n\n");
        printf("After array of pointer: ");
        for(i=0;i<ele;i++)
                printf("%s ",p[i]);
        printf("\n");
        return 0;
}
