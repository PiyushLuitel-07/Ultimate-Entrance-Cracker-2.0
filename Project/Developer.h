#pragma once
#include "Questions.h"


namespace Project {
	
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for Developer
	/// </summary>
	public ref class Developer : public System::Windows::Forms::Form
	{
	public:
		Developer(void)
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
		~Developer()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel2;
	protected:
	private: System::Windows::Forms::Button^ btnEnter;
	private: System::Windows::Forms::TextBox^ tbOptn_d;
	private: System::Windows::Forms::TextBox^ tbOptn_c;
	private: System::Windows::Forms::TextBox^ tbOptn_b;
	private: System::Windows::Forms::TextBox^ tbOptn_a;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ tbQuestion;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::RadioButton^ rbD;

	private: System::Windows::Forms::RadioButton^ rbC;

	private: System::Windows::Forms::RadioButton^ rbB;

	private: System::Windows::Forms::RadioButton^ rbA;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Button^ btnLogout;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Developer::typeid));
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->btnLogout = (gcnew System::Windows::Forms::Button());
			this->btnEnter = (gcnew System::Windows::Forms::Button());
			this->tbOptn_d = (gcnew System::Windows::Forms::TextBox());
			this->tbOptn_c = (gcnew System::Windows::Forms::TextBox());
			this->tbOptn_b = (gcnew System::Windows::Forms::TextBox());
			this->tbOptn_a = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tbQuestion = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->rbD = (gcnew System::Windows::Forms::RadioButton());
			this->rbC = (gcnew System::Windows::Forms::RadioButton());
			this->rbB = (gcnew System::Windows::Forms::RadioButton());
			this->rbA = (gcnew System::Windows::Forms::RadioButton());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->SuspendLayout();
			// 
			// panel2
			// 
			this->panel2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->panel2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel2->Controls->Add(this->btnLogout);
			this->panel2->Controls->Add(this->btnEnter);
			this->panel2->Controls->Add(this->tbOptn_d);
			this->panel2->Controls->Add(this->tbOptn_c);
			this->panel2->Controls->Add(this->tbOptn_b);
			this->panel2->Controls->Add(this->tbOptn_a);
			this->panel2->Controls->Add(this->label6);
			this->panel2->Controls->Add(this->label5);
			this->panel2->Controls->Add(this->label4);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->tbQuestion);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->panel3);
			this->panel2->Location = System::Drawing::Point(104, 87);
			this->panel2->Margin = System::Windows::Forms::Padding(2);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1181, 614);
			this->panel2->TabIndex = 1;
			// 
			// btnLogout
			// 
			this->btnLogout->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->btnLogout->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnLogout->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnLogout->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnLogout->Font = (gcnew System::Drawing::Font(L"Calibri", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnLogout->ForeColor = System::Drawing::Color::Gold;
			this->btnLogout->Location = System::Drawing::Point(133, 511);
			this->btnLogout->Margin = System::Windows::Forms::Padding(2);
			this->btnLogout->Name = L"btnLogout";
			this->btnLogout->Size = System::Drawing::Size(122, 51);
			this->btnLogout->TabIndex = 13;
			this->btnLogout->Text = L"Logout";
			this->btnLogout->UseVisualStyleBackColor = false;
			this->btnLogout->Click += gcnew System::EventHandler(this, &Developer::btnLogout_Click);
			// 
			// btnEnter
			// 
			this->btnEnter->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->btnEnter->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnEnter->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnEnter->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnEnter->Font = (gcnew System::Drawing::Font(L"Calibri", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnEnter->ForeColor = System::Drawing::Color::Gold;
			this->btnEnter->Location = System::Drawing::Point(873, 507);
			this->btnEnter->Margin = System::Windows::Forms::Padding(2);
			this->btnEnter->Name = L"btnEnter";
			this->btnEnter->Size = System::Drawing::Size(105, 51);
			this->btnEnter->TabIndex = 12;
			this->btnEnter->Text = L"Enter";
			this->btnEnter->UseVisualStyleBackColor = false;
			this->btnEnter->Click += gcnew System::EventHandler(this, &Developer::btnEnter_Click);
			// 
			// tbOptn_d
			// 
			this->tbOptn_d->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->tbOptn_d->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->tbOptn_d->Font = (gcnew System::Drawing::Font(L"Calibri", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbOptn_d->ForeColor = System::Drawing::Color::SpringGreen;
			this->tbOptn_d->Location = System::Drawing::Point(207, 427);
			this->tbOptn_d->Margin = System::Windows::Forms::Padding(2);
			this->tbOptn_d->Multiline = true;
			this->tbOptn_d->Name = L"tbOptn_d";
			this->tbOptn_d->Size = System::Drawing::Size(934, 39);
			this->tbOptn_d->TabIndex = 11;
			// 
			// tbOptn_c
			// 
			this->tbOptn_c->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->tbOptn_c->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->tbOptn_c->Font = (gcnew System::Drawing::Font(L"Calibri", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbOptn_c->ForeColor = System::Drawing::Color::SpringGreen;
			this->tbOptn_c->Location = System::Drawing::Point(208, 377);
			this->tbOptn_c->Margin = System::Windows::Forms::Padding(2);
			this->tbOptn_c->Multiline = true;
			this->tbOptn_c->Name = L"tbOptn_c";
			this->tbOptn_c->Size = System::Drawing::Size(933, 43);
			this->tbOptn_c->TabIndex = 10;
			// 
			// tbOptn_b
			// 
			this->tbOptn_b->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->tbOptn_b->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->tbOptn_b->Font = (gcnew System::Drawing::Font(L"Calibri", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbOptn_b->ForeColor = System::Drawing::Color::SpringGreen;
			this->tbOptn_b->Location = System::Drawing::Point(208, 329);
			this->tbOptn_b->Margin = System::Windows::Forms::Padding(2);
			this->tbOptn_b->Multiline = true;
			this->tbOptn_b->Name = L"tbOptn_b";
			this->tbOptn_b->Size = System::Drawing::Size(933, 44);
			this->tbOptn_b->TabIndex = 9;
			// 
			// tbOptn_a
			// 
			this->tbOptn_a->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->tbOptn_a->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->tbOptn_a->Font = (gcnew System::Drawing::Font(L"Calibri", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbOptn_a->ForeColor = System::Drawing::Color::SpringGreen;
			this->tbOptn_a->Location = System::Drawing::Point(208, 283);
			this->tbOptn_a->Margin = System::Windows::Forms::Padding(2);
			this->tbOptn_a->Multiline = true;
			this->tbOptn_a->Name = L"tbOptn_a";
			this->tbOptn_a->Size = System::Drawing::Size(933, 41);
			this->tbOptn_a->TabIndex = 8;
			// 
			// label6
			// 
			this->label6->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label6->Font = (gcnew System::Drawing::Font(L"Calibri", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::Gold;
			this->label6->Location = System::Drawing::Point(71, 427);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(125, 36);
			this->label6->TabIndex = 7;
			this->label6->Text = L"Option d:";
			// 
			// label5
			// 
			this->label5->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label5->Font = (gcnew System::Drawing::Font(L"Calibri", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Gold;
			this->label5->Location = System::Drawing::Point(72, 377);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(122, 36);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Option c:";
			// 
			// label4
			// 
			this->label4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label4->Font = (gcnew System::Drawing::Font(L"Calibri", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Gold;
			this->label4->Location = System::Drawing::Point(72, 329);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(125, 36);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Option b:";
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label3->Font = (gcnew System::Drawing::Font(L"Calibri", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Gold;
			this->label3->Location = System::Drawing::Point(71, 283);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(124, 36);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Option a:";
			// 
			// tbQuestion
			// 
			this->tbQuestion->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->tbQuestion->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->tbQuestion->Font = (gcnew System::Drawing::Font(L"Calibri", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbQuestion->ForeColor = System::Drawing::Color::SpringGreen;
			this->tbQuestion->Location = System::Drawing::Point(77, 91);
			this->tbQuestion->Margin = System::Windows::Forms::Padding(2);
			this->tbQuestion->Multiline = true;
			this->tbQuestion->Name = L"tbQuestion";
			this->tbQuestion->Size = System::Drawing::Size(1064, 172);
			this->tbQuestion->TabIndex = 3;
			this->tbQuestion->TextChanged += gcnew System::EventHandler(this, &Developer::tbQuestion_TextChanged);
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label2->Font = (gcnew System::Drawing::Font(L"Calibri", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Gold;
			this->label2->Location = System::Drawing::Point(471, 53);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(199, 36);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Enter Question:";
			this->label2->Click += gcnew System::EventHandler(this, &Developer::label2_Click);
			// 
			// panel3
			// 
			this->panel3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->panel3->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel3->Controls->Add(this->rbD);
			this->panel3->Controls->Add(this->rbC);
			this->panel3->Controls->Add(this->rbB);
			this->panel3->Controls->Add(this->rbA);
			this->panel3->Controls->Add(this->label7);
			this->panel3->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->panel3->Location = System::Drawing::Point(344, 507);
			this->panel3->Margin = System::Windows::Forms::Padding(2);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(500, 72);
			this->panel3->TabIndex = 2;
			// 
			// rbD
			// 
			this->rbD->AutoSize = true;
			this->rbD->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->rbD->Font = (gcnew System::Drawing::Font(L"Calibri", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rbD->ForeColor = System::Drawing::Color::Gold;
			this->rbD->Location = System::Drawing::Point(391, 21);
			this->rbD->Name = L"rbD";
			this->rbD->Size = System::Drawing::Size(48, 40);
			this->rbD->TabIndex = 16;
			this->rbD->TabStop = true;
			this->rbD->Text = L"d";
			this->rbD->UseVisualStyleBackColor = false;
			this->rbD->CheckedChanged += gcnew System::EventHandler(this, &Developer::rbD_CheckedChanged);
			// 
			// rbC
			// 
			this->rbC->AutoSize = true;
			this->rbC->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->rbC->Font = (gcnew System::Drawing::Font(L"Calibri", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rbC->ForeColor = System::Drawing::Color::Gold;
			this->rbC->Location = System::Drawing::Point(339, 21);
			this->rbC->Name = L"rbC";
			this->rbC->Size = System::Drawing::Size(45, 40);
			this->rbC->TabIndex = 15;
			this->rbC->TabStop = true;
			this->rbC->Text = L"c";
			this->rbC->UseVisualStyleBackColor = false;
			this->rbC->CheckedChanged += gcnew System::EventHandler(this, &Developer::rbC_CheckedChanged);
			// 
			// rbB
			// 
			this->rbB->AutoSize = true;
			this->rbB->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->rbB->Font = (gcnew System::Drawing::Font(L"Calibri", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rbB->ForeColor = System::Drawing::Color::Gold;
			this->rbB->Location = System::Drawing::Point(286, 21);
			this->rbB->Name = L"rbB";
			this->rbB->Size = System::Drawing::Size(48, 40);
			this->rbB->TabIndex = 14;
			this->rbB->TabStop = true;
			this->rbB->Text = L"b";
			this->rbB->UseVisualStyleBackColor = false;
			this->rbB->CheckedChanged += gcnew System::EventHandler(this, &Developer::rbB_CheckedChanged);
			// 
			// rbA
			// 
			this->rbA->AutoSize = true;
			this->rbA->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->rbA->Font = (gcnew System::Drawing::Font(L"Calibri", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rbA->ForeColor = System::Drawing::Color::Gold;
			this->rbA->Location = System::Drawing::Point(233, 21);
			this->rbA->Name = L"rbA";
			this->rbA->Size = System::Drawing::Size(47, 40);
			this->rbA->TabIndex = 13;
			this->rbA->TabStop = true;
			this->rbA->Text = L"a";
			this->rbA->UseVisualStyleBackColor = false;
			this->rbA->CheckedChanged += gcnew System::EventHandler(this, &Developer::rbA_CheckedChanged);
			// 
			// label7
			// 
			this->label7->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label7->Font = (gcnew System::Drawing::Font(L"Calibri", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::Gold;
			this->label7->Location = System::Drawing::Point(2, 19);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(196, 36);
			this->label7->TabIndex = 12;
			this->label7->Text = L"Correct Option:";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1040, 640);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 14;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &Developer::pictureBox1_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->Location = System::Drawing::Point(0, 0);
			this->pictureBox3->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(75, 41);
			this->pictureBox3->TabIndex = 0;
			this->pictureBox3->TabStop = false;
			// 
			// Developer
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->ClientSize = System::Drawing::Size(1040, 640);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->pictureBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"Developer";
			this->Text = L"Developer";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void cbCorrectOptn_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
public: Question^ question_obj;
private: System::Void btnEnter_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ question = tbQuestion->Text;
	String^ option_a = tbOptn_a->Text;
	String^ option_b = tbOptn_b->Text;
	String^ option_c = tbOptn_c->Text;
	String^ option_d = tbOptn_d->Text;
	String^ answer = answeris;
	
	/*{if (rbA)
	{
		answer = "a";
	}
	else if (rbB)
	{
		answer = "b";
	}
	else if (rbC)
		answer = "c";
	}
	else if (rbD)
	{
		answer = "d";
	}*/
	if (question->Length == 0 || option_a->Length == 0 || option_b->Length == 0 || option_c->Length == 0 || option_d->Length == 0)
	{
		MessageBox::Show("Please enter all the fields!!", "One or more empty fields", MessageBoxButtons::OK);
		return;
	}
	try
	{
		String^ connString = "Data Source=tcp:uec.database.windows.net;Initial Catalog=uecdb;Persist Security Info=True;User ID=sqluec;Password=***********";
		SqlConnection sqlConn(connString);
		sqlConn.Open();
		//String^ database = lbDatabase->Text;



		/*if (String::Compare(database, "Maths") != 0) {*/
			String^ sqlQuery = "INSERT INTO questions" +
				"(Questions, Option_a, Option_b, Option_c, Option_d, Answer) VALUES" +
				"(@Questions, @Option_a, @Option_b, @Option_c, @Option_d, @Answer);";

			SqlCommand command(sqlQuery, % sqlConn);
			command.Parameters->AddWithValue("@Questions", question);
			command.Parameters->AddWithValue("@Option_a", option_a);
			command.Parameters->AddWithValue("@Option_b", option_b);
			command.Parameters->AddWithValue("@Option_c", option_c);
			command.Parameters->AddWithValue("@Option_d", option_d);
			command.Parameters->AddWithValue("@Correct", answer);

			command.ExecuteNonQuery();

			question_obj = gcnew Question;
			question_obj->question = question;
			question_obj->Option_a = option_a;
			question_obj->Option_b = option_b;
			question_obj->Option_c = option_c;
			question_obj->Option_d = option_d;
			question_obj->Correct_optn = answer;
			this->Close();
		}
	/*}*/
	catch (Exception^ ex)
	{
		MessageBox::Show("Failed to enter data", "Try again", MessageBoxButtons::OK);
	}
}

private: System::Void pictureBox3_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void tbQuestion_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
public: bool switchTologout = false;
private: System::Void btnLogout_Click(System::Object^ sender, System::EventArgs^ e) {
	this->switchTologout = true;
	this->Close();
}
	   public: String^ answeris = nullptr;
private: System::Void rbA_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	answeris = "a";
}
private: System::Void rbB_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	answeris = "b";
}
private: System::Void rbC_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	answeris = "c";
}
private: System::Void rbD_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	answeris = "d";
}
};
}
