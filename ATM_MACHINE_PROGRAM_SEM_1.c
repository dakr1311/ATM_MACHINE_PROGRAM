									//ATM PROGRAMING
#include<stdio.h>


void main()
{
	
	int choice,pin=1221,deposit;
	static int balance=25000;
	int amount,whithdrawal,choice2;
							//ENTER PIN
	checkpin:
	printf("\nEnter the pin :");
	scanf("%d",&pin);		
						//ENTER WRONG 
	if(pin!=1221)
	{
		printf("Please enter valid PIN ");
		goto checkpin;
	}
						//ENTER CURRENT  pin
	continuservice:
	printf("\n\n\n***************WELCOME ATM SERVICE*************************** \n");			
	printf("1. Checke balance \n");
	printf("2. Deposite case \n");
	printf("3. Whithdrval case \n");
	printf("4. Quit \n");
	printf("************************************************************* \n");
						//choice filling
	defaultcontinu:
	printf("Enter your choice :"); 	
	scanf("%d",&choice);
	switch(choice)
	{										
		case 1:								//checke balance
			printf("Your balance is  %d",balance);
		    printf("\nDo you want to continu whith the service :");
			printf("\n1. YES");
			printf("\n2. NO");
			printf("\nEnter your choice :");
			scanf("%d",&choice2);
			if(choice2==1)
				goto continuservice;
			else
					printf("\nInvalid choice");
			break;
		case 2:								//deposit
			printf("Enter the amount you want to deposit :");
			scanf("%d",&amount);
			deposit=amount+balance;
			printf("Your balance is %d",deposit);
			printf("\nDo you want to continu whith the service :");
			printf("\n1. YES");
			printf("\n2. NO");
			printf("\nEnter your choice :");
			scanf("%d",&choice2);
			if(choice2==1)
				goto continuservice;
			else
					printf("\nInvalid choice");
			break;
		case 3:						//case whithdrawal
			printf("\nPut the amount to you want whithdraw :");
			scanf("%d",&whithdrawal);	
			if(whithdrawal<=balance)
			{		
				whithdrawal=balance-whithdrawal;
				printf("Your balance is %d",whithdrawal);
				printf("\n Do you want to continu whith the service :");
				printf("\n1. YES");
				printf("\n2. NO");
				printf("\nEnter your choice :");
				scanf("%d",&choice2);
				if(choice2==1)
					goto continuservice;
				else
					printf("\nInvalid choice");
			}
			else
			{
				printf("\nThere is not enough mony in your account");
			}
			break;
		case 4:						//quit
			printf("\n");
				break;
		default :					//default
			printf("Invalid option please try again\n",choice);
			goto defaultcontinu;
			break;
		}
	printf("\nTHANAK YOU TO USING ATM SERVICE ");
	fflush(stdin);
}			
