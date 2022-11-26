#pragma once
#include "Homepage.h"
#include "Registerpage.h"
#include "Adminloginpage.h"
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
	/// Summary for Loginform
	/// </summary>
	public ref class Loginform : public System::Windows::Forms::Form
	{
	public:
		Loginform(void)
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
		~Loginform()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:















	private:

	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Button^ btnCancel;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::LinkLabel^ linkLabel2;
	private: System::Windows::Forms::LinkLabel^ linkLabel1;
	private: System::Windows::Forms::Button^ btnLogin;
	private: System::Windows::Forms::TextBox^ tbPassword;
	private: System::Windows::Forms::TextBox^ tbUsername;

	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::PictureBox^ pictureBox1;

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::PictureBox^ pictureBox3;





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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Loginform::typeid));
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->linkLabel2 = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->btnLogin = (gcnew System::Windows::Forms::Button());
			this->tbPassword = (gcnew System::Windows::Forms::TextBox());
			this->tbUsername = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox2
			// 
			this->pictureBox2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(-7, -17);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(1379, 795);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 18;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &Loginform::pictureBox2_Click);
			// 
			// btnCancel
			// 
			this->btnCancel->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->btnCancel->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnCancel->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnCancel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnCancel->Font = (gcnew System::Drawing::Font(L"Calibri", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCancel->ForeColor = System::Drawing::Color::Gold;
			this->btnCancel->Location = System::Drawing::Point(736, 480);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(135, 57);
			this->btnCancel->TabIndex = 17;
			this->btnCancel->Text = L"Cancel";
			this->btnCancel->UseVisualStyleBackColor = false;
			this->btnCancel->Click += gcnew System::EventHandler(this, &Loginform::btnCancel_Click);
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::MenuText;
			this->label1->CausesValidation = false;
			this->label1->Cursor = System::Windows::Forms::Cursors::Default;
			this->label1->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 57.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Gold;
			this->label1->Location = System::Drawing::Point(274, 56);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(939, 85);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Ultimate Entrance Cracker";
			// 
			// linkLabel2
			// 
			this->linkLabel2->ActiveLinkColor = System::Drawing::Color::White;
			this->linkLabel2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->linkLabel2->AutoSize = true;
			this->linkLabel2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->linkLabel2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->linkLabel2->Font = (gcnew System::Drawing::Font(L"Calibri", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->linkLabel2->ForeColor = System::Drawing::Color::Red;
			this->linkLabel2->LinkColor = System::Drawing::Color::MediumSpringGreen;
			this->linkLabel2->Location = System::Drawing::Point(11, 49);
			this->linkLabel2->Name = L"linkLabel2";
			this->linkLabel2->Size = System::Drawing::Size(179, 39);
			this->linkLabel2->TabIndex = 7;
			this->linkLabel2->TabStop = true;
			this->linkLabel2->Text = L"Admin Login";
			this->linkLabel2->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Loginform::linkLabel2_LinkClicked);
			// 
			// linkLabel1
			// 
			this->linkLabel1->ActiveLinkColor = System::Drawing::Color::WhiteSmoke;
			this->linkLabel1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->linkLabel1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->linkLabel1->Font = (gcnew System::Drawing::Font(L"Calibri", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->linkLabel1->ForeColor = System::Drawing::Color::Red;
			this->linkLabel1->LinkColor = System::Drawing::Color::MediumSpringGreen;
			this->linkLabel1->Location = System::Drawing::Point(29, 10);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(122, 39);
			this->linkLabel1->TabIndex = 6;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"Register";
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Loginform::linkLabel1_LinkClicked);
			// 
			// btnLogin
			// 
			this->btnLogin->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->btnLogin->BackColor = System::Drawing::Color::Black;
			this->btnLogin->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnLogin->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnLogin->Font = (gcnew System::Drawing::Font(L"Calibri", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnLogin->ForeColor = System::Drawing::Color::Gold;
			this->btnLogin->Location = System::Drawing::Point(584, 480);
			this->btnLogin->Name = L"btnLogin";
			this->btnLogin->Size = System::Drawing::Size(135, 57);
			this->btnLogin->TabIndex = 5;
			this->btnLogin->Text = L"Login";
			this->btnLogin->UseVisualStyleBackColor = false;
			this->btnLogin->Click += gcnew System::EventHandler(this, &Loginform::button1_Click);
			// 
			// tbPassword
			// 
			this->tbPassword->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->tbPassword->BackColor = System::Drawing::SystemColors::InfoText;
			this->tbPassword->Font = (gcnew System::Drawing::Font(L"Calibri", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbPassword->ForeColor = System::Drawing::Color::SpringGreen;
			this->tbPassword->Location = System::Drawing::Point(427, 418);
			this->tbPassword->Margin = System::Windows::Forms::Padding(6);
			this->tbPassword->Multiline = true;
			this->tbPassword->Name = L"tbPassword";
			this->tbPassword->PasswordChar = '*';
			this->tbPassword->Size = System::Drawing::Size(657, 53);
			this->tbPassword->TabIndex = 4;
			this->tbPassword->TextChanged += gcnew System::EventHandler(this, &Loginform::tbPassword_TextChanged);
			// 
			// tbUsername
			// 
			this->tbUsername->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->tbUsername->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->tbUsername->Font = (gcnew System::Drawing::Font(L"Calibri", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbUsername->ForeColor = System::Drawing::Color::SpringGreen;
			this->tbUsername->Location = System::Drawing::Point(427, 354);
			this->tbUsername->Margin = System::Windows::Forms::Padding(6);
			this->tbUsername->MaxLength = 25;
			this->tbUsername->Multiline = true;
			this->tbUsername->Name = L"tbUsername";
			this->tbUsername->Size = System::Drawing::Size(657, 55);
			this->tbUsername->TabIndex = 4;
			this->tbUsername->TextChanged += gcnew System::EventHandler(this, &Loginform::tbUsername_TextChanged);
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label2->Font = (gcnew System::Drawing::Font(L"Calibri", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Gold;
			this->label2->Location = System::Drawing::Point(5, 52);
			this->label2->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(163, 42);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Username";
			this->label2->Click += gcnew System::EventHandler(this, &Loginform::label2_Click);
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label3->Font = (gcnew System::Drawing::Font(L"Calibri", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Gold;
			this->label3->Location = System::Drawing::Point(15, 114);
			this->label3->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(153, 42);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Password";
			this->label3->Click += gcnew System::EventHandler(this, &Loginform::label3_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 9);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(279, 188);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 19;
			this->pictureBox1->TabStop = false;
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->linkLabel2);
			this->panel1->Controls->Add(this->linkLabel1);
			this->panel1->Location = System::Drawing::Point(1146, 648);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(193, 94);
			this->panel1->TabIndex = 21;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->pictureBox3);
			this->panel2->Controls->Add(this->pictureBox1);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Location = System::Drawing::Point(-7, -17);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1379, 200);
			this->panel2->TabIndex = 22;
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->label2);
			this->panel3->Controls->Add(this->label3);
			this->panel3->Location = System::Drawing::Point(259, 315);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(846, 250);
			this->panel3->TabIndex = 23;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(1333, 29);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(20, 20);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 20;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Click += gcnew System::EventHandler(this, &Loginform::pictureBox3_Click);
			// 
			// Loginform
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::WindowText;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1366, 745);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->btnLogin);
			this->Controls->Add(this->tbPassword);
			this->Controls->Add(this->tbUsername);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->pictureBox2);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(6);
			this->Name = L"Loginform";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void btnCancel_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
	Application::Exit();

}

public: User^ user= nullptr;
public:bool switchtohomepage = false;
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	
	String^ username = this->tbUsername->Text;
	String^ password = this->tbPassword->Text;


	if (username->Length == 0 || password->Length == 0) {
		MessageBox::Show("Please enter username and password",
			"Username or Password Empty", MessageBoxButtons::OK);
		return;
	}
	try {
		String^ connString = "Data Source=tcp:uec.database.windows.net;Initial Catalog=uecdb;Persist Security Info=True;User ID=sqluec;Password=L12@sqd3";
		//Data Source=tcp:uec.database.windows.net;Initial Catalog=uecdb;Persist Security Info=True;User ID=sqluec;Password=***********
		SqlConnection sqlConn(connString);
		sqlConn.Open();

		String^ sqlQuery = "SELECT * FROM Users WHERE username=@username AND password=@password;";
		SqlCommand command(sqlQuery, % sqlConn);
		command.Parameters->AddWithValue("@username", username);
		command.Parameters->AddWithValue("@password", password);

		SqlDataReader^ reader = command.ExecuteReader();
		if (reader->Read()) {
			user = gcnew User;
			user->name = reader->GetString(1);
			user->email = reader->GetString(2);
			user->username = reader->GetString(3);
			user->dob = reader->GetString(4);
			user->gender = reader->GetString(5);
			user->password = reader->GetString(6);

			this->Close();
			this->switchtohomepage = true;
		}
		else {
			MessageBox::Show("Username or password is incorrect",
				"Username or Password Error", MessageBoxButtons::OK);
		}
	}
	catch (Exception^ e) {
		MessageBox::Show("Failed to connect to database",
			"Database Connection Error", MessageBoxButtons::OK);
	}
//aarogya	
}
public: bool switchToRegister = false;
private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	this->switchToRegister=true;
	this->Close();

	
}
public: bool switchToAdminLogin = false;
private: System::Void linkLabel2_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	this->switchToAdminLogin = true;
	this->Close();
}





private: System::Void pictureBox3_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void tbUsername_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void tbPassword_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
