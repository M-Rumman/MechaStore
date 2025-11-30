#ifndef USER_H
#define USER_H

#include<string>
using namespace std;

class User{
	int cms_id;
	string username;
	string password;
	string whatsapp_no;
	bool isAdmin;
	public:
	User();
	User(int id, string username, string password, string whatsapp_no, bool isAdmin);
	const int getId() const;
	const string getUserName() const;
	const string getPassword() const;
	bool getisAdmin() const;
	void setWhatsapp(string whatsapp_no);
	bool verifyPassword(string input) const;
};
#endif