#include<stdio.h>
void rec_int_word(int);
int main()
{
        int n,rev=0,div;
        scanf("%d",&n);
        while(n)
        {
                div=n%10;
                rev=rev*10+div;
                n/=10;
        }
        rec_int_word(rev);
}void rec_int_word(int n)
{
        int div;
        div=n%10;
        if(n==0)
                return;
        switch(div)
        {
                case 1:
                        printf("one ");
                        break;
                case 2:
                        printf("two ");
                        break;
                case 3:
                        printf("three ");
                        break;
                case 4:
                        printf("four ");
                        break;
                case 5:
                        printf("five ");
                        break;
                case 6:
                        printf("six ");
                        break;
                case 7:
                        printf("seven ");
                        break;
                case 8:
                        printf("eight ");
                        break;
                case 9:
                        printf("ninne ");
                        break;
                case 0:
                        printf("zero ");
                        break;
        }
        rec_int_word(n/10);
        printf("\n");
}
