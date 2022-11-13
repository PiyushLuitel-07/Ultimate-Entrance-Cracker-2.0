#pragma once
#include "Loginform.h"
#include "User.h"
namespace Project {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient; 

	/// <summary>
	/// Summary for Registerpage
	/// </summary>
	public ref class Registerpage : public System::Windows::Forms::Form
	{
	public:
		Registerpage(void)
		{
			InitializeComponent();
			this->CenterToScreen();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Registerpage()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ tbUsername;
	private: System::Windows::Forms::TextBox^ tbPassword;
	private: System::Windows::Forms::TextBox^ tbCPassword;





	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ tbEmail;

	private: System::Windows::Forms::Label^ label8;



	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Button^ btnRegister;







	private: System::Windows::Forms::DateTimePicker^ dtpDob;

	private: System::Windows::Forms::TextBox^ tbName;









	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::PictureBox^ pictureBox3;







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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Registerpage::typeid));
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->tbUsername = (gcnew System::Windows::Forms::TextBox());
			this->tbPassword = (gcnew System::Windows::Forms::TextBox());
			this->tbCPassword = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->tbEmail = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->btnRegister = (gcnew System::Windows::Forms::Button());
			this->dtpDob = (gcnew System::Windows::Forms::DateTimePicker());
			this->tbName = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label2->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 36, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Gold;
			this->label2->Location = System::Drawing::Point(205, 386);
			this->label2->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(237, 55);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Username";
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(57, 459);
			this->label3->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 55);
			this->label3->TabIndex = 4;
			// 
			// label4
			// 
			this->label4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label4->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 36, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Gold;
			this->label4->Location = System::Drawing::Point(146, 335);
			this->label4->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(296, 55);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Date of Birth";
			// 
			// label5
			// 
			this->label5->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label5->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 36, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Gold;
			this->label5->Location = System::Drawing::Point(212, 496);
			this->label5->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(230, 55);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Password";
			// 
			// label6
			// 
			this->label6->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label6->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 36, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::Gold;
			this->label6->Location = System::Drawing::Point(28, 551);
			this->label6->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(414, 55);
			this->label6->TabIndex = 4;
			this->label6->Text = L"Confirm Password";
			// 
			// tbUsername
			// 
			this->tbUsername->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->tbUsername->BackColor = System::Drawing::SystemColors::InfoText;
			this->tbUsername->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbUsername->ForeColor = System::Drawing::Color::SpringGreen;
			this->tbUsername->Location = System::Drawing::Point(447, 384);
			this->tbUsername->Margin = System::Windows::Forms::Padding(6);
			this->tbUsername->Multiline = true;
			this->tbUsername->Name = L"tbUsername";
			this->tbUsername->Size = System::Drawing::Size(801, 57);
			this->tbUsername->TabIndex = 6;
			// 
			// tbPassword
			// 
			this->tbPassword->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->tbPassword->BackColor = System::Drawing::SystemColors::InfoText;
			this->tbPassword->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbPassword->ForeColor = System::Drawing::Color::SpringGreen;
			this->tbPassword->Location = System::Drawing::Point(447, 494);
			this->tbPassword->Margin = System::Windows::Forms::Padding(6);
			this->tbPassword->Multiline = true;
			this->tbPassword->Name = L"tbPassword";
			this->tbPassword->PasswordChar = '*';
			this->tbPassword->Size = System::Drawing::Size(801, 57);
			this->tbPassword->TabIndex = 6;
			// 
			// tbCPassword
			// 
			this->tbCPassword->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->tbCPassword->BackColor = System::Drawing::SystemColors::InfoText;
			this->tbCPassword->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbCPassword->ForeColor = System::Drawing::Color::SpringGreen;
			this->tbCPassword->Location = System::Drawing::Point(447, 549);
			this->tbCPassword->Margin = System::Windows::Forms::Padding(6);
			this->tbCPassword->Multiline = true;
			this->tbCPassword->Name = L"tbCPassword";
			this->tbCPassword->PasswordChar = '*';
			this->tbCPassword->Size = System::Drawing::Size(801, 57);
			this->tbCPassword->TabIndex = 6;
			// 
			// label7
			// 
			this->label7->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label7->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 36, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::Gold;
			this->label7->Location = System::Drawing::Point(301, 280);
			this->label7->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(141, 55);
			this->label7->TabIndex = 3;
			this->label7->Text = L"Email";
			// 
			// tbEmail
			// 
			this->tbEmail->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->tbEmail->BackColor = System::Drawing::SystemColors::InfoText;
			this->tbEmail->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbEmail->ForeColor = System::Drawing::Color::SpringGreen;
			this->tbEmail->Location = System::Drawing::Point(447, 278);
			this->tbEmail->Margin = System::Windows::Forms::Padding(6);
			this->tbEmail->Multiline = true;
			this->tbEmail->Name = L"tbEmail";
			this->tbEmail->Size = System::Drawing::Size(801, 57);
			this->tbEmail->TabIndex = 6;
			// 
			// label8
			// 
			this->label8->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label8->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 36, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::Gold;
			this->label8->Location = System::Drawing::Point(300, 225);
			this->label8->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(142, 55);
			this->label8->TabIndex = 3;
			this->label8->Text = L"Name";
			// 
			// label10
			// 
			this->label10->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label10->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 36, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::Gold;
			this->label10->Location = System::Drawing::Point(265, 441);
			this->label10->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(177, 55);
			this->label10->TabIndex = 4;
			this->label10->Text = L"Gender";
			// 
			// btnRegister
			// 
			this->btnRegister->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->btnRegister->BackColor = System::Drawing::Color::Black;
			this->btnRegister->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnRegister->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnRegister->ForeColor = System::Drawing::Color::Gold;
			this->btnRegister->Location = System::Drawing::Point(604, 640);
			this->btnRegister->Name = L"btnRegister";
			this->btnRegister->Size = System::Drawing::Size(268, 85);
			this->btnRegister->TabIndex = 8;
			this->btnRegister->Text = L"Register";
			this->btnRegister->UseVisualStyleBackColor = false;
			this->btnRegister->Click += gcnew System::EventHandler(this, &Registerpage::btnRegister_Click);
			// 
			// dtpDob
			// 
			this->dtpDob->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->dtpDob->CalendarFont = (gcnew System::Drawing::Font(L"Britannic Bold", 21.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dtpDob->CalendarForeColor = System::Drawing::Color::SpringGreen;
			this->dtpDob->CalendarMonthBackground = System::Drawing::SystemColors::InfoText;
			this->dtpDob->CalendarTitleBackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->dtpDob->CalendarTitleForeColor = System::Drawing::Color::SpringGreen;
			this->dtpDob->CalendarTrailingForeColor = System::Drawing::Color::SpringGreen;
			this->dtpDob->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 26.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dtpDob->Location = System::Drawing::Point(447, 335);
			this->dtpDob->Name = L"dtpDob";
			this->dtpDob->Size = System::Drawing::Size(801, 46);
			this->dtpDob->TabIndex = 10;
			// 
			// tbName
			// 
			this->tbName->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->tbName->BackColor = System::Drawing::SystemColors::InfoText;
			this->tbName->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbName->ForeColor = System::Drawing::Color::SpringGreen;
			this->tbName->Location = System::Drawing::Point(447, 223);
			this->tbName->Margin = System::Windows::Forms::Padding(6);
			this->tbName->Multiline = true;
			this->tbName->Name = L"tbName";
			this->tbName->Size = System::Drawing::Size(801, 57);
			this->tbName->TabIndex = 6;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox2->BackColor = System::Drawing::SystemColors::Desktop;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(25, 23);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(32, 39);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 18;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &Registerpage::pictureBox2_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::InfoText;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 99.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::Color::Gold;
			this->textBox1->Location = System::Drawing::Point(2, -16);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(1369, 167);
			this->textBox1->TabIndex = 19;
			this->textBox1->Text = L"Registration";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1370, 749);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 20;
			this->pictureBox1->TabStop = false;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton1->ForeColor = System::Drawing::Color::Gold;
			this->radioButton1->Location = System::Drawing::Point(451, 445);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(99, 40);
			this->radioButton1->TabIndex = 21;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Male";
			this->radioButton1->UseVisualStyleBackColor = false;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->radioButton2->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton2->ForeColor = System::Drawing::Color::Gold;
			this->radioButton2->Location = System::Drawing::Point(556, 445);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(133, 40);
			this->radioButton2->TabIndex = 21;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Female";
			this->radioButton2->UseVisualStyleBackColor = false;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->radioButton3->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton3->ForeColor = System::Drawing::Color::Gold;
			this->radioButton3->Location = System::Drawing::Point(695, 445);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(127, 40);
			this->radioButton3->TabIndex = 21;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"Others";
			this->radioButton3->UseVisualStyleBackColor = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(1330, 1);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(24, 20);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 27;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Click += gcnew System::EventHandler(this, &Registerpage::pictureBox3_Click);
			// 
			// Registerpage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1370, 749);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->radioButton3);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->dtpDob);
			this->Controls->Add(this->btnRegister);
			this->Controls->Add(this->tbCPassword);
			this->Controls->Add(this->tbPassword);
			this->Controls->Add(this->tbName);
			this->Controls->Add(this->tbEmail);
			this->Controls->Add(this->tbUsername);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->pictureBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Registerpage";
			this->Text = L"Registerpage";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	public:bool switchtoregister = false;
	private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		switchtoregister = true;
	}



	   public: User^ user=nullptr;
