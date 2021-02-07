#include<iostream>
#include<stdlib.h>
#include<conio.h>

using namespace std;
class bankaccount
{
	char name[10][50];
	int accnum[10];
	int type[10];
	float balance[10];
	int count;
public:
	void cnt(void){ count=0; }
	void newacc(void);
	void deposit(void);
	void withdraw(void);
	void displayall(void);
	void checkbal(void);
	void design(void);
}acc;

void bankaccount :: newacc(void)
{
	system("cls");
	cout<<"\n\t\t Enter depositer's Name : ";
	cin>>name[count];
	cout<<"\n\t\t Enter account Number : ";
	cin>>accnum[count];
	cout<<"\n\t\t Enter type of account (1/2) : ";
	cout<<"\n\t\t\t1. Saving\n\t\t\t2. Current :  ";
	cin>>type[count];
	cout<<"\n\t\t Enter amount to balance ($) : ";
	cin>>balance[count];
	count++;
	system("cls");
	cout<<"\n\n\t\t DATA STORED.....\n";


}
void bankaccount :: deposit(void)
{
int n,a=0;
float d;
	system("cls");
	cout<<"\n\t\t > Enter Account Number : ";
	cin>>n;
	cout<<"\n\t\t > Enter Amount to Deposit ($) : ";
	cin>>d;
	for(int i=0;i<count;i++)
	{
		if(accnum[i]==n)
		{
			a=n;
			balance[i] = balance[i] + d;
		}
	}
	system("cls");
	if(a==0)
	{
		cout<<"\n\t\t >> Account NOT FOUND !!\n";
	}
	else
	{
		cout<<"\n\t\t >> Amount deposited....\n";
	}


}

void bankaccount :: withdraw(void)
{
int n,a=0;
float w;
	system("cls");
	cout<<"\n\t\t > Enter Account Number : ";
	cin>>n;
	cout<<"\n\t\t > Enter Amount to Withdraw ($) : ";
	cin>>w;
	for(int i=0;i<count;i++)
	{
		if(accnum[i]==n)
		{
			a=n;
			balance[i] = balance[i] - w;

		}
	}
	system("cls");
	if(a==0)
	{
		cout<<"\n\t\t >> Account NOT FOUND !!\n";
	}
	else
	{
		cout<<"\n\n\t\t\t Amount Withdrawed.....";
	}

}

void bankaccount :: checkbal()
{
int n,a=0;
	cout<<"\n\t\t > Enter Account Number : ";
	cin>>n;
	for(int i=0;i<count;i++)
	{
		if(accnum[i]==n)
		{
			cout<<"\n\t\t > Balance = "<<balance[i]<<" $"<<"\n\n";
			a=1;
		}
	}
	if(a==0)
	{
		cout<<"\n\t\t >> Account NOT FOUND !!\n";
	}


}
void bankaccount :: design(void)
{
	cout<<"\n\t---------------------------------";
}

void bankaccount :: displayall()
{
	cout<<"\n\t NAME\t Acc. No.\t Balance";
	for(int i=0;i<count;i++)
	{
		cout<<"\n\t "<<name[i];
		cout<<"\t  "<<accnum[i];
		cout<<"\t\t  "<<balance[i]<<" $";

	}
	cout<<"\n\n";
}

int main(void)
{
int p;
acc.cnt();
	do
	{
		acc.design();
		cout<<"\n\t\t::  XYZ Bank  ::";
		acc.design();
		cout<<"\n\tEnter appropriate number ";
		cout<<"\n\t  [1] Add Account ";
		cout<<"\n\t  [2] Deposit Amount ";
		cout<<"\n\t  [3] Withdraw Money ";
		cout<<"\n\t  [4] Check Balance ";
		cout<<"\n\t  [5] Display All Account ";
		cout<<"\n\t  [6] Quit ";
		acc.design();
		cout<<"\n\t Enter your choice : ";
		cin>>p;

		switch(p)
		{
			case 1: acc.newacc(); break;
			case 2: acc.deposit(); break;
			case 3: acc.withdraw(); break;
			case 4: acc.checkbal(); break;
			case 5: acc.displayall(); break;
			case 6: exit(0);
			default:
			{
				system("cls");
				cout<<"\n\n\t\t>> Invalid Input \n\t\t Try Again !!";
			}
		}
	 }while(p!=6);

 getch();
 return 0;
}
