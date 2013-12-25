#pragma once
#include "Date.h"
#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <fstream>
#include "Date.h"
using namespace std;
enum BookStateEn {Bad, Average, Good};
class Book 
{
	private :
		int ID;
		string Author;
		string Name;
		string Editor;
		string CoverType;
		string BookState;
		Renter renter;

	public:

		//Get
		int GetID			     () const {return this-> ID;}
		string GetAuthor	     () const {return this->Author;}
		string GetName		     () const {return this->Name;}
		string GetEditor         () const {return this->Editor;}
		string GetCoverType      () const {return this->CoverType;}
		string GetBState         () const {return this->BookState;}
		Renter getRenter         () const {return  renter;}
		Renter *getRenterPointer ()       {return  &renter;}

		//Set
		void SetID        (int ID)          { this-> ID = ID;}
		void SetAuthor    (string Author)   { this->Author = Author;}
		void SetName      (string Name)     { this->Name = Name;}
		void SetEditor    (string Editor)   { this->Editor = Editor;}
		void SetCoverType (string CoverType){ this->CoverType = CoverType;}
		void SetBState    (string BS)       { this->BookState = BS;}
		void setRenter    (Renter r)        { this->renter =Renter(r);}

		//constructors
		Book(int id, string name, string author, string aditor,
			string coverType, string bookState,Renter renter);
		Book(); //implemented in .cpp

		//operators
		friend bool operator < ( const Book & b1,  const Book & b2){ // Default less is  by an ID
			if (b1.ID<b2.ID) return true;
			else return false;
		}
		void Update(int ID, string name, string author, string editor,
			string coverType, string bookState, Renter renter);

	friend std::ostream & operator << (std::ostream & strm, const Book & d)
	{
		strm<<d.GetAuthor()<<endl<<d.GetBState()<<endl<<d.GetCoverType()
			<<endl<<d.GetEditor()<<endl<<d.GetID()<<endl<<d.GetName()<<endl
			<<d.getRenter();
		return strm;
	} 
	friend std::istream & operator >> (std::istream & strm, Book & d)
	{
		Renter r;
		string author,state,cover,editor,name;
		int id;
		strm>>author>>state>>cover>>editor>>id>>name>>r;
		d.SetAuthor(author);
		d.SetBState(state);
		d.SetCoverType(cover);
		d.SetEditor(editor);
		d.SetID(id);
		d.SetName(name);
		d.setRenter(r);
		return strm;
	}
};