#pragma once

namespace Project {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for DeleteDialog
	/// </summary>
	public ref class DeleteDialog : public System::Windows::Forms::Form
	{
	public:
		DeleteDialog(void)
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
		~DeleteDialog()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  buttonDelete_book_ok;
	private: System::Windows::Forms::Button^  buttonDelete_book_cancel;

	protected: 

	protected: 

	private: System::Windows::Forms::Label^  label_delete_book;

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
			this->buttonDelete_book_ok = (gcnew System::Windows::Forms::Button());
			this->buttonDelete_book_cancel = (gcnew System::Windows::Forms::Button());
			this->label_delete_book = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// buttonDelete_book_ok
			// 
			this->buttonDelete_book_ok->Location = System::Drawing::Point(32, 67);
			this->buttonDelete_book_ok->Name = L"buttonDelete_book_ok";
			this->buttonDelete_book_ok->Size = System::Drawing::Size(75, 23);
			this->buttonDelete_book_ok->TabIndex = 0;
			this->buttonDelete_book_ok->Text = L"Ok";
			this->buttonDelete_book_ok->UseVisualStyleBackColor = true;
			this->buttonDelete_book_ok->Click += gcnew System::EventHandler(this, &DeleteDialog::button1_Click);
			// 
			// buttonDelete_book_cancel
			// 
			this->buttonDelete_book_cancel->Location = System::Drawing::Point(113, 67);
			this->buttonDelete_book_cancel->Name = L"buttonDelete_book_cancel";
			this->buttonDelete_book_cancel->Size = System::Drawing::Size(75, 23);
			this->buttonDelete_book_cancel->TabIndex = 1;
			this->buttonDelete_book_cancel->Text = L"Cancel";
			this->buttonDelete_book_cancel->UseVisualStyleBackColor = true;
			// 
			// label_delete_book
			// 
			this->label_delete_book->AutoSize = true;
			this->label_delete_book->Location = System::Drawing::Point(29, 25);
			this->label_delete_book->Name = L"label_delete_book";
			this->label_delete_book->Size = System::Drawing::Size(163, 13);
			this->label_delete_book->TabIndex = 2;
			this->label_delete_book->Text = L"Do u really want do delete book\?";
			this->label_delete_book->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// DeleteDialog
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(221, 100);
			this->Controls->Add(this->label_delete_book);
			this->Controls->Add(this->buttonDelete_book_cancel);
			this->Controls->Add(this->buttonDelete_book_ok);
			this->Name = L"DeleteDialog";
			this->Text = L"DeleteDialog";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

			 }
	};
}
