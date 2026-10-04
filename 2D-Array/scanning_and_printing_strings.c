#include<stdio.h>
int main()
{
        char s[3][5];
        int i,ele;
        ele=sizeof(s)/sizeof(s[0]);
        for(i=0;i<ele;i++)
                scanf(" %[^\n]",s[i]);
        for(i=0;i<ele;i++)
                printf("%s ",s[i]);
        printf("\n");
}
