#include<iostream>
#include "PhoneNumber.h"
using namespace std;

int main()
{
	/*string email;
	cout << "Vyvedete email:" << endl;
	getline(cin,email);
	Email e1(email);
	e1.printEmail();
	e1.isValid();*/
	string number;
	cout << "Vyvedete nomer:" << endl;
	getline(cin, number);
	PhoneNumber pn1(number);
	pn1.isValid();




	return 0;

}
