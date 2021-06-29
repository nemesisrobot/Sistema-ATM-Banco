#ifndef _H_LETREIRO
#define _H_LETREIRO
#include <iostream>
#include <string>
using namespace std;
class MessageSystem{
	public:
		void initMessage();
		void balanceMessage(double);
		void menu();
		void loginMessage();
		void passwordMessage();
		void welcomeUser(string);
};
#endif
