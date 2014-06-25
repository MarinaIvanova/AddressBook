#include "Date.h"
#include<iostream>
using namespace std;

Date::Date(int day, int month, int year)
{
		this->theDay = day;
		this->theMonth = month;
		this->theYear = year;
}

Date::Date()
{
	theDay = 0;
	theMonth = 0;
	theYear = 0;
}

Date::~Date()
{

}

int Date::getDay() const
{
	return theDay;
}

int Date::getMonth() const
{
	return theMonth;
}

int Date::getYear() const
{
	return theYear;
}

void Date::setDay(int day)
{
	theDay = day;
}

void Date::setMonth(int month) 
{
	theMonth = month;
}

void Date::setYear(int year)
{
	theYear = year;
}











