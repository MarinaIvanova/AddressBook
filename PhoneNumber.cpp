#include "PhoneNumber.h"
#include<iostream>
using namespace std;

PhoneNumber::PhoneNumber(string number)
{
	this->setNumber(number);
}

string PhoneNumber::getNumber() const
{
	return number;
}

void PhoneNumber::setNumber(string number)
{
	this->number = number;
}

void PhoneNumber::isValid()
{
	char firstCharacted = number[0];
	int i = 1;
	bool correctString = true;
	if (firstCharacted == '+')
	{
		do
		{
			for (int i = 1; i < number.length(); i++)
			{
				char elem = number[i];
				if (!isdigit(elem))
				{
					cout << "Incorrect input" << endl;
					correctString = false;
					break;
				}
			}
			if (correctString)
			{
				break;
			}
		}while(correctString);

	} 
	else
	{
		cout << "Incorrect input" << endl;
	}

}

