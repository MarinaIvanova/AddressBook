#ifndef CONTACT_H
#define CONTACT_H

#include<string>
#include<vector>
#include "PhoneNumber.h"
#include "Date.h"
#include "Email.h"
#include "Address.h"
using namespace std;

class Contact
{
public:

	Contact(string, string, string);
	string getName();
	string getSurname();
	string getLastname();
	vector<PhoneNumber> getMobilePhone();
	vector<PhoneNumber> getHomePhone();
	vector<Email> getEmail();
	Date getBirthdate();
	vector<Address> getAddress();

	void setName(string);
	void setSurname(string);
	void setLastname(string);
	void setBirthdate(Date&);
	/*void setMobilePhone(PhoneNumber&);
	void setHomePhone(PhoneNumber&);
	void setEmail(Email&);*/
	/*void setAddress(Address&);*/
	//Dali parametrite trqbva da sa zadadeni po tozi nachin ??? const? &?

	void addNewMobilePhone(PhoneNumber&);
	void addNewHomePhone(PhoneNumber&);
	void addNewEmail(Email&);
	void addNewAddress(Address&);



	
private:
	static int id;
	string name;
	string surname;
	string lastname;
	vector<PhoneNumber> mobilePhone;
	vector<PhoneNumber> homePhone;
	vector<Email> email;
	Date birthdate;
	vector<Address> address;




};



#endif 