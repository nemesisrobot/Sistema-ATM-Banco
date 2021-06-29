#include <iostream>
#include <string>
#include "systembegin.hpp"
using namespace std;
#include <vector>
#include "account.hpp"
#include "managementaccount.hpp"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void operation(MessageSystem msg, Account user, bool controloop){


}

int main(int argc, char *argv[]) {
	
	vector<Account> contas;
	bool controloop = true;
	string session;
	string login;
	string senha;
	int op;
	double value;
	
	//create new Account
	Account user(1234,"diego","omega");
	contas.push_back(user);
	Account user2(1235,"keila","alpha");
	contas.push_back(user2);
	
	//object for message in window
	MessageSystem msg;
	Management manager;
	
	//get datas of login and password
	msg.loginMessage();
	getline(cin,login);
	msg.passwordMessage();
	getline(cin,senha);
	
			
	//check login and password
	if(manager.accountLogin(contas,login,senha)){
		cout<<"Access Agree"<<endl;
	
				
		//messages for user 
		//msg.welcomeUser(login);
		
		while(controloop){
			msg.initMessage();
			msg.menu();
			cin>>op;
			switch(op){
				//withdrawal
				case 1:	
					cout<<"Please put the value to Withdrawal"<<endl;
					cin>>value;
					user.withDrawal(value);
				break;
				//deposit
				case 2:
					cout<<"Please put the value to Deposit"<<endl;
					cin>>value;
					user.deposit(value);
				break;
				case 3:
					msg.balanceMessage(user.balance());
				break;
				case 4:
					controloop=false;
				break;
					default:
					cout<<"Error!!! option not there is!!!!"<<endl;
				}	
			}	
		}else{
			cout<<"Erro , please check your login and password!!!"<<endl;
			cout<<"Any ask , please contact your admin system"<<endl;
		}
	
	
		
	
	
	
	return 0;
}
