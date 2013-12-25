#pragma once
#include "Book.h"
#include <string>
namespace Project {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form_Add_book
	/// </summary>
	public ref class Form_Add_book : public System::Windows::Forms::Form
	{
	public:
		Form_Add_book(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form_Add_book()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  textBox_ID;
	private: System::Windows::Forms::TextBox^  textBox_Editor;
	protected: 


	private: System::Windows::Forms::TextBox^  textBox_Name;
	private: System::Windows::Forms::TextBox^  textBox_CoverType;


	private: System::Windows::Forms::TextBox^  textBox_Author;
	private: System::Windows::Forms::TextBox^  textBox_State;


	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Button^  Add_Form_Button_OK;

	private: System::Windows::Forms::Button^  Add_Form_button_CANCEL;




	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;




	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::TextBox^  textBox_Orendator_name;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker_Date_of_Give;
	private: System::Windows::Forms::DateTimePicker^  date_Date_of_return;





	protected: 

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBox_ID = (gcnew System::Windows::Forms::TextBox());
			this->textBox_Editor = (gcnew System::Windows::Forms::TextBox());
			this->textBox_Name = (gcnew System::Windows::Forms::TextBox());
			this->textBox_CoverType = (gcnew System::Windows::Forms::TextBox());
			this->textBox_Author = (gcnew System::Windows::Forms::TextBox());
			this->textBox_State = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->Add_Form_Button_OK = (gcnew System::Windows::Forms::Button());
			this->Add_Form_button_CANCEL = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox_Orendator_name = (gcnew System::Windows::Forms::TextBox());
			this->dateTimePicker_Date_of_Give = (gcnew System::Windows::Forms::DateTimePicker());
			this->date_Date_of_return = (gcnew System::Windows::Forms::DateTimePicker());
			this->SuspendLayout();
			// 
			// textBox_ID
			// 
			this->textBox_ID->Location = System::Drawing::Point(12, 39);
			this->textBox_ID->Name = L"textBox_ID";
			this->textBox_ID->Size = System::Drawing::Size(118, 20);
			this->textBox_ID->TabIndex = 0;
			this->textBox_ID->TextChanged += gcnew System::EventHandler(this, &Form_Add_book::textBox1_TextChanged);
			// 
			// textBox_Editor
			// 
			this->textBox_Editor->Location = System::Drawing::Point(154, 39);
			this->textBox_Editor->Name = L"textBox_Editor";
			this->textBox_Editor->Size = System::Drawing::Size(118, 20);
			this->textBox_Editor->TabIndex = 1;
			// 
			// textBox_Name
			// 
			this->textBox_Name->Location = System::Drawing::Point(12, 98);
			this->textBox_Name->Name = L"textBox_Name";
			this->textBox_Name->Size = System::Drawing::Size(118, 20);
			this->textBox_Name->TabIndex = 2;
			// 
			// textBox_CoverType
			// 
			this->textBox_CoverType->Location = System::Drawing::Point(154, 98);
			this->textBox_CoverType->Name = L"textBox_CoverType";
			this->textBox_CoverType->Size = System::Drawing::Size(118, 20);
			this->textBox_CoverType->TabIndex = 3;
			// 
			// textBox_Author
			// 
			this->textBox_Author->Location = System::Drawing::Point(12, 153);
			this->textBox_Author->Name = L"textBox_Author";
			this->textBox_Author->Size = System::Drawing::Size(118, 20);
			this->textBox_Author->TabIndex = 4;
			// 
			// textBox_State
			// 
			this->textBox_State->Location = System::Drawing::Point(154, 153);
			this->textBox_State->Name = L"textBox_State";
			this->textBox_State->Size = System::Drawing::Size(118, 20);
			this->textBox_State->TabIndex = 5;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(19, 23);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(18, 13);
			this->label1->TabIndex = 6;
			this->label1->Text = L"ID";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(19, 72);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(35, 13);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Name";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(19, 137);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(38, 13);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Author";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(180, 23);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(34, 13);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Editor";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(175, 82);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(58, 13);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Cover type";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(175, 137);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(32, 13);
			this->label6->TabIndex = 11;
			this->label6->Text = L"State";
			// 
			// Add_Form_Button_OK
			// 
			this->Add_Form_Button_OK->Location = System::Drawing::Point(36, 298);
			this->Add_Form_Button_OK->Name = L"Add_Form_Button_OK";
			this->Add_Form_Button_OK->Size = System::Drawing::Size(86, 33);
			this->Add_Form_Button_OK->TabIndex = 12;
			this->Add_Form_Button_OK->Text = L"OK";
			this->Add_Form_Button_OK->UseVisualStyleBackColor = true;
			this->Add_Form_Button_OK->Click += gcnew System::EventHandler(this, &Form_Add_book::buttonAdd_Click);
			// 
			// Add_Form_button_CANCEL
			// 
			this->Add_Form_button_CANCEL->Location = System::Drawing::Point(168, 298);
			this->Add_Form_button_CANCEL->Name = L"Add_Form_button_CANCEL";
			this->Add_Form_button_CANCEL->Size = System::Drawing::Size(86, 33);
			this->Add_Form_button_CANCEL->TabIndex = 13;
			this->Add_Form_button_CANCEL->Text = L"Cancel";
			this->Add_Form_button_CANCEL->UseVisualStyleBackColor = true;
			this->Add_Form_button_CANCEL->Click += gcnew System::EventHandler(this, &Form_Add_book::Add_Form_button_CANCEL_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(175, 191);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(79, 13);
			this->label7->TabIndex = 17;
			this->label7->Text = L"Date Of Return";
			this->label7->Click += gcnew System::EventHandler(this, &Form_Add_book::label7_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(19, 191);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(65, 13);
			this->label8->TabIndex = 16;
			this->label8->Text = L"Date of give";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(117, 241);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(54, 13);
			this->label9->TabIndex = 19;
			this->label9->Text = L"Orendator";
			this->label9->Click += gcnew System::EventHandler(this, &Form_Add_book::label9_Click);
			// 
			// textBox_Orendator_name
			// 
			this->textBox_Orendator_name->Location = System::Drawing::Point(89, 257);
			this->textBox_Orendator_name->Name = L"textBox_Orendator_name";
			this->textBox_Orendator_name->Size = System::Drawing::Size(118, 20);
			this->textBox_Orendator_name->TabIndex = 18;
			this->textBox_Orendator_name->TextChanged += gcnew System::EventHandler(this, &Form_Add_book::textBox3_TextChanged);
			// 
			// dateTimePicker_Date_of_Give
			// 
			this->dateTimePicker_Date_of_Give->Location = System::Drawing::Point(12, 207);
			this->dateTimePicker_Date_of_Give->Name = L"dateTimePicker_Date_of_Give";
			this->dateTimePicker_Date_of_Give->Size = System::Drawing::Size(118, 20);
			this->dateTimePicker_Date_of_Give->TabIndex = 20;
			this->dateTimePicker_Date_of_Give->ValueChanged += gcnew System::EventHandler(this, &Form_Add_book::dateTimePicker_Date_of_Give_ValueChanged);
			// 
			// date_Date_of_return
			// 
			this->date_Date_of_return->Location = System::Drawing::Point(154, 207);
			this->date_Date_of_return->Name = L"date_Date_of_return";
			this->date_Date_of_return->Size = System::Drawing::Size(118, 20);
			this->date_Date_of_return->TabIndex = 21;
			this->date_Date_of_return->ValueChanged += gcnew System::EventHandler(this, &Form_Add_book::date_Date_of_return_ValueChanged);
			// 
			// Form_Add_book
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(291, 352);
			this->Controls->Add(this->date_Date_of_return);
			this->Controls->Add(this->dateTimePicker_Date_of_Give);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->textBox_Orendator_name);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->Add_Form_button_CANCEL);
			this->Controls->Add(this->Add_Form_Button_OK);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox_State);
			this->Controls->Add(this->textBox_Author);
			this->Controls->Add(this->textBox_CoverType);
			this->Controls->Add(this->textBox_Name);
			this->Controls->Add(this->textBox_Editor);
			this->Controls->Add(this->textBox_ID);
			this->Name = L"Form_Add_book";
			this->Text = L"Form_Add_book";
			this->Load += gcnew System::EventHandler(this, &Form_Add_book::Form_Add_book_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		public:Book* book=NULL;
		private: std::string sysstr2str(System::String ^str)
		{
			std::string str1 = "";
			for (int i = 0; i < str->Length; i++)
			str1 += (char)str[i];

			return str1;
		}
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void buttonAdd_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 /////////////SET BOOK FIELDS/////////////////////////////////////////
				 int id;
				 try{ 

					  id = Convert::ToInt32((textBox_ID->Text->ToString())); 
				 }
				 catch (System::FormatException ^ex)
				 {
					 MessageBox::Show("You forgot to enter an ID!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
					 
					 return;
				 }
				 string name=sysstr2str( textBox_Name->Text->ToString());
				 string author=sysstr2str(textBox_Author->Text->ToString());
				 string editor=sysstr2str(textBox_Editor->Text->ToString());
				 string CoverType=sysstr2str(textBox_CoverType->Text->ToString());
				 string State=sysstr2str(textBox_State->Text->ToString());
				 string renter_name=sysstr2str(textBox_Orendator_name->Text->ToString());
				
				 Date date_of_give = Date(dateTimePicker_Date_of_Give->Value.Day,
					 dateTimePicker_Date_of_Give->Value.Month, dateTimePicker_Date_of_Give->Value.Year);
				 Date date_of_Return = Date(date_Date_of_return->Value.Day, date_Date_of_return->Value.Month,
					 date_Date_of_return->Value.Year);
				 
				 book = new Book(id, name, author, editor, CoverType, State, Renter(date_of_give, date_of_Return, renter_name));
				 
				 /////////////NOW LETS HANDLE WITH DATE////////////////////////////////
				 
				 this->Close();
			 }
private: System::Void Form_Add_book_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label7_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label9_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void textBox3_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void dateTimePicker1_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
		      						 
		 }
private: System::Void dateTimePicker_Date_of_Give_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			 
		 }
private: System::Void date_Date_of_return_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void Add_Form_button_CANCEL_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Close();
}
};
}

