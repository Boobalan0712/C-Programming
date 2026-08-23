#include<stdio.h>
void mainMenu();
void subMenu();
extern int Check_Prime(int *);
extern int Check_Perfect(int *);
extern int Check_Strong(int *);
extern int Check_Armstrong(int *);
extern int Check_Palindrome(int *);
extern void primeRange(int,int);
extern void perfectRange(int,int);
extern void strongRange(int,int);
extern void armstrongRange(int,int);
extern void palindromeRange(int,int);
extern int primeCount(int*, int*);
extern int perfectCount(int*, int*);
extern int strongCount(int*, int*);
extern int armstrongCount(int*, int*);
extern int palindromeCount(int*, int*);
int main()
{
	int choice,subChoice;
	int num,start,end,c;
	while(1)
	{
		mainMenu();
		printf("Enter Choice: ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				subMenu();
				scanf("%d",&subChoice);
				switch(subChoice)
				{
					case 1:
						printf("Enter Number : ");
						scanf("%d",&num);
						if(Check_Prime( &num))
							printf("Prime Number");
						else
							printf("Not Prime");
						break;
					case 2:
						printf("Enter Start End : ");
						scanf("%d%d",&start,&end);
						primeRange(start,end);
						break;
					case 3:
						printf("Enter Start End : ");
						scanf("%d%d",&start,&end);
						c=primeCount(&start, &end);
						printf("prime count=%d",c);
						break;
					case 4:
						break;
					default:
						printf("Invalid");
				}
				break;
			case 2:
				subMenu();
                                scanf("%d",&subChoice);
                                switch(subChoice)
                                {
                                        case 1:
                                                printf("Enter Number : ");
                                                scanf("%d",&num);
                                                if(Check_Perfect( &num))
                                                        printf("Perfect Number");
                                                else
                                                        printf("Not Perfect");
                                                break;
                                        case 2:
                                                printf("Enter Start End : ");
                                                scanf("%d%d",&start,&end);
                                                perfectRange(start,end);
                                                break;
                                        case 3:
                                                printf("Enter Start End : ");
                                                scanf("%d%d",&start,&end);
                                                c=perfectCount(&start, &end);
                                                printf("perfect count=%d",c);
                                                break;
                                        case 4:
                                                break;
                                        default:
                                                printf("Invalid");
                                }
                                break;
			case 3:
                                subMenu();
                                scanf("%d",&subChoice);
                                switch(subChoice)
                                {
                                        case 1:
                                                printf("Enter Number : ");
                                                scanf("%d",&num);
                                                if(Check_Strong( &num))
                                                        printf("Strong Number");
                                                else
                                                        printf("Not Strong");
                                                break;
                                        case 2:
                                                printf("Enter Start End : ");
                                                scanf("%d%d",&start,&end);
                                                strongRange(start,end);
                                                break;
                                        case 3:
                                                printf("Enter Start End : ");
                                                scanf("%d%d",&start,&end);
                                                c=strongCount(&start, &end);
                                                printf("strong count=%d",c);
                                                break;
                                        case 4:
                                                break;
                                        default:
                                                printf("Invalid");
                                }
                                break;
			case 4:
                                subMenu();
                                scanf("%d",&subChoice);
                                switch(subChoice)
                                {
                                        case 1:
                                                printf("Enter Number : ");
                                                scanf("%d",&num);
                                                if(Check_Armstrong( &num))
                                                        printf("Armstrong Number");
                                                else
                                                        printf("Not Armstrong");
                                                break;
                                        case 2:
                                                printf("Enter Start End : ");
                                                scanf("%d%d",&start,&end);
                                                armstrongRange(start,end);
                                                break;
                                        case 3:
                                                printf("Enter Start End : ");
                                                scanf("%d%d",&start,&end);
						c=armstrongCount(&start, &end);
						printf("armstrong count=%d",c);
                                                break;
                                        case 4:
                                                break;
                                        default:
                                                printf("Invalid");
                                }
                                break;
			case 5:
                                subMenu();
                                scanf("%d",&subChoice);
                                switch(subChoice)
                                {
                                        case 1:
                                                printf("Enter Number : ");
                                                scanf("%d",&num);
                                                if(Check_Palindrome( &num))
                                                        printf("Palindrome Number");
                                                else
                                                        printf("Not Palindrome");
                                                break;
                                        case 2:
                                                printf("Enter Start End : ");
                                                scanf("%d%d",&start,&end);
                                                palindromeRange(start,end);
                                                break;
                                        case 3:
                                                printf("Enter Start End : ");
                                                scanf("%d%d",&start,&end);
                                                c=palindromeCount(&start, &end);
                                                printf("palindrome count=%d",c);
                                                break;
                                        case 4:
                                                break;
                                        default:
                                                printf("Invalid");
                                }
                                break;
			case 6:
				printf("Thank You\n");
				return 0;
			default:
				printf("Invalid Choice");
		}
	}
}
void mainMenu(void)
{
	printf("\n");
	printf("=== Number Analyzer =======\n");
	printf("1. Prime Number\n");
	printf("2. Perfect Number\n");
	printf("3. Strong Number\n");
	printf("4. Armstrong Number\n");
	printf("5. Palindrome Number\n");
	printf("6. Exit\n");
	printf("=========================\n");
}
void subMenu(void)
{
	printf("1. Check Number\n");
	printf("2. Check Range\n");
	printf("3. Count \n");
	printf("4. Back\n");
	printf("-------------------------\n");
}
int Check_Prime (int *p )
{
	int i;
	for(i=2;i<*p;i++)
		if(!(*p%i))
			break;
	if(*p==i)
		return 1;
	else
		return 0;
}
void primeRange(int n1,int n2)
{
	int i,j;
	for(i=n1;i<=n2;i++)
	{
		for(j=2;j<i;j++)
			if(!(i%j))
				break;
		if(i==j)
			printf("%d ",i);
	}
}
int primeCount(int *n1,int *n2)
{
	int c=0;
	int i,j;
        for(i=*n1;i<=*n2;i++)
        {
                for(j=2;j<i;j++)
                        if(!(i%j))
			break;
		if(i==j)
			c++;
        }
	return c;
}
int Check_Perfect(int *p)
{
	int sum=0;
	int i;
        for(i=1;i<*p;i++)
                if(!(*p%i))
			sum+=i;
        if(*p==sum)
                return 1;
        else
                return 0;
}
void perfectRange(int n1,int n2)
{
	int i,j,sum;
        for(i=n1;i<=n2;i++)
        {
		sum=0;
                for(j=1;j<i;j++)
                        if(!(i%j))
                                sum+=j;
                if(i==sum)
                        printf("%d ",i);
        }
}
int perfectCount(int *n1,int *n2)
{
	int c=0;
        int i,j;
        for(i=*n1;i<=*n2;i++)
        {
		int sum=0;
                for(j=1;j<i;j++)
                        if(!(i%j))
				sum+=j;
                if(i==sum)
                        c++;
        }
        return c;
}
int Check_Strong(int *p)
{
	int temp,i,fact,div,sum;
	temp=*p;
	sum=0;
	while(temp)
	{
		fact=1;
		div=temp%10;
		for(i=div;i>0;i--)
			fact=fact*i;
		sum+=fact;
		temp/=10;
	}
	if(*p==sum)
		return 1;
	else
		return 0;
}
void strongRange(int n1,int n2)
{
	int i,j,temp,fact,div,sum;
	for(i=n1;i<=n2;i++)
	{
		temp=i;
		sum=0;
		while(temp)
		{
			fact=1;
			div=temp%10;
			for(j=div;j>0;j--)
				fact=fact*div;
			sum+=fact;
			temp/=10;
		}
		if(i==sum)
			printf("%d ",i);
	}
}
int strongCount(int *n1,int *n2)
{
	int i,j,temp,fact,div,sum,c=0;
        for(i=*n1;i<=*n2;i++)
        {
                temp=i;
                sum=0;
                while(temp)
                {
                        fact=1;
                        div=temp%10;
                        for(j=div;j>0;j--)
                                fact=fact*div;
                        sum+=fact;
                        temp/=10;
                }
                if(i==sum)
                        c++;
        }
	return c;
}
int Check_Armstrong(int *p)
{
	int i,j,temp,sum,div,pow=1,c=0;
	temp=*p;
	while(temp)
	{
		c++;
		temp/=10;
	}
	temp=*p;
	sum=0;
	while(temp)
	{
		div=temp%10;
		for(j=0;j<c;j++)
			pow=pow*div;
		sum+=pow;
		temp/=10;
	}
	if(*p==sum)
		return 1;
	else
		return 0;
}
void armstrongRange(int n1,int n2)
{
	int i,j,temp,sum,div,pow,c;
	for(i=n1;i<=n2;i++)
	{
		temp=i;
		c=0;
		while(temp)
		{
			c++;
			temp/=10;
		}
		temp=i;
		sum=0;
		while(temp)
		{
			pow=1;
			div=temp%10;
			for(j=0;j<c;j++)
				pow=pow*div;
			sum+=pow;
			temp/=10;
		}
		if(i==sum)
			printf("%d ",i);
	}
}
int armstrongCount(int *n1,int *n2)
{
	int i,j,temp,sum,div,pow,c,count=0;
        for(i=*n1;i<=*n2;i++)
        {
                temp=i;
                c=0;
                while(temp)
                {
                        c++;
                        temp/=10;
                }
                temp=i;
                sum=0;
                while(temp)
                {
                        pow=1;
                        div=temp%10;
                        for(j=0;j<c;j++)
                                pow=pow*div;
                        sum+=pow;
                        temp/=10;
                }
                if(i==sum)
			count++;
	}
	return count;
}
int Check_Palindrome(int *p)
{
	int i,temp,div,rev=0;
	temp=*p;
	while(temp)
	{
		div=temp%10;
		rev=rev*10+div;
		temp/=10;
	}
	if(*p==rev)
		return 1;
	else
		return 0;
}
void palindromeRange(int n1,int n2)
{
	int i,j,rev,temp,div;
	for(i=n1;i<=n2;i++)
	{
		temp=i;
		rev=0;
		while(temp)
		{
			div=temp%10;
			rev=rev*10+div;
			temp/=10;
		}
		if(i==rev)
			printf("%d ",i);
	}
}
int palindromeCount(int *n1,int *n2)
{
        int i,j,rev,temp,div,c=0;
        for(i=*n1;i<=*n2;i++)
        {
                temp=i;
                rev=0;
                while(temp)
                {
                        div=temp%10;
                        rev=rev*10+div;
                        temp/=10;
                }
                if(i==rev)
			c++;
        }
	return c;
}