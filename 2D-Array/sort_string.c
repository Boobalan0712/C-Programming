#include<stdio.h>
#include<string.h>
int main()
{
        char s[5][10],t[10];
        int i,j,ele;
        ele=sizeof(s)/sizeof(s[0]);
        for(i=0;i<ele;i++)
                scanf("%s",s[i]);
        for(i=0;i<ele-1;i++)
                for(j=0;j<ele-1-i;j++)
                        if(strcmp(s[j],s[j+1])>0)
                        {
                                strcpy(t,s[j]);
                                strcpy(s[j],s[j+1]);
                                strcpy(s[j+1],t);
                        }
        for(i=0;i<ele;i++)
                printf("%s\n",s[i]);
        return 0;
}
