#ifndef EMAIL_H
#define EMAIL_H

#include<iostream>
#include<string>
using namespace std;

class Email
{
public:
	Email(string);
	~Email();
	string getEmail() const;
	void setEmail(string);
	void isValid();
	void printEmail();


private:
	std::string email;

};




#endif