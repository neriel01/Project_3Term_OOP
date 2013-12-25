#pragma once
#include "Book.h"
Book::Book(){
	this->Name = "Unnamed";
	this->Author = "Unnamed";
	this->Editor = "Unnamed";
	this->CoverType = "Unnamed";
	this->ID = 0;
	this->BookState = Average;
}
Book::Book(int id, string name, string author, string editor,
		   string coverType, string bookState,Renter renter)
{
	ID  = id;
	Name = name;
	Author = author;
	Editor =  editor;
	CoverType = coverType;
	BookState = bookState;
	this->renter = Renter(renter);
}
void Book::Update(int ID, string name, string author, string editor,
	string coverType, string bookState, Renter renter){
	this->Name = name;
	this->Author = author;
	this->Editor = editor;
	this->CoverType = coverType;
	this->BookState = bookState;
	this->renter = renter;

}


