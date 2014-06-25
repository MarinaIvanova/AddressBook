#include"Contact.h"
#include<iostream>
#include<vector>
using namespace std;

// Moje da se naloji da se dobavqt defaultni stoinosti na ostanalite atributi
Contact::Contact(string name)
{
	this->name = name;
}

 string Contact::getName()
 {
	 return this->name;
 }

 //TODO da se napravi razlika mejdu mobilen i domashen telefon
 vector<PhoneNumber> Contact::getMobilePhone()
 {
	 return this->mobilePhones;
 }

 vector<PhoneNumber> Contact::getHomePhone()
 {
	 return this->homePhones;
 }

 vector<Email> Contact::getEmail()
 {
	 return this->emails;
 }

 Date Contact::getBirthdate()
 {
	 return this->birthdate;
 }

 vector<Address> Contact::getAddress()
 {
	 return this->addresses;
 }

 void Contact::setName(string name)
 {
	 this->name = name;
 }

 void Contact::setBirthdate(Date& birthdate)
 {
	 this->birthdate = birthdate;
 }

 void Contact::addNewMobilePhone(PhoneNumber& mobNumToAdd)
 {
	 this->mobilePhones.push_back(mobNumToAdd);
 }

 void Contact::addNewHomePhone(PhoneNumber& homeNumToAdd)
 {
	 this->homePhones.push_back(homeNumToAdd);
 }

 void Contact::addNewEmail(Email& email)
 {
	 this->emails.push_back(email);
 }

 void Contact::addNewAddress(Address& address)
 {
	 this->addresses.push_back(address);
 }

 void Contact::editEmail(Email existingEmail, Email newEmail)
 {
	 for (int i = 0; i < emails.size(); i++)
	 {
		if(existingEmail.getEmail() == emails[i].getEmail()){
			emails[i].setEmail(newEmail.getEmail());
			return;
		}
	 }
 }

 /*void Contact::editAddress(Address existingAddress, Address newAddress)
 {
	 for (int i = 0; addresses.size(); i++)
	 {
		 if (existingAddress == addresses[i])
		 {

		 }
	 }
 }*/
 
 void Contact::deleteEmail(Email emailToDelete)
 {
	 for (int i = 0; emails.size(); i++)
	 {
		 if (emailToDelete.getEmail() == emails[i].getEmail())
		 {
			 emails.erase(emails.begin() + i);
		 }
	 }
 }




 //void Contact::addNewMobilePhone(PhoneNumber& num)
 //{
	//  int currentNum;
	//  mobilePhone = new PhoneNumber[Maxcount];
	//  if (!mobilePhone)
	//  {
	//	  cout << "Error" << endl;
	//	  exit(1);
	//  }
	//  mobilePhone[currentNum] = num;
	//  currentNum++;
//}

 //void Contact::setMobilePhone(PhoneNumber& mobilePhone)
 //{
	// this->mobilePhone = mobilePhone;
 //}

 //void Contact::setHomePhone(PhoneNumber& homePhone)
 //{
	// this->homePhone = homePhone;
 //}

 //void Contact::setEmail(Email& email)
 //{
	// this->email = email;
 //}

 // void Contact::setAddress(Address& address)
 //{
	// this->address = address;
 //}


 
























