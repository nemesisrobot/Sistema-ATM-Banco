#ifndef _H_CONTA
#define _H_CONTA
#include<iostream>
#include <string>
class Account{
	
	private:
		int number_account;
		string login;
		string password;
		float saldo;
	public:
		Account(int,string,string);
		void withDrawal(double);
		double balance();
		void deposit(double);
		string getPassword();
		string getLogin();
};
#endif
