#ifndef _H_MANAGEMENT
#define _H_MANAGEMENT
#include <iostream>
#include <vector>
#include <string>
using namespace std;
#include "account.hpp"
#include "managementaccount.hpp"
class Management{
	public:
		bool accountLogin(vector<Account> account, string login, string password);
	
};
#endif
