#include "Email.h"
#include<iostream>
using namespace std;

Email::Email(string email)
{
	this->setEmail(email);
}

Email::~Email()
{

}


string Email::getEmail() const
{
	return this->email;
}

void Email::setEmail(string email)
{
	this->email = email;
}

void Email::printEmail()
{
	cout << email << endl;
}

void Email::isValid()
{
	if (email.find('@') != std::string::npos)
	{
		exit(1);
	}
	else 
	{
		cout << "Email is not valid" << endl;
	}

}




