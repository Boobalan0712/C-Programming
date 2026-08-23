#include<stdio.h>
int total=0;
void mainMenu(void);
int quantity(void);
void Breakfast(void);
void TeaCoffee(void);
void Payment(void);
void TotalBill(int);
void FinalBill(void);
void Idly(int);
void Dosa(int);
void Puri(int);
void Upma(int);
void Pongal(int);
void Tea(int);
void Coffee(int);
void Milk(int);
int main()
{
	int op1,op2,q,p,upi,amount,change,c=0,d=0;
	long int card;
	int upi_pin =1234;
	long int card_num=1234567;
	while(1)
	{
o:
		mainMenu();
		printf("Enter the option:\n");
		scanf("%d",&op1);
		switch(op1)
		{
			case 1:
l:
				Breakfast();
				printf("Enter the sub option:\n");
				scanf("%d",&op2);
				switch(op2)
				{
					case 1:
						q=quantity();
						Idly(q);
						break;
					case 2:
						q=quantity();
						Dosa(q);
						break;
					case 3:
						q=quantity();
						Puri(q);
						break;
					case 4:
						q=quantity();
						Upma(q);
						break;
					case 5:
						q=quantity();
						Pongal(q);
						break;
					case 6:
						break;
					default:
						printf("Wrong option\n");
						goto l;
				}
				break;
			case 2:
m:
				TeaCoffee();
				printf("Enter the sub option:\n");
				scanf("%d",&op2);
				switch(op2)
				{
					case 1:
						q=quantity();
						Tea(q);
						break;
					case 2:
						q=quantity();
						Coffee(q);
						break;
					case 3:
						q=quantity();
						Milk(q);
						break;
					case 4:
						break;
					default:
						printf("Wrong option\n");
						goto m;
				}
				break;
			case 3:
n:
p:
s:
u:
				Payment();
				printf("Enter the sub option:\n");
				scanf("%d",&op2);
				switch(op2)
				{
					case 1:
q:
						printf("Give Amount : ");
						scanf("%d",&amount);
						if(amount<total)
						{
							printf("Give more amount !\n");
							goto q;
						}
						if(amount>total)
						{
							change=amount-total;
							printf("Here's your change: %d\n",change);
						}
						if(amount==total)
							printf("Payment done by Cash\n");
						FinalBill();
						return 0;
					case 2:
r:
						printf("Enter UPI pin : ");
						scanf("%d",&upi);
						if(upi==upi_pin)
						{
							printf("Payment done by UPI\n");
							FinalBill();
						}
						else
						{
							printf("Wrong PIN !\n");
							c++;
							if(c<3)
								goto r;
							else
							{
								printf("Use Another Payment Method \n");
								goto s;
							}
						}
						return 0;
					case 3:
t:
						printf("Enter card number :");
						scanf("%ld",&card);
						if(card_num==card)
						{
							printf("Payment done by Card\n");
							FinalBill();
						}
						else
						{
							printf("Wrong Card Num !\n");
							d++;
							if(d<3)
								goto t;
							else
							{
								printf("Use Another Payment Method\n");
								goto u;
							}
						}
						return 0;
					case 4:
						break;
					default:
						printf("Wrong option\n");
						goto n;

				}
				break;
			case 4:
				printf("Exit\n");
				if(total>0)
					goto p;
				printf("Bye Bye\n");
				return 0;
			default:
				printf("Wrong option\n");
				goto o;
		}
	}
}
void mainMenu(void)
{
	printf("1.Breakfast Menu\n");
	printf("2.Tea & Coffee\n");
	printf("3.Payment\n");
	printf("4.Exit\n");
}
int quantity(void)
{
	int q;
	q=0;
	printf("Enter the quantity:\n");
	scanf("%d",&q);
	return q;
}
void Breakfast(void)
{
	printf("1)Idly : ₹40\n");
	printf("2)Dosa : ₹45\n");
	printf("3)Puri : ₹50\n");
	printf("4)Upma : ₹35\n");
	printf("5)Pongal : ₹30\n");
	printf("6)Back <---\n");
}
void Idly(int q)
{
	int idly=40,price;
	price=q*idly;
	TotalBill(price);
}
void Dosa(int q)
{
	int dosa=45,price;
	price=q*dosa;
	TotalBill(price);
}
void Puri(int q)
{
	int puri=50,price;
	price=q*puri;
	TotalBill(price);
}
void Upma(int q)
{
	int upma=35,price;
	price=q*upma;
	TotalBill(price);
}
void Pongal(int q)
{
	int pongal=30,price;
	price=q*pongal;
	TotalBill(price);
}
void TeaCoffee(void)
{
	printf("1)Tea : ₹20\n");
	printf("2)Coffe : ₹25\n");
	printf("3)Milk : ₹30\n");
	printf("4)Back <---\n");
}
void Tea(int q)
{
	int tea=20,price;
	price=q*tea;
	TotalBill(price);
}
void Coffee(int q)
{
	int coffee=25,price;
	price=q*coffee;
	TotalBill(price);
}
void Milk(int q)
{
	int milk=30,price;
	price=q*milk;
	TotalBill(price);
}
void Payment(void)
{
	printf("1)Payment by Cash\n");
	printf("2)Payment by UPI\n");
	printf("3)Payment by Card\n");
	printf("4)Back <---\n");
}
void TotalBill(int price)
{
	//static int total=0;
	total+=price;
	printf("total price = %d\n",total);
}
void FinalBill(void)
{
	printf("Final Bill= %d\n",total);
	printf("Visit again thanks\n");
}
