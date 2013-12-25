#pragma once
#include "Book.h"
namespace Project {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Editing
	/// </summary>
	public ref class Editing : public System::Windows::Forms::Form
	{
	public:
		Editing(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	public:Book* book = NULL;
	public: 
		void Set_All(string name, string author, string editor, string coverType, string bookState, Renter renter)
	{
				System::String^  N = gcnew System::String(name.c_str());
				System::String^  A = gcnew System::String(author.c_str());
				System::String^  E = gcnew System::String(editor.c_str());
				System::String^  C_T = gcnew System::String(coverType.c_str());
				System::String^  B_S = gcnew System::String(bookState.c_str());
				System::String^  R_N = gcnew System::String(renter.GetName().c_str());
				this->textBox_Author->Text = A;
				this->textBox_Name->Text = N;
				this->textBox_Editor->Text = E;
				this->textBox_CoverType->Text = C_T;
				this->textBox_State->Text = B_S;
				this->textBox_Orendator_name->Text = R_N;
	}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Editing()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DateTimePicker^  date_Date_of_return;
	protected:
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker_Date_of_Give;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::TextBox^  textBox_Orendator_name;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Button^  Add_Form_button_CANCEL;
	private: System::Windows::Forms::Button^  Add_Form_Button_OK;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox_State;
	private: System::Windows::Forms::TextBox^  textBox_Author;
	private: System::Windows::Forms::TextBox^  textBox_CoverType;
	private: System::Windows::Forms::TextBox^  textBox_Name;
	private: System::Windows::Forms::TextBox^  textBox_Editor;
			 std::string sysstr2str(System::String ^str)
			 {
				 std::string str1 = "";
				 for (int i = 0; i < str->Length; i++)
					 str1 += (char)str[i];

				 return str1;
			 }

	protected:


















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
			this->date_Date_of_return = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimePicker_Date_of_Give = (gcnew System::Windows::Forms::DateTimePicker());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox_Orendator_name = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->Add_Form_button_CANCEL = (gcnew System::Windows::Forms::Button());
			this->Add_Form_Button_OK = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox_State = (gcnew System::Windows::Forms::TextBox());
			this->textBox_Author = (gcnew System::Windows::Forms::TextBox());
			this->textBox_CoverType = (gcnew System::Windows::Forms::TextBox());
			this->textBox_Name = (gcnew System::Windows::Forms::TextBox());
			this->textBox_Editor = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// date_Date_of_return
			// 
			this->date_Date_of_return->Location = System::Drawing::Point(154, 186);
			this->date_Date_of_return->Name = L"date_Date_of_return";
			this->date_Date_of_return->Size = System::Drawing::Size(118, 20);
			this->date_Date_of_return->TabIndex = 41;
			// 
			// dateTimePicker_Date_of_Give
			// 
			this->dateTimePicker_Date_of_Give->Location = System::Drawing::Point(12, 186);
			this->dateTimePicker_Date_of_Give->Name = L"dateTimePicker_Date_of_Give";
			this->dateTimePicker_Date_of_Give->Size = System::Drawing::Size(118, 20);
			this->dateTimePicker_Date_of_Give->TabIndex = 40;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(40, 2);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(54, 13);
			this->label9->TabIndex = 39;
			this->label9->Text = L"Orendator";
			// 
			// textBox_Orendator_name
			// 
			this->textBox_Orendator_name->Location = System::Drawing::Point(12, 18);
			this->textBox_Orendator_name->Name = L"textBox_Orendator_name";
			this->textBox_Orendator_name->Size = System::Drawing::Size(118, 20);
			this->textBox_Orendator_name->TabIndex = 38;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(175, 170);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(79, 13);
			this->label7->TabIndex = 37;
			this->label7->Text = L"Date Of Return";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(19, 170);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(65, 13);
			this->label8->TabIndex = 36;
			this->label8->Text = L"Date of give";
			// 
			// Add_Form_button_CANCEL
			// 
			this->Add_Form_button_CANCEL->Location = System::Drawing::Point(165, 225);
			this->Add_Form_button_CANCEL->Name = L"Add_Form_button_CANCEL";
			this->Add_Form_button_CANCEL->Size = System::Drawing::Size(86, 33);
			this->Add_Form_button_CANCEL->TabIndex = 35;
			this->Add_Form_button_CANCEL->Text = L"Cancel";
			this->Add_Form_button_CANCEL->UseVisualStyleBackColor = true;
			this->Add_Form_button_CANCEL->Click += gcnew System::EventHandler(this, &Editing::Add_Form_button_CANCEL_Click);
			// 
			// Add_Form_Button_OK
			// 
			this->Add_Form_Button_OK->Location = System::Drawing::Point(33, 225);
			this->Add_Form_Button_OK->Name = L"Add_Form_Button_OK";
			this->Add_Form_Button_OK->Size = System::Drawing::Size(86, 33);
			this->Add_Form_Button_OK->TabIndex = 34;
			this->Add_Form_Button_OK->Text = L"OK";
			this->Add_Form_Button_OK->UseVisualStyleBackColor = true;
			this->Add_Form_Button_OK->Click += gcnew System::EventHandler(this, &Editing::Add_Form_Button_OK_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(175, 116);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(32, 13);
			this->label6->TabIndex = 33;
			this->label6->Text = L"State";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(175, 61);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(58, 13);
			this->label5->TabIndex = 32;
			this->label5->Text = L"Cover type";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(180, 2);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(34, 13);
			this->label4->TabIndex = 31;
			this->label4->Text = L"Editor";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(19, 116);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(38, 13);
			this->label3->TabIndex = 30;
			this->label3->Text = L"Author";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(19, 61);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(35, 13);
			this->label2->TabIndex = 29;
			this->label2->Text = L"Name";
			// 
			// textBox_State
			// 
			this->textBox_State->Location = System::Drawing::Point(154, 132);
			this->textBox_State->Name = L"textBox_State";
			this->textBox_State->Size = System::Drawing::Size(118, 20);
			this->textBox_State->TabIndex = 27;
			// 
			// textBox_Author
			// 
			this->textBox_Author->Location = System::Drawing::Point(12, 132);
			this->textBox_Author->Name = L"textBox_Author";
			this->textBox_Author->Size = System::Drawing::Size(118, 20);
			this->textBox_Author->TabIndex = 26;
			// 
			// textBox_CoverType
			// 
			this->textBox_CoverType->Location = System::Drawing::Point(154, 77);
			this->textBox_CoverType->Name = L"textBox_CoverType";
			this->textBox_CoverType->Size = System::Drawing::Size(118, 20);
			this->textBox_CoverType->TabIndex = 25;
			// 
			// textBox_Name
			// 
			this->textBox_Name->Location = System::Drawing::Point(12, 77);
			this->textBox_Name->Name = L"textBox_Name";
			this->textBox_Name->Size = System::Drawing::Size(118, 20);
			this->textBox_Name->TabIndex = 24;
			// 
			// textBox_Editor
			// 
			this->textBox_Editor->Location = System::Drawing::Point(154, 18);
			this->textBox_Editor->Name = L"textBox_Editor";
			this->textBox_Editor->Size = System::Drawing::Size(118, 20);
			this->textBox_Editor->TabIndex = 23;
			// 
			// Editing
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 274);
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
			this->Controls->Add(this->textBox_State);
			this->Controls->Add(this->textBox_Author);
			this->Controls->Add(this->textBox_CoverType);
			this->Controls->Add(this->textBox_Name);
			this->Controls->Add(this->textBox_Editor);
			this->Name = L"Editing";
			this->Text = L"Editing";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void Add_Form_Button_OK_Click(System::Object^  sender, System::EventArgs^  e) {
			 /////////////SET BOOK FIELDS/////////////////////////////////////////
			 string name = sysstr2str(textBox_Name->Text->ToString());
			 string author = sysstr2str(textBox_Author->Text->ToString());
			 string editor = sysstr2str(textBox_Editor->Text->ToString());
			 string CoverType = sysstr2str(textBox_CoverType->Text->ToString());
			 string State = sysstr2str(textBox_State->Text->ToString());
			 string renter_name = sysstr2str(textBox_Orendator_name->Text->ToString());

			 Date date_of_give = Date(dateTimePicker_Date_of_Give->Value.Day,
				 dateTimePicker_Date_of_Give->Value.Month, dateTimePicker_Date_of_Give->Value.Year);
			 Date date_of_Return = Date(date_Date_of_return->Value.Day, date_Date_of_return->Value.Month,
				 date_Date_of_return->Value.Year);

			 book = new Book(1, name, author, editor, CoverType, State, Renter(date_of_give, date_of_Return, renter_name));
			 this->Close();

			 /////////////NOW LETS HANDLE WITH DATE////////////////////////////////

			 
}
private: System::Void Add_Form_button_CANCEL_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Close();
}
};
}
