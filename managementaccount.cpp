#include <iostream>
#include <vector>
#include <string>
using namespace std;
#include "account.hpp"
#include "managementaccount.hpp"


bool Management::accountLogin(vector<Account> account, string login, string password){
	bool founduser = false;
	for(int i =0;i<account.size();i++){
		if(account[i].getLogin()==login){
			if(account[i].getPassword()==password){
				return true;
			}
		}
	}
	
	return founduser;
	
	
}
