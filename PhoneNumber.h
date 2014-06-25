#ifndef PHONENUMBER_H
#define PHONENUMBER_H

#include<string>
using namespace std;

class PhoneNumber
{
public:
	PhoneNumber(string);
	string getNumber() const;
	void setNumber(string);
	void isValid();

private:
	string number;


};




#endif 