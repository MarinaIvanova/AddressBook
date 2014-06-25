#ifndef ADDRESS_H
#define ADDRESS_H

#include<iostream>
#include<string>
using namespace std;

class Address
{
public:
	Address(string, string, string, int);
	~Address();

	string getCountry();
	string getCity();
	string getStreet();
	int getNumber();

	void setCountry(string);
	void setCity(string);
	void setStreet(string);
	void setNumber(int);

private:
	string country;
	string city;
	string street;
	int number;

}




#endif