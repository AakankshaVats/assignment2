/*Create an Account class that a bank might use to represent customers’ bank accounts. Include
a data member of type int to represent the account balance. Provide a constructor that receives
an initial balance and uses it to initialize the data member. The constructor should validate the
initial balance to ensure that it’s greater than or equal to 0. If not, set the balance to 0 and
display an error message indicating that the initial balance was invalid. Provide three member
functions. Member function Credit should add an amount to the current balance. Member
function Debit should withdraw money from the Account and ensure that the debit amount
does not exceed the Account’s balance. If it does, the balance should be left unchanged and the
function should print a message indicating “Debit amount exceeded account balance.”
Member function getBalance should return the current balance. Create a program that creates
two Account objects and tests the member functions of class Account. */
#include<iostream>
#include<stdio.h>
using namespace std;

class account
 {
private:
	int accountBalance;
public:
	account(int balance)
	    {
		if (balance > 0)
		{
			accountBalance = balance;
		}
		 else
		 {
			cout << "Balace can't be negative.. setting it to zero \n";
			balance = 0;
			accountBalance = balance;
			}
	}
	void Credit(int amount)
	{
		accountBalance += amount;

	}
	void Debit (int amount)
	{
		int temp = accountBalance - amount;
		if (temp > 0)
		{
			accountBalance -= amount;
        }
		 else
         {
			cout << "Debit amount exceeded account balance. \n";
		 }
	}
	int getBalance ()
	{
		return accountBalance;
	}
};
int main()
{
	int openBalance;
	cout << "enter the amount you want to start keshav account with? \n";
	cin >> openBalance;
	account keshav(openBalance);
	int paisa;
	cout << "enter the amount you want to add in keshav account? \n";
	cin >> paisa;
	keshav.Credit(paisa);
	cout << keshav.getBalance() << "\n";
	double paisa1 ;
	cout << "enter the amount you want to removein keshav account? \n";
	cin >> paisa1;
	keshav.Debit(paisa1);
	cout << keshav.getBalance() << "\n";
	cout << "enter the amount you want to start Aakanksha account with? \n";
	cin >> openBalance;
	account aakanksha(openBalance);
	cout << "enter the amount you want to add in Aakanksha's account? \n";
	cin >> paisa;
	aakanksha.Credit(paisa);
	cout << aakanksha.getBalance() << "\n";
	cout << "enter the amount you want to remove in Aakanksha's account? \n";
	cin >> paisa1;
	aakanksha.Debit(paisa1);
	cout << aakanksha.getBalance() << "\n";
return 0;
}
