#ifndef DATE_H
#define DATE_H

class Date
{
public:
	Date(int, int, int);
	Date();
	~Date();
	int getYear() const;
	int getMonth() const;
	int getDay() const;
	void setYear(int);
	void setMonth(int);
	void setDay(int);
	
private:
	int theYear, theMonth, theDay;

};




#endif