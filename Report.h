#ifndef REPORT_H
#define REPORT_H

#include "Contact.h"

class report
{
public:
	void sortContactByName();
	void sortContactByBirthdate();
	contact* giveContactByName();
	contact* giveContactByBirthdate();

private:
	

};



#endif