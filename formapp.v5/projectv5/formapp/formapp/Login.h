#pragma once
#include "MyForm.h"

namespace formapp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Login
	/// </summary>
	public ref class Login : public System::Windows::Forms::Form
	{
	public:
		Login(void)
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
		~Login()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	protected:
	private: System::Windows::Forms::Label^  username;
	private: System::Windows::Forms::TextBox^  uname_box;
	private: System::Windows::Forms::TextBox^  pass_box;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  ok;
	private: System::Windows::Forms::Button^  reset;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Login::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->username = (gcnew System::Windows::Forms::Label());
			this->uname_box = (gcnew System::Windows::Forms::TextBox());
			this->pass_box = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->ok = (gcnew System::Windows::Forms::Button());
			this->reset = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(137, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(256, 256);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// username
			// 
			this->username->AutoSize = true;
			this->username->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->username->Location = System::Drawing::Point(85, 285);
			this->username->Name = L"username";
			this->username->Size = System::Drawing::Size(83, 20);
			this->username->TabIndex = 1;
			this->username->Text = L"Username";
			// 
			// uname_box
			// 
			this->uname_box->Location = System::Drawing::Point(184, 285);
			this->uname_box->Name = L"uname_box";
			this->uname_box->Size = System::Drawing::Size(201, 20);
			this->uname_box->TabIndex = 2;
			// 
			// pass_box
			// 
			this->pass_box->Location = System::Drawing::Point(184, 323);
			this->pass_box->Name = L"pass_box";
			this->pass_box->PasswordChar = '*';
			this->pass_box->Size = System::Drawing::Size(201, 20);
			this->pass_box->TabIndex = 4;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label1->Location = System::Drawing::Point(85, 324);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(78, 20);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Password";
			// 
			// ok
			// 
			this->ok->Location = System::Drawing::Point(169, 368);
			this->ok->Name = L"ok";
			this->ok->Size = System::Drawing::Size(75, 23);
			this->ok->TabIndex = 5;
			this->ok->Text = L"OK";
			this->ok->UseVisualStyleBackColor = true;
			this->ok->Click += gcnew System::EventHandler(this, &Login::ok_Click);
			// 
			// reset
			// 
			this->reset->Location = System::Drawing::Point(285, 368);
			this->reset->Name = L"reset";
			this->reset->Size = System::Drawing::Size(75, 23);
			this->reset->TabIndex = 6;
			this->reset->Text = L"Reset";
			this->reset->UseVisualStyleBackColor = true;
			// 
			// Login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(520, 408);
			this->Controls->Add(this->reset);
			this->Controls->Add(this->ok);
			this->Controls->Add(this->pass_box);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->uname_box);
			this->Controls->Add(this->username);
			this->Controls->Add(this->pictureBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Login";
			this->Text = L"Login";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ok_Click(System::Object^  sender, System::EventArgs^  e) {

		if (uname_box->Text == "doc" && pass_box->Text == "1234"){
			MessageBox::Show("Login Successful");
			MessageBox::Show("Welcome, Dr. Doc Brown");
			this->Hide();
			formapp::MyForm^ Main_dialog = gcnew MyForm();
			Main_dialog->ShowDialog();
			this->Close();
		}
		else{
			MessageBox::Show("Login Failed! Try again!");
			uname_box->Text = "";
			pass_box->Text = "";
		}

	}
};
}
