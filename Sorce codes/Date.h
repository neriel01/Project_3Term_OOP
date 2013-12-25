#pragma once
#include <string>
#include <iostream>
#include <cstdio>
using namespace std;
class Date {
private:
	int Day;
	int Month;
	int Year;
public :
	Date(){}
	Date(int day, int month, int year)
	{
		this->Year = year;
		this->Month = month;
		this->Day = day;
	}
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
				return d1.Day<d2.Day;
			}
			else return d1.Month<d2.Month;
		}
		else return d1.Year<d2.Year;
	}
	friend bool operator > (const  Date & d1, const Date & d2)
	{
		if (d1.Year == d2.Year)
		{
			if (d1.Month == d2.Month)
			{
				return d1.Day>d2.Day;
			}
			else return d1.Month>d2.Month;
		}
		else return d1.Year>d2.Year;
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
	friend std::ostream & operator << (std::ostream & strm, const Date & d)
	{
		strm<<d.getDay()<<endl<<d.getMonth()<<endl<<d.getYear()<<endl;
		return strm;
	} 
	friend std::istream & operator >>(std::istream & strm,  Date & d){
		int day,month,year;
		strm>>day>>month>>year;
		d.setDay(day);
		d.setMonth(month);
		d.setYear(year);
		return strm;
	}
	


};
class Renter
{
private:
	std::string Name;
	Date DateOfRent;
	Date DateOfReturn;
public:
	Renter()
	{ 
		this->DateOfRent = Date();
		DateOfReturn = Date(),
			Name = "Unnamed";
	}
	Renter(Date dateOfRent, Date dateOfReturn,std::string name)
	{
		this->DateOfRent = dateOfRent;
		this->DateOfReturn = dateOfReturn;
		this->Name = name;
	}
	void SetName(std::string n){
		this->Name = n;
	}
	void SetDateOfRent(Date d){
		this->DateOfRent = d;
	}
	void SetDateOfReturn(Date d){
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
	friend std::ostream & operator << (std::ostream & strm, const Renter & d)
	{
		strm<<d.GetName()<<endl<<d.GetDateOfRent()<<d.GetDateOfReturn();
		return strm;
	} 
	friend std::istream & operator >>(std::istream & strm, Renter & d){
		string name;
		Date dayorent;
		Date dayofreturn;
		strm>>name>>dayorent>>dayofreturn;
		d.SetName(name);
		d.SetDateOfReturn(dayofreturn);
		d.SetDateOfRent(dayorent);
		return strm;
	}
	
	

	
};