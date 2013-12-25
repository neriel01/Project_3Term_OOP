#pragma once
#include "Book.h"
#include "Form_Add_book.h"
#include "DataAccessObject.h"
#include "DeleteDialog1.h"
#include <ctime>
#include <algorithm>
#include <functional>
#include <ctime>
#include "Editing.h"
using namespace System;
//using namespace Form;
namespace Project {
	DAOInterface* DB = new DAO; //our interface to interruct with
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			this->Text = "My home library v 0.01";
			openFileDialog1->Filter = "MyLib Documents|*.mylib";
			saveFileDialog1->Filter = "MyLib Documents|*.mylib";
			label2->Visible = false;
			
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete DB;
				delete components;
			}
		}
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::Button^  button_Edit;
	private: System::Windows::Forms::Button^  button_addBook;

	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button_Save;

	private: System::Windows::Forms::Button^  button_Load;

	private: System::Windows::Forms::DataGridView^  dataGrid_Books;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;


	private: System::Windows::Forms::TextBox^  textBox_Search;
	private: System::Windows::Forms::CheckBox^  checkBox_Show_only_expiped;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::SaveFileDialog^  saveFileDialog1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	protected:
	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;
		std::string sysstr2str(System::String ^str)
		{
			std::string str1 = "";
			for (int i = 0; i < str->Length; i++)
				str1 += (char)str[i];

			return str1;
		}


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->button_Edit = (gcnew System::Windows::Forms::Button());
			this->button_addBook = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button_Save = (gcnew System::Windows::Forms::Button());
			this->button_Load = (gcnew System::Windows::Forms::Button());
			this->dataGrid_Books = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->textBox_Search = (gcnew System::Windows::Forms::TextBox());
			this->checkBox_Show_only_expiped = (gcnew System::Windows::Forms::CheckBox());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGrid_Books))->BeginInit();
			this->SuspendLayout();
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(9, 53);
			this->listBox1->Margin = System::Windows::Forms::Padding(2);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(179, 238);
			this->listBox1->TabIndex = 0;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::listBox1_SelectedIndexChanged);
			// 
			// button_Edit
			// 
			this->button_Edit->Location = System::Drawing::Point(70, 300);
			this->button_Edit->Margin = System::Windows::Forms::Padding(2);
			this->button_Edit->Name = L"button_Edit";
			this->button_Edit->Size = System::Drawing::Size(56, 19);
			this->button_Edit->TabIndex = 1;
			this->button_Edit->Text = L"Edit";
			this->button_Edit->UseVisualStyleBackColor = true;
			this->button_Edit->Click += gcnew System::EventHandler(this, &Form1::button_Edit_Click);
			// 
			// button_addBook
			// 
			this->button_addBook->Location = System::Drawing::Point(9, 299);
			this->button_addBook->Margin = System::Windows::Forms::Padding(2);
			this->button_addBook->Name = L"button_addBook";
			this->button_addBook->Size = System::Drawing::Size(56, 19);
			this->button_addBook->TabIndex = 2;
			this->button_addBook->Text = L"Add";
			this->button_addBook->UseVisualStyleBackColor = true;
			this->button_addBook->Click += gcnew System::EventHandler(this, &Form1::button_addBook_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(130, 300);
			this->button3->Margin = System::Windows::Forms::Padding(2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(56, 19);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Delete";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button_Save
			// 
			this->button_Save->Location = System::Drawing::Point(98, 323);
			this->button_Save->Margin = System::Windows::Forms::Padding(2);
			this->button_Save->Name = L"button_Save";
			this->button_Save->Size = System::Drawing::Size(88, 19);
			this->button_Save->TabIndex = 4;
			this->button_Save->Text = L"Save";
			this->button_Save->UseVisualStyleBackColor = true;
			this->button_Save->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// button_Load
			// 
			this->button_Load->Location = System::Drawing::Point(9, 322);
			this->button_Load->Margin = System::Windows::Forms::Padding(2);
			this->button_Load->Name = L"button_Load";
			this->button_Load->Size = System::Drawing::Size(85, 19);
			this->button_Load->TabIndex = 5;
			this->button_Load->Text = L"Load";
			this->button_Load->UseVisualStyleBackColor = true;
			this->button_Load->Click += gcnew System::EventHandler(this, &Form1::button_Load_Click);
			// 
			// dataGrid_Books
			// 
			this->dataGrid_Books->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGrid_Books->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->Column1,
					this->Column2
			});
			this->dataGrid_Books->Location = System::Drawing::Point(200, 11);
			this->dataGrid_Books->Margin = System::Windows::Forms::Padding(2);
			this->dataGrid_Books->Name = L"dataGrid_Books";
			this->dataGrid_Books->RowHeadersVisible = false;
			this->dataGrid_Books->RowTemplate->Height = 24;
			this->dataGrid_Books->Size = System::Drawing::Size(309, 298);
			this->dataGrid_Books->TabIndex = 6;
			this->dataGrid_Books->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form1::dataGrid_Books_CellContentClick);
			// 
			// Column1
			// 
			this->Column1->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Column1->HeaderText = L"Info";
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			// 
			// Column2
			// 
			this->Column2->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Column2->HeaderText = L"Book";
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			// 
			// textBox_Search
			// 
			this->textBox_Search->BackColor = System::Drawing::SystemColors::Info;
			this->textBox_Search->Location = System::Drawing::Point(9, 28);
			this->textBox_Search->Name = L"textBox_Search";
			this->textBox_Search->Size = System::Drawing::Size(179, 20);
			this->textBox_Search->TabIndex = 10;
			this->textBox_Search->TextChanged += gcnew System::EventHandler(this, &Form1::textBox_Search_TextChanged);
			this->textBox_Search->MouseEnter += gcnew System::EventHandler(this, &Form1::textBox_Search_MouseEnter);
			this->textBox_Search->MouseLeave += gcnew System::EventHandler(this, &Form1::textBox_Search_MouseLeave);
			// 
			// checkBox_Show_only_expiped
			// 
			this->checkBox_Show_only_expiped->AutoSize = true;
			this->checkBox_Show_only_expiped->Location = System::Drawing::Point(200, 322);
			this->checkBox_Show_only_expiped->Name = L"checkBox_Show_only_expiped";
			this->checkBox_Show_only_expiped->Size = System::Drawing::Size(144, 17);
			this->checkBox_Show_only_expiped->TabIndex = 11;
			this->checkBox_Show_only_expiped->Text = L"Show expired books only";
			this->checkBox_Show_only_expiped->UseVisualStyleBackColor = true;
			this->checkBox_Show_only_expiped->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox_Show_only_expiped_CheckedChanged);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			this->openFileDialog1->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &Form1::openFileDialog1_FileOk_1);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::Red;
			this->label1->Location = System::Drawing::Point(383, 311);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(87, 28);
			this->label1->TabIndex = 12;
			this->label1->Text = L"EXPIRED";
			this->label1->Visible = false;
			this->label1->Click += gcnew System::EventHandler(this, &Form1::label1_Click_1);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(6, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(144, 13);
			this->label2->TabIndex = 13;
			this->label2->Text = L"Type name of the book  here";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(520, 352);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->checkBox_Show_only_expiped);
			this->Controls->Add(this->textBox_Search);
			this->Controls->Add(this->dataGrid_Books);
			this->Controls->Add(this->button_Load);
			this->Controls->Add(this->button_Save);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button_addBook);
			this->Controls->Add(this->button_Edit);
			this->Controls->Add(this->listBox1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Form1::Form1_FormClosing);
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGrid_Books))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		std::string syss2str(String^ q)
		{
			std::string tmp = "";
			for (int i = 0; i < q->Length; i++)
				tmp += q[i];
			return tmp;

		}
		int findId(String^ str, String^ finded)
		{
			int index = str->LastIndexOf(finded);
			return Convert::ToInt32(str->Remove(0, index + finded->Length));
		}
	private: System::Void listBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e)
	{
				 if (listBox1->SelectedIndex == -1)//miss click
					 return;
				 auto selectedBook = listBox1->SelectedItem;
				 System::String^ s = selectedBook->ToString();
				 int id = findId(s, "ID:");
				 Book toFill = DB->Read(id);
				 fill_dataGrid(toFill);
	}
	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {

	}

