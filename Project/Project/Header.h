#pragma once
#include <string>
#include <iostream>
class Date {
private:
	int Day;
	int Month;
	int Year;
public :
	void setDay(int d) {this->Day = d;}
	void setYear(int y){this->Year = y;}
	void setMonth(int m){this->Month = m;}
	////////////////////////////////////////
	int getDay   ()const {return this->Day;}
	int getMonth ()const {return this->Month;}
	int getYear  ()const {return this->Year;}
	friend bool operator < (const  Date & d1, const Date & d2)
	{
		if (d1.Year==d2.Year)
		{
			if (d1.Month==d2.Month)
			{
				if (d1.Month==d2.getMonth)
			}
			else return d1.Month<d2.Month
		}
		else return d1.Day<d2.Day
			return d1.Year<d2.Year;
	}
	std::string DateToString(){
		std::string SDate;
		char buf[50];
		SDate+=itoa(Day,buf,10);
		SDate+=".";
		SDate+=itoa(Month,buf,10);
		SDate+=".";
		SDate+=itoa(Year,buf,10);
		return SDate;
	}

};
class Renter
{
private:
	std::string Name;
	Date DateOfRent;
	Date DateOfReturn;
public:
	void SetName(std::string n){
		this->Name = n;
	}
	void SetDateOfRent(Date d){
		this->DateOfRent = d;
	}
	void SetDateOfRent(Date d){
		this->DateOfReturn = d;
	}
	std::string GetName()const{	
		return this->Name;
	}
	Date GetDateOfRent()const{
		return this->DateOfRent;
	}
	Date GetDateOfReturn()const
	{
		return this->DateOfReturn;
	}
	

	
};