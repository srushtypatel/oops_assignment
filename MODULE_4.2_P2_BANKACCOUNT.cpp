/*
Define a class to represent a bank account. Include the following members:
Data Member:
-Name of the depositor
-Account Number
-Type of Account
-Balance amount in the account
Member Functions
-To assign values
-To deposited an amount
-To withdraw an amount after checking balance
-To display name and balance
*/

#include<iostream>
using namespace std;

class BankAccount
{
	public:
	int bal=20000;
	char name[20]="srushty marvaniya";
	char type[10]="current";
	long int accountnumber=234567890456;
	int deposite,withdraw,display_balance,towith;
	
	public:
		void Bank()
		{
			cout<<"-----------Bank Account Details --------------"<<endl;
			cout<<"Name of the depositor : "<<name<<endl;
			cout<<"Account Number : "<<accountnumber<<endl;
			cout<<"Account Type :"<<type<<endl;
			cout<<"Balance = "<<bal<<endl;
		}
		int bank()
		{
			cout<<"Enter the amount to be deposit"<<endl;
			cin>>deposite;
			display_balance=20000+deposite;
		    cout<<"Remaining balance ="<<display_balance<<endl;
		    cout<<"Enter the amount to be Withdraw"<<endl;
		    cin>>withdraw;
		    withdraw=display_balance -withdraw;
		    cout<<"Remaining balance ="<<towith<<endl;
		    cout<<"Name ="<<name<<endl<<"Balance = "<<bal<<endl;
		}
};
int main()
{   
     BankAccount obj;
     obj.Bank();
     obj.bank();
}





