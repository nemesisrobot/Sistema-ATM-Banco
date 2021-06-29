#include <iostream>
#include <string>
using namespace std;
#include "account.hpp"

//constructor to create to new account
Account::Account(int numberAccount, string login, string password){
	this->number_account = numberAccount;
	this->login = login;
	this->password=password;
	this->saldo=0;
}

//method for view money in account
double Account::balance(){
	return this->saldo;
}

//method to deposit value in account
void Account::deposit(double valueMoney){
	this->saldo += valueMoney;
}

//method to withDrawal money in account
void Account::withDrawal(double valueMoney){
	
	if(this->saldo > valueMoney){
		cout<<"Wait a munite"<<endl;
		this->saldo -= valueMoney;
		cout<<"WithDrawal is done, take the money"<<endl;
		cout<<"Thanks to use our services!!!!"<<endl;
	}else{
		cout<<"Sorry, really sorry your value to WithDrawal bigger than you have in balance"<<endl;
	}
	
}

string Account::getPassword(){
	return this->password;
}

string Account::getLogin(){
	return this->login;
}
