#pragma once
#include "Loginform.h"
#include "User.h"
#include "Admin.h"
#include "Developer.h"
namespace Project {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for Adminloginpage
	/// </summary>
	public ref class Adminloginpage : public System::Windows::Forms::Form
	{
	public:
		Adminloginpage(void)
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
		~Adminloginpage()
		{
			if (components)
			{
				delete components;
			}
		}



	private: System::Windows::Forms::TextBox^ tbUsername;
	private: System::Windows::Forms::TextBox^ tbPassword;




	private: System::Windows::Forms::Button^ button1;


	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox3;



	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::Label^ label2;
			System::Windows::Forms::Label^ label1;
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Adminloginpage::typeid));
			this->tbUsername = (gcnew System::Windows::Forms::TextBox());
			this->tbPassword = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			label2 = (gcnew System::Windows::Forms::Label());
			label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->SuspendLayout();
			// 
			// label2
			// 
			label2->Anchor = System::Windows::Forms::AnchorStyles::None;
			label2->AutoSize = true;
			label2->BackColor = System::Drawing::SystemColors::ControlText;
			label2->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 48, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			label2->ForeColor = System::Drawing::Color::Gold;
			label2->Location = System::Drawing::Point(173, 304);
			label2->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			label2->Name = L"label2";
			label2->Size = System::Drawing::Size(314, 71);
			label2->TabIndex = 4;
			label2->Text = L"Username";
			label2->Click += gcnew System::EventHandler(this, &Adminloginpage::label2_Click);
			// 
			// label1
			// 
			label1->Anchor = System::Windows::Forms::AnchorStyles::None;
			label1->AutoSize = true;
			label1->BackColor = System::Drawing::SystemColors::ControlText;
			label1->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 48, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			label1->ForeColor = System::Drawing::Color::Gold;
			label1->Location = System::Drawing::Point(185, 389);
			label1->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			label1->Name = L"label1";
			label1->Size = System::Drawing::Size(302, 71);
			label1->TabIndex = 4;
			label1->Text = L"Password";
			label1->Click += gcnew System::EventHandler(this, &Adminloginpage::label2_Click);
			// 
			// tbUsername
			// 
			this->tbUsername->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->tbUsername->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->tbUsername->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbUsername->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbUsername->ForeColor = System::Drawing::Color::SpringGreen;
			this->tbUsername->Location = System::Drawing::Point(493, 307);
			this->tbUsername->Margin = System::Windows::Forms::Padding(6);
			this->tbUsername->Multiline = true;
			this->tbUsername->Name = L"tbUsername";
			this->tbUsername->Size = System::Drawing::Size(668, 71);
			this->tbUsername->TabIndex = 6;
			// 
			// tbPassword
			// 
			this->tbPassword->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->tbPassword->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->tbPassword->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbPassword->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbPassword->ForeColor = System::Drawing::Color::SpringGreen;
			this->tbPassword->Location = System::Drawing::Point(493, 389);
			this->tbPassword->Margin = System::Windows::Forms::Padding(6);
			this->tbPassword->Multiline = true;
			this->tbPassword->Name = L"tbPassword";
			this->tbPassword->PasswordChar = '*';
			this->tbPassword->Size = System::Drawing::Size(668, 71);
			this->tbPassword->TabIndex = 6;
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button1->BackColor = System::Drawing::Color::Black;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Gold;
			this->button1->Location = System::Drawing::Point(653, 534);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(255, 88);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Login";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Adminloginpage::button1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(12, 21);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(29, 33);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 12;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &Adminloginpage::pictureBox1_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(-12, 1);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(1370, 749);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 13;
			this->pictureBox2->TabStop = false;
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Bernard MT Condensed", 80.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::Color::Gold;
			this->textBox1->Location = System::Drawing::Point(2, -16);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(1370, 145);
			this->textBox1->TabIndex = 25;
			this->textBox1->Text = L"ADMIN LOGIN";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(1330, 1);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(24, 20);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 26;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Click += gcnew System::EventHandler(this, &Adminloginpage::pictureBox3_Click);
			// 
			// Adminloginpage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->ClientSize = System::Drawing::Size(1370, 749);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->tbPassword);
			this->Controls->Add(this->tbUsername);
			this->Controls->Add(label1);
			this->Controls->Add(label2);
			this->Controls->Add(this->pictureBox2);
			this->DoubleBuffered = true;
			this->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Adminloginpage";
			this->Text = L"Adminloginpage";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void backlink_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {

	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	public: Admin^ admin = nullptr;
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		String^ username = this->tbUsername->Text;
		String^ password = this->tbPassword->Text;

		if (username->Length == 0 || password->Length == 0) {
			MessageBox::Show("Please enter username and password",
				"Username or Password Empty", MessageBoxButtons::OK);
			return;
		}
		try 
		{
			String^ connString = "Data Source=tcp:uec.database.windows.net;Initial Catalog=uecdb;Persist Security Info=True;User ID=sqluec;Password=L12@sqd3";
			SqlConnection sqlConn(connString);
			sqlConn.Open();

			String^ sqlQuery = "SELECT * FROM Admin WHERE username=@username AND password=@pwd;";
			SqlCommand command(sqlQuery, % sqlConn);
			command.Parameters->AddWithValue("@username", username);
			command.Parameters->AddWithValue("@pwd", password);

			SqlDataReader^ reader = command.ExecuteReader();
			if (reader->Read())
			{
				admin = gcnew Admin;
				admin->id = reader->GetInt32(0);
				admin->username = reader->GetString(1);
				admin->password = reader->GetString(2);
				Developer developerPage;
				this->Close();
				developerPage.ShowDialog();

			}
			else 
			{
				MessageBox::Show("Username or password is incorrect",
					"Username or Password Error", MessageBoxButtons::OK);
			}
		}
		catch (Exception^ e) {
			MessageBox::Show("Failed to connect to database",
				"Database Connection Error", MessageBoxButtons::OK);
		}
	}
public: bool switchToLogin = false;
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->switchToLogin = true;
	this->Close();
}
private: System::Void pictureBox3_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}

