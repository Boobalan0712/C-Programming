#include<stdio.h>
#include<stdlib.h>
void print(int,int,char (*)[]);
int result(int,int,char (*)[]);
int main()
{
	char a[3][3]={{'.','.','.'},{'.','.','.'},{'.','.','.'}},choose;
	int i,j,r,c,k,l,count,check;
	r=sizeof(a)/sizeof(a[0]);
	c=sizeof(a[0])/sizeof(a[0][0]);
	print(r,c,a);
	printf("Player 1 Choose : X or O\n");
	scanf("%c",&choose);

o:
m:
	printf("------Player 1------\n");
	printf("Enter the pos:");
	scanf("%d %d",&k,&l);
	if(a[k][l]=='.')
	{
		a[k][l]=choose;
		print(r,c,a);
		if(result(r,c,a))
			return 0;
	}
	else
	{
		printf("Already Occupied.\n");
		printf("Enter Again!\n");
		goto m;
	}
n:

// To check all places are filled. If filled goto print the elements.
	check=0;
	for(i=0;i<r;i++)
		for(j=0;j<c;j++)
			if(a[i][j]=='.')
				check++;
	if(check==0)
		goto p;
// ---------------------------------------------

	printf("------Palyer 2------\n");
	printf("Enter the pos:");
	scanf("%d %d",&k,&l);
	if(a[k][l]=='.')
	{
		if(choose=='X')
			a[k][l]='O';
		else
			a[k][l]='X';
		print(r,c,a);
		if(result(r,c,a))
			return 0;
	}
	else
	{
		printf("Already Occupied.\n");
		printf("Enter Again!\n");
		goto n;
	}
	count=0;
	for(i=0;i<r;i++)
		for(j=0;j<c;j++)
			if(a[i][j]=='.')
				count++;
	if(count>0)
		goto o;
p:
	printf("------Final Result------\n");
	print(r,c,a);
	result(r,c,a);
	return 0;
}
void print(int r,int c,char (*p)[c])
{
	int i,j;
	system("clear");
	for(i=0;i<r;i++)
        {
                for(j=0;j<c;j++)
                        printf("%c ",p[i][j]);
                printf("\n");
        }
}
int result(int r,int c,char (*p)[c])
{
	int i,j;
	for(i=0;i<r;i++)
	{
		if(p[i][0]!='.')
			if(p[i][0]==p[i][1]&&p[i][0]==p[i][2])
			{
				printf("The winner is : %c\n",p[i][0]);
				return 1;
			}
	}
	for(j=0;j<c;j++)
	{
		if(p[0][j]!='.')
			if(p[0][j]==p[1][j]&&p[0][j]==p[2][j])
			{
				printf("The winner is : %c\n",p[0][j]);
				return 1;
			}
	}
	if(p[0][0]!='.')
		if(p[0][0]==p[1][1]&&p[0][0]==p[2][2])
		{
			printf("The winner is : %c\n",p[0][0]);
			return 1;
		}
	if(p[0][2]!='.')
		if(p[0][2]==p[1][1]&&p[0][2]==p[2][0])
		{
			printf("The winner is : %c\n",p[0][2]);
			return 1;
		}
	return 0;
}
