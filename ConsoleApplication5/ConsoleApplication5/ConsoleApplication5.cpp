//References swap by Christian Mangione
//inclusions
#include "stdafx.h"
#include <iostream>
#include <string>
//namespace
using namespace std;
//define functions
int normalTransaction(int* money, int* balance);
void hackedTransaction(int* money, int* balance);
//start program
int main()
{
	//define balances
	int evilBalance = 200;
	int coffeeBalance = 50;
	//define deposits
	int evilMoney = 1000;
	int coffeeMoney = 100;
	//Show totals before
	cout << "You have " << evilBalance << " in total.\nYour deposit of " << evilMoney << " comes to: \n";
	//normal transaction of evil
	evilBalance = normalTransaction(&evilBalance, &evilMoney);
	//display results of normal transaction
	cout << evilBalance << "\nThank you for using the Bank of Terror!\nWe hope you have a good killing spree!\n";
	//allow to see
	system("pause");
	//Show totals before
	cout << "You have " << coffeeBalance << " in total.\nYour deposit of " << coffeeMoney << " comes to: \n";
	//normal transaction of coffee
	coffeeBalance = normalTransaction(&coffeeBalance, &coffeeMoney);
	//display results of normal transaction
	cout << coffeeBalance << "\nThank you for using the Bank of Hope!\nWe hope you sell more than enough at the next charity event!\n";
	//allow to see
	system("pause");
	//enter hacking mode
	string messages = "Agent 24510";
	string* welcomeMessages = &messages;
	cout << "................................\nWelcome " << *welcomeMessages << "to the Corrective Loans from Evil Arsonists Negating Evil's Return with Spotify program\nor CLEANERS.\nSwapping balances of " << evilBalance << " and " << coffeeBalance << " now.\n";
	//allow to see
	system("pause");
	//hacked transaction to switch balances
	hackedTransaction(&evilBalance, &coffeeBalance);
	//show new balances
	cout << "The Bank of Terror account is now in possession of " << evilBalance << ".\n";
	cout << "The Bank of Hope account now holds " << coffeeBalance << ".\nThank you for your service. Goodbye now.\n";
	//allow to see
	system("pause");
	//end program
    return 0;
}
//function for normal deposit of evil
int normalTransaction(int* money, int* balance)
{
	//use references to change money regardless of account
	int total = *money + *balance;
	//return new total
	return total;
}
//hacked transaction 
void hackedTransaction(int* money, int* balance)
{
	//introduce swap variable to hold referenced money
	int swap = *money;
	//match balances of accounts
	*money = *balance;
	//replace money in other account with held money
	*balance = swap;
	//return referenced numbers to bank balances
	return;
}