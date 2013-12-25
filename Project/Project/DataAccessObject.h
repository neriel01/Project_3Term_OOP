#pragma 
#include "Book.h"
#include "LibraryDataBase.h"
#include <algorithm>
#include <Exception>
class DAOInterface
{
public:
	virtual bool Create(Book b) = 0;
	virtual Book Read(int ID) = 0;
	virtual void Update(int ID, string name, string author, string editor,
		string coverType, string bookState, Renter renter) = 0;
	virtual bool Delete(int ID) = 0;
	virtual bool Load(System::String^ s) = 0;
	virtual bool Save(System::String^ s) = 0;
};
class DAO : public DAOInterface
{
private :
	LibraryDataBase DataBase;
public:
	LibraryDataBase getDataBase()
	{
		return this->DataBase;
	}
	bool Create(Book b){
		

		const bool is_in = DataBase.GetContainer()->find(b)!=DataBase.GetContainer()->end();
		if (is_in) 
		{

			throw gcnew System::Exception();
			
		}
		else{
			DataBase.GetContainer()->insert(b);
			cout<<"done\n";
			return true;
		}
	}
	Book Read (int ID){
		
		auto it = std::find_if(DataBase.GetContainer()->begin(), DataBase.GetContainer()->end(), [&](Book b)
		{
			return b.GetID() == ID;
		});
		return *it;
	}
	void Update(int ID,string name, string author, string editor,
		string coverType, string bookState, Renter renter){

		auto it = std::find_if(DataBase.GetContainer()->begin(), DataBase.GetContainer()->end(), [&](Book b)
		{
			return b.GetID() == ID;
		});
		if (it != DataBase.GetContainer()->end())
		{	
			Book b(ID, name, author, editor, coverType, bookState, renter);
			DataBase.GetContainer()->erase(it);
			DataBase.GetContainer()->insert(b);
			return;
		}
		
	}
	bool Delete(int ID){


		auto it = std::find_if(DataBase.GetContainer()->begin(), DataBase.GetContainer()->end(), [&](Book b)
		{
			return b.GetID() == ID;
		});
		if (it != DataBase.GetContainer()->end())
		{
			DataBase.GetContainer()->erase(it);
			return true;
		}
		return false;
	}
	bool Load(System::String^ s) {
		
		DataBase.Load(s);
		return true;
	}
	bool Save(System::String^ s){
		DataBase.Save(s);
		return true;
	}

};