#pragma region Event function
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e)
	{

	}
#pragma endregion

#pragma region Helpfull function

			 void fill_listBox()
			 {
				 for (auto i : (dynamic_cast<DAO*>(DB)->getDataBase()))
				 {
					 String^ tmp = gcnew String(i.GetAuthor().c_str());
					 tmp += "  ";
					 tmp += gcnew String(i.GetName().c_str());
					 tmp += " ID:";
					 tmp += Convert::ToString(i.GetID());
					 listBox1->Items->Add(tmp);
				 }
			 }
			 bool isExpiried(Date date)
			 {
				 time_t t = time(0);
				 tm * Time = localtime(&t);
				 Date today;
				 today.setDay(Time->tm_mday);
				 today.setMonth(Time->tm_mon + 1);
				 today.setYear(1900 + Time->tm_year);
				 return  today > date;
			 }
			 void fill_dataGrid(Book & book)
			 {
				 dataGrid_Books->Rows->Clear();
				 dataGrid_Books->Rows->Add(L"ID", book.GetID());
				 dataGrid_Books->Rows->Add(L"Name",
					 gcnew System::String(book.GetName().c_str()));
				 dataGrid_Books->Rows->Add(L"Author",
					 gcnew System::String(book.GetAuthor().c_str()));
				 dataGrid_Books->Rows->Add("Editor",
					 gcnew System::String(book.GetEditor().c_str()));
				 dataGrid_Books->Rows->Add("Cover type",
					 gcnew String(book.GetCoverType().c_str()));
				 dataGrid_Books->Rows->Add("State of book",
					 gcnew String(book.GetBState().c_str()));
				 dataGrid_Books->Rows->Add("Orendator",
					 gcnew String(book.getRenter().GetName().c_str()));
				 dataGrid_Books->Rows->Add("Date of give",
					 gcnew String(book.getRenter().GetDateOfRent().DateToString().c_str()));
				 dataGrid_Books->Rows->Add("Date of Return",
					 gcnew String(book.getRenter().GetDateOfReturn().DateToString().c_str()));
				 if (isExpiried(book.getRenter().GetDateOfReturn()))
				 {
					 label1->Visible = true;
				 }
				 else
				 {
					 label1->Visible = false;
				 }
			 }
