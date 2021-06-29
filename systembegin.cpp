#include <iostream>
#include <string>
using namespace std;
#include "systembegin.hpp"


//method for message init system
void MessageSystem::initMessage(){
	cout<<endl;
	cout<<"*******************************************"<<endl;
	cout<<"*               ByteBank                  *"<<endl;
	cout<<"*******************************************"<<endl;
}

//show menu with options of operations
void MessageSystem::menu(){
	cout<<"choose on option"<<endl;
	cout<<"1 - Withdrawal"<<endl;
	cout<<"2 - Deposit"<<endl;
	cout<<"3 - Balance"<<endl;
	cout<<"4 - Exit System"<<endl;	
}

//method to view balance
void MessageSystem::balanceMessage(double valueMoney){
	cout<<endl;
	cout<<"Welcome to bytebank"<<endl;
	cout.precision(2);
	cout << fixed;
	cout<<"Value in Account"<<valueMoney<<endl;
}

//method to print messag for get login
void MessageSystem::loginMessage(){
	cout<<endl;
	cout<<"**************************************************"<<endl;
	cout<<"*              Seccurity Key                     *"<<endl;
	cout<<"**************************************************"<<endl;
	cout<<"Login:";
}

//method to print message for get passwor
void MessageSystem::passwordMessage(){
	cout<<"Password:";
}

void MessageSystem::welcomeUser(string login){
	cout<<endl;
	cout<<"***********************************************"<<endl;
	cout<<"*Welcome to account      "<<login<<"               *"<<endl;
	cout<<"***********************************************"<<endl;
}
