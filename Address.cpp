#include "Address.h"
#include<iostream>
using namespace std;

Address::Address(string country, string city, string street, int number)
{
	this->country = country;
	this->city = city;
	this->street = street;
	this->number = number;
}

Address::~Address()
{

}

string Address::getCountry()
{
	return country;
}

string Address::getCity()
{
	return city;
}

string Address::getStreet()
{
	return street;
}

int Address::getNumber()
{
	return number;
}

void Address::setCountry(string country)
{
	this->country = country;
}

void Address::setCity(string city)
{
	this->city = city;
}

void Address::setStreet(string street)
{
	this->street = street;
}

void Address::setNumber(int number)
{
	this->number = number;
}











