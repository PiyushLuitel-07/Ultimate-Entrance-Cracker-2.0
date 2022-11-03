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
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::ListBox^ lbDatabase;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ tbOptn_d;
	private: System::Windows::Forms::TextBox^ tbOptn_c;
	private: System::Windows::Forms::TextBox^ tbOptn_b;
	private: System::Windows::Forms::TextBox^ tbOptn_a;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ tbQuestion;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::CheckedListBox^ cbCorrectOptn;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ btnEnter;
	private: System::Windows::Forms::Button^ btnLogout;

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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->lbDatabase = (gcnew System::Windows::Forms::ListBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
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
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->cbCorrectOptn = (gcnew System::Windows::Forms::CheckedListBox());
			this->btnLogout = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->lbDatabase);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(12, 87);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(332, 51);
			this->panel1->TabIndex = 0;
			// 
			// lbDatabase
			// 
			this->lbDatabase->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbDatabase->FormattingEnabled = true;
			this->lbDatabase->ItemHeight = 25;
			this->lbDatabase->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Maths", L"Physics", L"Chemistry", L"English" });
			this->lbDatabase->Location = System::Drawing::Point(163, 10);
			this->lbDatabase->Name = L"lbDatabase";
			this->lbDatabase->Size = System::Drawing::Size(166, 29);
			this->lbDatabase->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(3, 10);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(162, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Select Database:";
			this->label1->Click += gcnew System::EventHandler(this, &Developer::label1_Click);
			// 
			// panel2
			// 
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
			this->panel2->Location = System::Drawing::Point(12, 166);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1110, 407);
			this->panel2->TabIndex = 1;
			// 
			// btnEnter
			// 
			this->btnEnter->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnEnter->Location = System::Drawing::Point(371, 361);
			this->btnEnter->Name = L"btnEnter";
			this->btnEnter->Size = System::Drawing::Size(158, 31);
			this->btnEnter->TabIndex = 12;
			this->btnEnter->Text = L"Enter";
			this->btnEnter->UseVisualStyleBackColor = true;
			this->btnEnter->Click += gcnew System::EventHandler(this, &Developer::btnEnter_Click);
			// 
			// tbOptn_d
			// 
			this->tbOptn_d->Location = System::Drawing::Point(115, 260);
			this->tbOptn_d->Multiline = true;
			this->tbOptn_d->Name = L"tbOptn_d";
			this->tbOptn_d->Size = System::Drawing::Size(884, 37);
			this->tbOptn_d->TabIndex = 11;
			// 
			// tbOptn_c
			// 
			this->tbOptn_c->Location = System::Drawing::Point(116, 209);
			this->tbOptn_c->Multiline = true;
			this->tbOptn_c->Name = L"tbOptn_c";
			this->tbOptn_c->Size = System::Drawing::Size(883, 42);
			this->tbOptn_c->TabIndex = 10;
			// 
			// tbOptn_b
			// 
			this->tbOptn_b->Location = System::Drawing::Point(116, 155);
			this->tbOptn_b->Multiline = true;
			this->tbOptn_b->Name = L"tbOptn_b";
			this->tbOptn_b->Size = System::Drawing::Size(883, 44);
			this->tbOptn_b->TabIndex = 9;
			// 
			// tbOptn_a
			// 
			this->tbOptn_a->Location = System::Drawing::Point(116, 109);
			this->tbOptn_a->Multiline = true;
			this->tbOptn_a->Name = L"tbOptn_a";
			this->tbOptn_a->Size = System::Drawing::Size(883, 40);
			this->tbOptn_a->TabIndex = 8;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(17, 257);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(92, 25);
			this->label6->TabIndex = 7;
			this->label6->Text = L"Option d:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(17, 205);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(91, 25);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Option c:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(18, 151);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(92, 25);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Option b:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(18, 108);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(92, 25);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Option a:";
			// 
			// tbQuestion
			// 
			this->tbQuestion->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbQuestion->Location = System::Drawing::Point(172, 19);
			this->tbQuestion->Multiline = true;
			this->tbQuestion->Name = L"tbQuestion";
			this->tbQuestion->Size = System::Drawing::Size(827, 79);
			this->tbQuestion->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(18, 19);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(148, 25);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Enter Question:";
			this->label2->Click += gcnew System::EventHandler(this, &Developer::label2_Click);
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->label7);
			this->panel3->Controls->Add(this->cbCorrectOptn);
			this->panel3->Location = System::Drawing::Point(23, 320);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(276, 73);
			this->panel3->TabIndex = 2;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(22, 35);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(145, 25);
			this->label7->TabIndex = 12;
			this->label7->Text = L"Correct Option:";
			this->label7->Click += gcnew System::EventHandler(this, &Developer::label7_Click);
			// 
			// cbCorrectOptn
			// 
			this->cbCorrectOptn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cbCorrectOptn->FormattingEnabled = true;
			this->cbCorrectOptn->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"a", L"b", L"c", L"d" });
			this->cbCorrectOptn->Location = System::Drawing::Point(173, 0);
			this->cbCorrectOptn->Name = L"cbCorrectOptn";
			this->cbCorrectOptn->Size = System::Drawing::Size(63, 79);
			this->cbCorrectOptn->TabIndex = 12;
			this->cbCorrectOptn->SelectedIndexChanged += gcnew System::EventHandler(this, &Developer::cbCorrectOptn_SelectedIndexChanged);
			// 
			// btnLogout
			// 
			this->btnLogout->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnLogout->Location = System::Drawing::Point(983, 67);
			this->btnLogout->Name = L"btnLogout";
			this->btnLogout->Size = System::Drawing::Size(123, 35);
			this->btnLogout->TabIndex = 13;
			this->btnLogout->Text = L"Logout";
			this->btnLogout->UseVisualStyleBackColor = true;
			// 
			// Developer
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1134, 585);
			this->Controls->Add(this->btnLogout);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Name = L"Developer";
			this->Text = L"Developer";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
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
	String^ correct = cbCorrectOptn->Text;
	if (question->Length == 0 || option_a->Length == 0 || option_b->Length == 0 || option_c->Length == 0 || option_d->Length == 0)
	{
		MessageBox::Show("Please enter all the fields!!", "One or more empty fields", MessageBoxButtons::OK);
		return;
	}
	try
	{
		String^ connString = "Data Source=LAPTOP-STT82H7B;Initial Catalog=myDB;Integrated Security=True";
		SqlConnection sqlConn(connString);
		sqlConn.Open();
		String^ database = lbDatabase->Text;



		/*if (String::Compare(database, "Maths") != 0) {*/
			String^ sqlQuery = "INSERT INTO Maths" +
				"(question, option_a, option_b, option_c, option_d, correct) VALUES" +
				"(@Questions, @Option_a, @Option_b, @Option_c, @Option_d, @Correct);";

			SqlCommand command(sqlQuery, % sqlConn);
			command.Parameters->AddWithValue("@Questions", question);
			command.Parameters->AddWithValue("@Option_a", option_a);
			command.Parameters->AddWithValue("@Option_b", option_b);
			command.Parameters->AddWithValue("@Option_c", option_c);
			command.Parameters->AddWithValue("@Option_d", option_d);
			command.Parameters->AddWithValue("@Correct", correct);

			command.ExecuteNonQuery();

			question_obj = gcnew Question;
			question_obj->Questions = question;
			question_obj->Option_a = option_a;
			question_obj->Option_b = option_b;
			question_obj->Option_c = option_c;
			question_obj->Option_d = option_d;
			question_obj->Correct_optn = correct;

			this->Close();
		}
	/*}*/
	catch (Exception^ ex)
	{
		MessageBox::Show("Failed to enter data", "Try again", MessageBoxButtons::OK);
	}
}
private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