#pragma endregion

	private: System::Void button_addBook_Click(System::Object^  sender, System::EventArgs^  e)
	{
				 Form_Add_book form;
				 form.Text = "Adding Book";
				 form.ShowDialog();
				 
				 try{
					 if (form.book != NULL)
					 {
						 DB->Create(*form.book);
						 listBox1->Items->Clear();
						 fill_listBox();
					 }
				 }
				
				  catch (Exception^ a )
				  {
					MessageBox::Show("This ID is already insists in library", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					return;
				  }
				 
	}

private: System::Void dataGrid_Books_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
			 //dataGrid_Books->Sorted
		 }
		 
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			
		 }
private: System::Void menuStrip1_ItemClicked(System::Object^  sender, System::Windows::Forms::ToolStripItemClickedEventArgs^  e) {
			 
		 }
private: System::Void button_Search_Click(System::Object^  sender, System::EventArgs^  e) {
			 
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) { //delete
			 if (dynamic_cast<DAO*>(DB)->getDataBase().GetContainer()->empty())
			 {
				 MessageBox::Show("There is nothing to delete", "Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
				 return;
			 }
			 auto status = MessageBox::Show("Are you sure?", "Delete?", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
			
			 if (status.ToString()== "Yes")
			 {
				 DB->Delete(findId(listBox1->SelectedItem->ToString(), "ID:"));
				 this->listBox1->Items->Clear();
				 fill_listBox();
			 }	 
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (dynamic_cast<DAO*>(DB)->getDataBase().GetContainer()->empty())
			 {
				 MessageBox::Show("There is nothing to save", "Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
				 return;
			 }
			 saveFileDialog1->Filter = "MyLib Documents|*.mylib";
			 saveFileDialog1->ShowDialog();
			System::String^ s  =  saveFileDialog1->FileName;
			DB->Save(s);
			
		 }
private: System::Void fileSystemWatcher1_Changed(System::Object^  sender, System::IO::FileSystemEventArgs^  e) {
		 }
private: System::Void openFileDialog1_FileOk(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
		 }
private: System::Void openFileDialog1_FileOk_1(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
		 }
private: System::Void button_Load_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (!dynamic_cast<DAO*>(DB)->getDataBase().GetContainer()->empty())
			 {

				 auto status = MessageBox::Show("Your current library will be erased, would you like to save it?", "Save?", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
				 if (status.ToString() == "Yes")
				 {
					 saveFileDialog1->ShowDialog();
					 System::String^ s = saveFileDialog1->FileName;
				 }
			 }
				 listBox1->Items->Clear();
				 openFileDialog1->Filter = "MyLib Documents|*.mylib";
				 openFileDialog1->ShowDialog();
				 System::String^ s = openFileDialog1->FileName;
				 DB->Load(s);
				 fill_listBox(); 
		 }
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label1_Click_1(System::Object^  sender, System::EventArgs^  e) {
		 }

		 bool compareStringsSearchForm(String^ Source, String^ second)
		 {
			 Source = Source->ToLower();
			 second = second->ToLower();
			 for (int i = 0; i < second->Length && i<Source->Length;i++)
			 if (Source[i] != second[i])
				 return false;
			 return true;
		 }
private: System::Void textBox_Search_TextChanged(System::Object^  sender, System::EventArgs^  e) 
		{
			 listBox1->Items->Clear();
			 for (auto i : (dynamic_cast<DAO*>(DB)->getDataBase()))
			 {
				 if (compareStringsSearchForm(gcnew String(i.GetAuthor().c_str()), textBox_Search->Text) ||
					 compareStringsSearchForm(gcnew String(i.GetName().c_str()), textBox_Search->Text))
				 {
					 String^ tmp = gcnew String(i.GetAuthor().c_str());
					 tmp += "  ";
					 tmp += gcnew String(i.GetName().c_str());
					 tmp += " ID:";
					 tmp += Convert::ToString(i.GetID());
					 listBox1->Items->Add(tmp);
				 }

			 }
		}
private: System::Void checkBox_Show_only_expiped_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 listBox1->Items->Clear();
			 if (checkBox_Show_only_expiped->Checked)
			 {

				 for (auto i : (dynamic_cast<DAO*>(DB)->getDataBase()))
				 {
					 Renter tmp = i.getRenter();
					 
					 if (isExpiried(tmp.GetDateOfReturn()))
					 {
						 String^ tmp = gcnew String(i.GetAuthor().c_str());
						 tmp += "  ";
						 tmp += gcnew String(i.GetName().c_str());
						 tmp += " ID:";
						 tmp += Convert::ToString(i.GetID());
						 listBox1->Items->Add(tmp);
					 }

				 }
			 }
			 else
				 fill_listBox();
			 
}
	private: System::Void button_Edit_Click(System::Object^  sender, System::EventArgs^  e) {
				 Editing edit_form;
				 edit_form.Text = "Editing";
				 if (listBox1->SelectedItem == nullptr)
				 {
					 MessageBox::Show("There is nothing to edit", "Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
					 return;
				 }
				 int id = findId(listBox1->SelectedItem->ToString(), "ID:");
				 Book b = DB->Read(findId(listBox1->SelectedItem->ToString(), "ID:"));
				 edit_form.Set_All(b.GetName(), b.GetAuthor(), b.GetEditor(), b.GetCoverType(), b.GetBState(), b.getRenter());
				 edit_form.ShowDialog();
				 try{
					 string n = edit_form.book->GetName();
					 string a = edit_form.book->GetAuthor();
					 string ed = edit_form.book->GetEditor();
					 string c_t = edit_form.book->GetCoverType();
					 string b_s = edit_form.book->GetBState();
					 Renter r = edit_form.book->getRenter();
					 DB->Update(id, n, a, ed, c_t, b_s, r);
					 this->listBox1->Items->Clear();
					 fill_listBox();
				 }
				 catch (System::NullReferenceException^ ex)
				 {
					 //too lasy to do this ;)
				 }
				 //



	}
private: System::Void Form1_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
		if (!dynamic_cast<DAO*>(DB)->getDataBase().GetContainer()->empty()){
				 auto status = MessageBox::Show("Do you want to save your lib?", "Exit?", MessageBoxButtons::YesNoCancel, MessageBoxIcon::Question);

				 if (status.ToString() == "Yes")
				 {
					 saveFileDialog1->ShowDialog();
					 System::String^ s = saveFileDialog1->FileName;
				 }
				 if (status.ToString() == "Cancel")
				 {
					 e->Cancel = true;
					 return;
				 }
			 }
			 
}
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label2_MouseEnter(System::Object^  sender, System::EventArgs^  e) {
			 
}
private: System::Void textBox_Search_MouseEnter(System::Object^  sender, System::EventArgs^  e) {
			 label2->Visible = true;
}
private: System::Void textBox_Search_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 label2->Visible = false;
}

				
		 
};
}

