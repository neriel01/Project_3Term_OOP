#pragma once
#include "Book.h"
#include <fstream>
class LibraryDataBase
{
	private :
		std::multiset <Book> BookContainer;
		std::string sysstr2str(System::String ^str)
		{
			std::string str1 = "";
			for (int i = 0; i < str->Length; i++)
			str1 += (char)str[i];

		return str1;
		}
	public:
		std::multiset <Book> * GetContainer () {return & BookContainer;}
		bool Load(System::String^ s){
			ifstream load;
			string file_name=sysstr2str(s);	
			load.open(file_name);
			//int cap;
			//load>>cap;
			
			
			if(!load.is_open())
				return false;
			
			
			BookContainer.clear();
			Book tmp;
			char buf[150];
			int size;
			
			load.getline(buf, 150);
			size = atoi(buf);
			for (int i = 0; load.eof() == false & i < size; i++)
			{
				Book tmp;
				Renter renterTmp;
				Date one, two;
				load.getline(buf, 150);
				tmp.SetAuthor(string(buf));
				load.getline(buf, 150);
				tmp.SetBState(string(buf));
				load.getline(buf, 150);
				tmp.SetCoverType(string(buf));
				load.getline(buf, 150);
				tmp.SetEditor(string(buf));
				load.getline(buf, 150);
				tmp.SetID(atoi(buf));
				load.getline(buf, 150);
				tmp.SetName(string(buf));
				load.getline(buf, 150);
				renterTmp.SetName(string(buf));
				load >> one >> two;
				renterTmp.SetDateOfRent(one);
				renterTmp.SetDateOfReturn(two);
				tmp.setRenter(renterTmp);
				load.getline(buf, 150);//так как пуста строка
				//load>>tmp;
				BookContainer.insert(tmp);
			}
			return true;  
		}
		bool Save(System::String^ s){
			//int cap = this->BookContainer.size();
			ofstream save;
			string file_name=sysstr2str(s);
			save.open(file_name);
			//save<<cap<<endl;
			save << BookContainer.size()<<endl;
			for (auto i : BookContainer)
			{
				save<<i;
			}
			return true;
		}
		std::set <Book>::iterator begin()
		{
			return BookContainer.begin();
		}
		std::set <Book>::iterator end()
		{
			return BookContainer.end();
		}
};