private: System::Void btnRegister_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ name = tbName->Text;
	String^ email = tbEmail->Text;
	String^ username = tbUsername->Text;
	//String^ gender = cbGender->Text;
	String^ dob = dtpDob->Text;
	String^ password = tbPassword->Text;
	String^ confirmPassword = tbCPassword->Text;
	

	if (name->Length == 0 || email->Length == 0
		|| dob->Length == 0 || username->Length == 0
		|| password->Length == 0 /*|| gender->Length==0*/) {

		MessageBox::Show("Please enter all the fields",
			"On or more empty fields", MessageBoxButtons::OK);
		return;
	}
	if (String::Compare(password, confirmPassword) != 0) {
		MessageBox::Show("Password and Confirm Password do not match",
			"Password Error", MessageBoxButtons::OK);
		return;
	}
	try {
		String^ connString = "Data Source=tcp:uec.database.windows.net;Initial Catalog=uecdb;Persist Security Info=True;User ID=sqluec;Password=L12@sqd3";
		SqlConnection sqlConn(connString);
		sqlConn.Open();

		String^ sqlQuery = "INSERT INTO Users " +
			"(name, email, username, dob, password, gender) VALUES " +
			"(@name, @email, @username, @dob, @password,@gender);";
      
		SqlCommand command(sqlQuery, % sqlConn);
		command.Parameters->AddWithValue("@name", name);
		command.Parameters->AddWithValue("@email", email);
		command.Parameters->AddWithValue("@username", username);
		command.Parameters->AddWithValue("@dob", dob);
		command.Parameters->AddWithValue("@password", password);
		//command.Parameters->AddWithValue("@gender", gender);

		command.ExecuteNonQuery();
		user = gcnew User;
		user->name = name;
		user->email = email;
		user->username = username;
		user->dob = dob;
		user->password = password;
		//user->gender = gender;

		this->Close();
	}
	catch (Exception^ ex) {
		MessageBox::Show("Failed to register new user, Username or Email already taken",
			"Register Failure", MessageBoxButtons::OK);
	}

}

	   public: bool switchToLogin = false;
private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->switchToLogin = true;
	this->Close();
}

private: System::Void pictureBox3_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
};

