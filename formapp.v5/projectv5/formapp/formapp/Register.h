#pragma once
#include "Login.h"

namespace formapp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Register
	/// </summary>
	public ref class Register : public System::Windows::Forms::Form
	{
	public:
		Register(void)
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
		~Register()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  email_box;
	protected:
	private: System::Windows::Forms::Label^  email;
	private: System::Windows::Forms::TextBox^  username_box;
	private: System::Windows::Forms::TextBox^  lname_box;
	private: System::Windows::Forms::TextBox^  fname_box;
	private: System::Windows::Forms::Label^  fname;
	private: System::Windows::Forms::Label^  lname;
	private: System::Windows::Forms::Label^  username;
	private: System::Windows::Forms::Label^  position;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Button^  register_btn;
	private: System::Windows::Forms::Button^  back_btn;
	private: System::Windows::Forms::TextBox^  confirm_pass_box;
	private: System::Windows::Forms::TextBox^  pass_box;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Register::typeid));
			this->email_box = (gcnew System::Windows::Forms::TextBox());
			this->email = (gcnew System::Windows::Forms::Label());
			this->username_box = (gcnew System::Windows::Forms::TextBox());
			this->lname_box = (gcnew System::Windows::Forms::TextBox());
			this->fname_box = (gcnew System::Windows::Forms::TextBox());
			this->fname = (gcnew System::Windows::Forms::Label());
			this->lname = (gcnew System::Windows::Forms::Label());
			this->username = (gcnew System::Windows::Forms::Label());
			this->position = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->register_btn = (gcnew System::Windows::Forms::Button());
			this->back_btn = (gcnew System::Windows::Forms::Button());
			this->confirm_pass_box = (gcnew System::Windows::Forms::TextBox());
			this->pass_box = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// email_box
			// 
			this->email_box->Location = System::Drawing::Point(129, 206);
			this->email_box->Name = L"email_box";
			this->email_box->Size = System::Drawing::Size(121, 20);
			this->email_box->TabIndex = 19;
			// 
			// email
			// 
			this->email->AutoSize = true;
			this->email->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->email->Location = System::Drawing::Point(42, 206);
			this->email->Name = L"email";
			this->email->Size = System::Drawing::Size(48, 20);
			this->email->TabIndex = 18;
			this->email->Text = L"Email";
			// 
			// username_box
			// 
			this->username_box->Location = System::Drawing::Point(129, 155);
			this->username_box->Name = L"username_box";
			this->username_box->Size = System::Drawing::Size(121, 20);
			this->username_box->TabIndex = 17;
			// 
			// lname_box
			// 
			this->lname_box->Location = System::Drawing::Point(363, 106);
			this->lname_box->Name = L"lname_box";
			this->lname_box->Size = System::Drawing::Size(121, 20);
			this->lname_box->TabIndex = 16;
			// 
			// fname_box
			// 
			this->fname_box->Location = System::Drawing::Point(129, 105);
			this->fname_box->Name = L"fname_box";
			this->fname_box->Size = System::Drawing::Size(121, 20);
			this->fname_box->TabIndex = 15;
			// 
			// fname
			// 
			this->fname->AutoSize = true;
			this->fname->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->fname->Location = System::Drawing::Point(42, 106);
			this->fname->Name = L"fname";
			this->fname->Size = System::Drawing::Size(51, 20);
			this->fname->TabIndex = 14;
			this->fname->Text = L"Name";
			// 
			// lname
			// 
			this->lname->AutoSize = true;
			this->lname->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->lname->Location = System::Drawing::Point(271, 103);
			this->lname->Name = L"lname";
			this->lname->Size = System::Drawing::Size(74, 20);
			this->lname->TabIndex = 13;
			this->lname->Text = L"Surname";
			// 
			// username
			// 
			this->username->AutoSize = true;
			this->username->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->username->Location = System::Drawing::Point(42, 155);
			this->username->Name = L"username";
			this->username->Size = System::Drawing::Size(83, 20);
			this->username->TabIndex = 12;
			this->username->Text = L"Username";
			// 
			// position
			// 
			this->position->AutoSize = true;
			this->position->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->position->Location = System::Drawing::Point(42, 58);
			this->position->Name = L"position";
			this->position->Size = System::Drawing::Size(65, 20);
			this->position->TabIndex = 11;
			this->position->Text = L"Position";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Doctor", L"Patient" });
			this->comboBox1->Location = System::Drawing::Point(129, 58);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 10;
			// 
			// register_btn
			// 
			this->register_btn->Location = System::Drawing::Point(155, 356);
			this->register_btn->Name = L"register_btn";
			this->register_btn->Size = System::Drawing::Size(75, 23);
			this->register_btn->TabIndex = 20;
			this->register_btn->Text = L"Register!";
			this->register_btn->UseVisualStyleBackColor = true;
			this->register_btn->Click += gcnew System::EventHandler(this, &Register::register_btn_Click);
			// 
			// back_btn
			// 
			this->back_btn->Location = System::Drawing::Point(306, 356);
			this->back_btn->Name = L"back_btn";
			this->back_btn->Size = System::Drawing::Size(75, 23);
			this->back_btn->TabIndex = 21;
			this->back_btn->Text = L"Back";
			this->back_btn->UseVisualStyleBackColor = true;
			this->back_btn->Click += gcnew System::EventHandler(this, &Register::back_btn_Click);
			// 
			// confirm_pass_box
			// 
			this->confirm_pass_box->Location = System::Drawing::Point(198, 297);
			this->confirm_pass_box->Name = L"confirm_pass_box";
			this->confirm_pass_box->PasswordChar = '*';
			this->confirm_pass_box->Size = System::Drawing::Size(121, 20);
			this->confirm_pass_box->TabIndex = 25;
			// 
			// pass_box
			// 
			this->pass_box->Location = System::Drawing::Point(129, 250);
			this->pass_box->Name = L"pass_box";
			this->pass_box->Size = System::Drawing::Size(121, 20);
			this->pass_box->TabIndex = 24;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label1->Location = System::Drawing::Point(42, 251);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(78, 20);
			this->label1->TabIndex = 23;
			this->label1->Text = L"Password";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label2->Location = System::Drawing::Point(42, 295);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(137, 20);
			this->label2->TabIndex = 22;
			this->label2->Text = L"Confirm Password";
			// 
			// Register
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(520, 408);
			this->Controls->Add(this->confirm_pass_box);
			this->Controls->Add(this->pass_box);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->back_btn);
			this->Controls->Add(this->register_btn);
			this->Controls->Add(this->email_box);
			this->Controls->Add(this->email);
			this->Controls->Add(this->username_box);
			this->Controls->Add(this->lname_box);
			this->Controls->Add(this->fname_box);
			this->Controls->Add(this->fname);
			this->Controls->Add(this->lname);
			this->Controls->Add(this->username);
			this->Controls->Add(this->position);
			this->Controls->Add(this->comboBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Register";
			this->Text = L"Register";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void register_btn_Click(System::Object^  sender, System::EventArgs^  e) {

		if (fname_box->Text != "" &&
			lname_box->Text != "" &&
			username_box->Text != "" &&
			pass_box->Text != "" &&
			confirm_pass_box->Text != "" &&
			pass_box->Text == confirm_pass_box->Text
			){
			MessageBox::Show("Register Successful");
			this->Hide();
			formapp::Login^ login_dialog = gcnew Login();
			login_dialog->ShowDialog();
			this->Close();
		}
		else{

			MessageBox::Show("Register Unsuccessful! Try Again!");
			pass_box->Text == "";
			confirm_pass_box->Text == "";
		}
	}
	private: System::Void back_btn_Click(System::Object^  sender, System::EventArgs^  e) {
		
	}
};
}
