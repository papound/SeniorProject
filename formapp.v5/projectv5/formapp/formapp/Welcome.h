#pragma once
#include "Login.h"
#include "Register.h"

namespace formapp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for login
	/// </summary>
	public ref class Welcome : public System::Windows::Forms::Form
	{
	public:
		Welcome(void)
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
		~Welcome()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label3;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Welcome::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25));
			this->label1->Location = System::Drawing::Point(77, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(355, 39);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Ground Truth Analysis";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->label2->Location = System::Drawing::Point(110, 48);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(287, 31);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Breast Cancer Tumors";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.InitialImage")));
			this->pictureBox1->Location = System::Drawing::Point(162, 107);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(189, 174);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &Welcome::pictureBox1_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(216, 311);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Log In";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Welcome::button1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(187, 351);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(126, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Not a member\?...Sign Up";
			this->label3->Click += gcnew System::EventHandler(this, &Welcome::label3_Click);
			// 
			// Welcome
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(520, 408);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Welcome";
			this->Text = L"Ground Truth Analysis for Breast Cancer Prototype";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

		this->Hide();
		formapp::Login^ login_dialog = gcnew Login();
		login_dialog->ShowDialog();
		this->Close();

	}
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {

		this->Hide();
		formapp::Register^ register_dialog = gcnew Register();
		register_dialog->ShowDialog();
		this->Close();
}
private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
