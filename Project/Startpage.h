#pragma once

namespace Project {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
    using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for Startpage
	/// </summary>
    /// 
	public ref class Startpage : public System::Windows::Forms::Form
	{
	public:
		Startpage(void)
		{
			InitializeComponent();
            static int score;
			//
			//TODO: Add the constructor code here
			//
            try {
                String^ connString = "Data Source=tcp:uec.database.windows.net;Initial Catalog=uecdb;Persist Security Info=True;User ID=sqluec;Password=L12@sqd3";
                //Data Source=tcp:uec.database.windows.net;Initial Catalog=uecdb;Persist Security Info=True;User ID=sqluec;Password=***********
                SqlConnection sqlConn(connString);
                sqlConn.Open();

                String^ sqlQuery = "SELECT * FROM english1;";
                SqlCommand command(sqlQuery, % sqlConn);

                SqlDataReader^ reader = command.ExecuteReader();
                if (reader->Read()) {
                    question_list = gcnew Question;
                    question_list->question = reader->GetString(1);
                    question_list->Option_a = reader->GetString(2);
                    question_list->Option_b = reader->GetString(3);
                    question_list->Option_c = reader->GetString(4);
                    question_list->Option_d = reader->GetString(5);
                    question_list->Correct_optn = reader->GetString(6);
                }
                rtbQuesitionDisplay->Text = question_list->question;
                tbOptnA->Text = question_list->Option_a;
                tbOptnB->Text = question_list->Option_b;
                tbOptnC->Text = question_list->Option_c;
                tbOptnD->Text = question_list->Option_d;

                //question_list->Correct_optn;
            }
            catch (Exception^ e) {
                MessageBox::Show("Failed to connect to database",
                    "Database Connection Error", MessageBoxButtons::OK);
            }
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Startpage()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;

    private: System::Windows::Forms::Button^ button2;
    private: System::Windows::Forms::Button^ button1;
    private: System::Windows::Forms::RadioButton^ rdbC;



    private: System::Windows::Forms::RadioButton^ rdbB;

    private: System::Windows::Forms::RadioButton^ rdbA;
    private: System::Windows::Forms::RadioButton^ rdbD;


    private: System::Windows::Forms::TextBox^ tbOptnB;




    private: System::Windows::Forms::Panel^ panel1;
private: System::Windows::Forms::RichTextBox^ rtbQuesitionDisplay;

    private: System::Windows::Forms::Timer^ timer1;



private: System::Windows::Forms::TextBox^ textBox41;
private: System::Windows::Forms::TextBox^ tbOptnD;





private: System::Windows::Forms::TextBox^ tbOptnC;

private: System::Windows::Forms::TextBox^ tbOptnA;

private: System::Windows::Forms::Panel^ panel2;
private: System::Windows::Forms::TextBox^ textBox5;
private: System::Windows::Forms::TextBox^ textBox6;
private: System::Windows::Forms::TextBox^ textBox7;
private: System::Windows::Forms::TextBox^ textBox8;
private: System::Windows::Forms::RadioButton^ radioButton5;
private: System::Windows::Forms::RadioButton^ radioButton6;
private: System::Windows::Forms::RadioButton^ radioButton7;
private: System::Windows::Forms::RadioButton^ radioButton8;
private: System::Windows::Forms::RichTextBox^ richTextBox1;
private: System::Windows::Forms::Panel^ panel3;
private: System::Windows::Forms::TextBox^ textBox9;
private: System::Windows::Forms::TextBox^ textBox10;
private: System::Windows::Forms::TextBox^ textBox11;
private: System::Windows::Forms::TextBox^ textBox12;
private: System::Windows::Forms::RadioButton^ radioButton9;
private: System::Windows::Forms::RadioButton^ radioButton10;
private: System::Windows::Forms::RadioButton^ radioButton11;
private: System::Windows::Forms::RadioButton^ radioButton12;
private: System::Windows::Forms::RichTextBox^ richTextBox3;
private: System::Windows::Forms::Panel^ panel4;
private: System::Windows::Forms::TextBox^ textBox13;
private: System::Windows::Forms::TextBox^ textBox14;
private: System::Windows::Forms::TextBox^ textBox15;
private: System::Windows::Forms::TextBox^ textBox16;
private: System::Windows::Forms::RadioButton^ radioButton13;
private: System::Windows::Forms::RadioButton^ radioButton14;
private: System::Windows::Forms::RadioButton^ radioButton15;
private: System::Windows::Forms::RadioButton^ radioButton16;
private: System::Windows::Forms::RichTextBox^ richTextBox4;
private: System::Windows::Forms::Panel^ panel5;
private: System::Windows::Forms::TextBox^ textBox17;
private: System::Windows::Forms::TextBox^ textBox18;
private: System::Windows::Forms::TextBox^ textBox19;
private: System::Windows::Forms::TextBox^ textBox20;
private: System::Windows::Forms::RadioButton^ radioButton17;
private: System::Windows::Forms::RadioButton^ radioButton18;
private: System::Windows::Forms::RadioButton^ radioButton19;
private: System::Windows::Forms::RadioButton^ radioButton20;
private: System::Windows::Forms::RichTextBox^ richTextBox5;
private: System::Windows::Forms::Panel^ panel6;
private: System::Windows::Forms::TextBox^ textBox21;
private: System::Windows::Forms::TextBox^ textBox22;
private: System::Windows::Forms::TextBox^ textBox23;
private: System::Windows::Forms::TextBox^ textBox24;
private: System::Windows::Forms::RadioButton^ radioButton21;
private: System::Windows::Forms::RadioButton^ radioButton22;
private: System::Windows::Forms::RadioButton^ radioButton23;
private: System::Windows::Forms::RadioButton^ radioButton24;
private: System::Windows::Forms::RichTextBox^ richTextBox6;
private: System::Windows::Forms::Panel^ panel7;
private: System::Windows::Forms::TextBox^ textBox25;
private: System::Windows::Forms::TextBox^ textBox26;
private: System::Windows::Forms::TextBox^ textBox27;
private: System::Windows::Forms::TextBox^ textBox28;
private: System::Windows::Forms::RadioButton^ radioButton25;
private: System::Windows::Forms::RadioButton^ radioButton26;
private: System::Windows::Forms::RadioButton^ radioButton27;
private: System::Windows::Forms::RadioButton^ radioButton28;
private: System::Windows::Forms::RichTextBox^ richTextBox7;
private: System::Windows::Forms::Panel^ panel8;
private: System::Windows::Forms::TextBox^ textBox29;
private: System::Windows::Forms::TextBox^ textBox30;
private: System::Windows::Forms::TextBox^ textBox31;
private: System::Windows::Forms::TextBox^ textBox32;
private: System::Windows::Forms::RadioButton^ radioButton29;
private: System::Windows::Forms::RadioButton^ radioButton30;
private: System::Windows::Forms::RadioButton^ radioButton31;
private: System::Windows::Forms::RadioButton^ radioButton32;
private: System::Windows::Forms::RichTextBox^ richTextBox8;
private: System::Windows::Forms::Panel^ panel9;
private: System::Windows::Forms::TextBox^ textBox33;
private: System::Windows::Forms::TextBox^ textBox34;
private: System::Windows::Forms::TextBox^ textBox35;
private: System::Windows::Forms::TextBox^ textBox36;
private: System::Windows::Forms::RadioButton^ radioButton33;
private: System::Windows::Forms::RadioButton^ radioButton34;
private: System::Windows::Forms::RadioButton^ radioButton35;
private: System::Windows::Forms::RadioButton^ radioButton36;
private: System::Windows::Forms::RichTextBox^ richTextBox9;
private: System::Windows::Forms::Panel^ panel10;
private: System::Windows::Forms::TextBox^ textBox37;
private: System::Windows::Forms::TextBox^ textBox38;
private: System::Windows::Forms::TextBox^ textBox39;
private: System::Windows::Forms::TextBox^ textBox40;
private: System::Windows::Forms::RadioButton^ radioButton37;
private: System::Windows::Forms::RadioButton^ radioButton38;
private: System::Windows::Forms::RadioButton^ radioButton39;
private: System::Windows::Forms::RadioButton^ radioButton40;
private: System::Windows::Forms::RichTextBox^ richTextBox10;
private: System::Windows::Forms::PictureBox^ pictureBox3;




































































































































































































































































































	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
            this->components = (gcnew System::ComponentModel::Container());
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Startpage::typeid));
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->button2 = (gcnew System::Windows::Forms::Button());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->rdbC = (gcnew System::Windows::Forms::RadioButton());
            this->rdbB = (gcnew System::Windows::Forms::RadioButton());
            this->rdbA = (gcnew System::Windows::Forms::RadioButton());
            this->rdbD = (gcnew System::Windows::Forms::RadioButton());
            this->tbOptnB = (gcnew System::Windows::Forms::TextBox());
            this->panel1 = (gcnew System::Windows::Forms::Panel());
            this->tbOptnD = (gcnew System::Windows::Forms::TextBox());
            this->tbOptnC = (gcnew System::Windows::Forms::TextBox());
            this->tbOptnA = (gcnew System::Windows::Forms::TextBox());
            this->rtbQuesitionDisplay = (gcnew System::Windows::Forms::RichTextBox());
            this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
            this->textBox41 = (gcnew System::Windows::Forms::TextBox());
            this->panel2 = (gcnew System::Windows::Forms::Panel());
            this->textBox5 = (gcnew System::Windows::Forms::TextBox());
            this->textBox6 = (gcnew System::Windows::Forms::TextBox());
            this->textBox7 = (gcnew System::Windows::Forms::TextBox());
            this->textBox8 = (gcnew System::Windows::Forms::TextBox());
            this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
            this->radioButton6 = (gcnew System::Windows::Forms::RadioButton());
            this->radioButton7 = (gcnew System::Windows::Forms::RadioButton());
            this->radioButton8 = (gcnew System::Windows::Forms::RadioButton());
            this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
            this->panel3 = (gcnew System::Windows::Forms::Panel());
            this->textBox9 = (gcnew System::Windows::Forms::TextBox());
            this->textBox10 = (gcnew System::Windows::Forms::TextBox());
            this->textBox11 = (gcnew System::Windows::Forms::TextBox());
            this->textBox12 = (gcnew System::Windows::Forms::TextBox());
            this->radioButton9 = (gcnew System::Windows::Forms::RadioButton());
            this->radioButton10 = (gcnew System::Windows::Forms::RadioButton());
            this->radioButton11 = (gcnew System::Windows::Forms::RadioButton());
            this->radioButton12 = (gcnew System::Windows::Forms::RadioButton());
            this->richTextBox3 = (gcnew System::Windows::Forms::RichTextBox());
            this->panel4 = (gcnew System::Windows::Forms::Panel());
            this->textBox13 = (gcnew System::Windows::Forms::TextBox());
            this->textBox14 = (gcnew System::Windows::Forms::TextBox());
            this->textBox15 = (gcnew System::Windows::Forms::TextBox());
            this->textBox16 = (gcnew System::Windows::Forms::TextBox());
            this->radioButton13 = (gcnew System::Windows::Forms::RadioButton());
            this->radioButton14 = (gcnew System::Windows::Forms::RadioButton());
            this->radioButton15 = (gcnew System::Windows::Forms::RadioButton());
            this->radioButton16 = (gcnew System::Windows::Forms::RadioButton());
            this->richTextBox4 = (gcnew System::Windows::Forms::RichTextBox());
            this->panel5 = (gcnew System::Windows::Forms::Panel());
            this->textBox17 = (gcnew System::Windows::Forms::TextBox());
            this->textBox18 = (gcnew System::Windows::Forms::TextBox());
            this->textBox19 = (gcnew System::Windows::Forms::TextBox());
            this->textBox20 = (gcnew System::Windows::Forms::TextBox());
            this->radioButton17 = (gcnew System::Windows::Forms::RadioButton());
            this->radioButton18 = (gcnew System::Windows::Forms::RadioButton());
            this->radioButton19 = (gcnew System::Windows::Forms::RadioButton());
            this->radioButton20 = (gcnew System::Windows::Forms::RadioButton());
            this->richTextBox5 = (gcnew System::Windows::Forms::RichTextBox());
            this->panel6 = (gcnew System::Windows::Forms::Panel());
            this->textBox21 = (gcnew System::Windows::Forms::TextBox());
            this->textBox22 = (gcnew System::Windows::Forms::TextBox());
            this->textBox23 = (gcnew System::Windows::Forms::TextBox());
            this->textBox24 = (gcnew System::Windows::Forms::TextBox());
            this->radioButton21 = (gcnew System::Windows::Forms::RadioButton());
            this->radioButton22 = (gcnew System::Windows::Forms::RadioButton());
            this->radioButton23 = (gcnew System::Windows::Forms::RadioButton());
            this->radioButton24 = (gcnew System::Windows::Forms::RadioButton());
            this->richTextBox6 = (gcnew System::Windows::Forms::RichTextBox());
            this->panel7 = (gcnew System::Windows::Forms::Panel());
            this->textBox25 = (gcnew System::Windows::Forms::TextBox());
            this->textBox26 = (gcnew System::Windows::Forms::TextBox());
            this->textBox27 = (gcnew System::Windows::Forms::TextBox());
            this->textBox28 = (gcnew System::Windows::Forms::TextBox());
            this->radioButton25 = (gcnew System::Windows::Forms::RadioButton());
            this->radioButton26 = (gcnew System::Windows::Forms::RadioButton());
            this->radioButton27 = (gcnew System::Windows::Forms::RadioButton());
            this->radioButton28 = (gcnew System::Windows::Forms::RadioButton());
            this->richTextBox7 = (gcnew System::Windows::Forms::RichTextBox());
            this->panel8 = (gcnew System::Windows::Forms::Panel());
            this->textBox29 = (gcnew System::Windows::Forms::TextBox());
            this->textBox30 = (gcnew System::Windows::Forms::TextBox());
            this->textBox31 = (gcnew System::Windows::Forms::TextBox());
            this->textBox32 = (gcnew System::Windows::Forms::TextBox());
            this->radioButton29 = (gcnew System::Windows::Forms::RadioButton());
            this->radioButton30 = (gcnew System::Windows::Forms::RadioButton());
            this->radioButton31 = (gcnew System::Windows::Forms::RadioButton());
            this->radioButton32 = (gcnew System::Windows::Forms::RadioButton());
            this->richTextBox8 = (gcnew System::Windows::Forms::RichTextBox());
            this->panel9 = (gcnew System::Windows::Forms::Panel());
            this->textBox33 = (gcnew System::Windows::Forms::TextBox());
            this->textBox34 = (gcnew System::Windows::Forms::TextBox());
            this->textBox35 = (gcnew System::Windows::Forms::TextBox());
            this->textBox36 = (gcnew System::Windows::Forms::TextBox());
            this->radioButton33 = (gcnew System::Windows::Forms::RadioButton());
            this->radioButton34 = (gcnew System::Windows::Forms::RadioButton());
            this->radioButton35 = (gcnew System::Windows::Forms::RadioButton());
            this->radioButton36 = (gcnew System::Windows::Forms::RadioButton());
            this->richTextBox9 = (gcnew System::Windows::Forms::RichTextBox());
            this->panel10 = (gcnew System::Windows::Forms::Panel());
            this->textBox37 = (gcnew System::Windows::Forms::TextBox());
            this->textBox38 = (gcnew System::Windows::Forms::TextBox());
            this->textBox39 = (gcnew System::Windows::Forms::TextBox());
            this->textBox40 = (gcnew System::Windows::Forms::TextBox());
            this->radioButton37 = (gcnew System::Windows::Forms::RadioButton());
            this->radioButton38 = (gcnew System::Windows::Forms::RadioButton());
            this->radioButton39 = (gcnew System::Windows::Forms::RadioButton());
            this->radioButton40 = (gcnew System::Windows::Forms::RadioButton());
            this->richTextBox10 = (gcnew System::Windows::Forms::RichTextBox());
            this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
            this->panel1->SuspendLayout();
            this->panel2->SuspendLayout();
            this->panel3->SuspendLayout();
            this->panel4->SuspendLayout();
            this->panel5->SuspendLayout();
            this->panel6->SuspendLayout();
            this->panel7->SuspendLayout();
            this->panel8->SuspendLayout();
            this->panel9->SuspendLayout();
            this->panel10->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
            this->SuspendLayout();
            // 
            // label1
            // 
            this->label1->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label1->AutoSize = true;
            this->label1->BackColor = System::Drawing::SystemColors::Desktop;
            this->label1->Font = (gcnew System::Drawing::Font(L"Calibri Light", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label1->ForeColor = System::Drawing::Color::Gold;
            this->label1->Location = System::Drawing::Point(1446, 58);
            this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(239, 41);
            this->label1->TabIndex = 4;
            this->label1->Text = L"Time Remaining";
            // 
            // label2
            // 
            this->label2->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label2->AutoSize = true;
            this->label2->BackColor = System::Drawing::SystemColors::MenuText;
            this->label2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label2->Font = (gcnew System::Drawing::Font(L"Calibri Light", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label2->ForeColor = System::Drawing::Color::Gold;
            this->label2->Location = System::Drawing::Point(1513, 111);
            this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(123, 43);
            this->label2->TabIndex = 4;
            this->label2->Text = L"2:00:00";
            // 
            // button2
            // 
            this->button2->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->button2->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
            this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button2->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button2->ForeColor = System::Drawing::Color::Gold;
            this->button2->Location = System::Drawing::Point(1208, 5931);
            this->button2->Margin = System::Windows::Forms::Padding(4);
            this->button2->Name = L"button2";
            this->button2->Size = System::Drawing::Size(340, 85);
            this->button2->TabIndex = 58;
            this->button2->Text = L"Cancel";
            this->button2->UseVisualStyleBackColor = false;
            // 
            // button1
            // 
            this->button1->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->button1->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
            this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button1->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button1->ForeColor = System::Drawing::Color::Gold;
            this->button1->Location = System::Drawing::Point(860, 5931);
            this->button1->Margin = System::Windows::Forms::Padding(4);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(340, 85);
            this->button1->TabIndex = 58;
            this->button1->Text = L"Next";
            this->button1->UseVisualStyleBackColor = false;
            // 
            // rdbC
            // 
            this->rdbC->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->rdbC->AutoSize = true;
            this->rdbC->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->rdbC->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->rdbC->ForeColor = System::Drawing::Color::Gold;
            this->rdbC->Location = System::Drawing::Point(16, 218);
            this->rdbC->Margin = System::Windows::Forms::Padding(4);
            this->rdbC->Name = L"rdbC";
            this->rdbC->Size = System::Drawing::Size(45, 31);
            this->rdbC->TabIndex = 2;
            this->rdbC->TabStop = true;
            this->rdbC->Text = L"c";
            this->rdbC->UseVisualStyleBackColor = false;
            this->rdbC->CheckedChanged += gcnew System::EventHandler(this, &Startpage::rdbC_CheckedChanged);
            // 
            // rdbB
            // 
            this->rdbB->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->rdbB->AutoSize = true;
            this->rdbB->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->rdbB->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->rdbB->ForeColor = System::Drawing::Color::Gold;
            this->rdbB->Location = System::Drawing::Point(16, 143);
            this->rdbB->Margin = System::Windows::Forms::Padding(4);
            this->rdbB->Name = L"rdbB";
            this->rdbB->Size = System::Drawing::Size(46, 31);
            this->rdbB->TabIndex = 2;
            this->rdbB->TabStop = true;
            this->rdbB->Text = L"b";
            this->rdbB->UseVisualStyleBackColor = false;
            this->rdbB->CheckedChanged += gcnew System::EventHandler(this, &Startpage::rdbB_CheckedChanged);
            // 
            // rdbA
            // 
            this->rdbA->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->rdbA->AutoSize = true;
            this->rdbA->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->rdbA->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->rdbA->ForeColor = System::Drawing::Color::Gold;
            this->rdbA->Location = System::Drawing::Point(17, 76);
            this->rdbA->Margin = System::Windows::Forms::Padding(4);
            this->rdbA->Name = L"rdbA";
            this->rdbA->Size = System::Drawing::Size(46, 31);
            this->rdbA->TabIndex = 2;
            this->rdbA->TabStop = true;
            this->rdbA->Text = L"a";
            this->rdbA->UseVisualStyleBackColor = false;
            this->rdbA->CheckedChanged += gcnew System::EventHandler(this, &Startpage::radioButton2_CheckedChanged);
            // 
            // rdbD
            // 
            this->rdbD->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->rdbD->AutoSize = true;
            this->rdbD->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->rdbD->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->rdbD->ForeColor = System::Drawing::Color::Gold;
            this->rdbD->Location = System::Drawing::Point(17, 290);
            this->rdbD->Margin = System::Windows::Forms::Padding(4);
            this->rdbD->Name = L"rdbD";
            this->rdbD->Size = System::Drawing::Size(46, 31);
            this->rdbD->TabIndex = 2;
            this->rdbD->TabStop = true;
            this->rdbD->Text = L"d";
            this->rdbD->UseVisualStyleBackColor = false;
            this->rdbD->CheckedChanged += gcnew System::EventHandler(this, &Startpage::rdbD_CheckedChanged);
            // 
            // tbOptnB
            // 
            this->tbOptnB->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->tbOptnB->BackColor = System::Drawing::Color::Black;
            this->tbOptnB->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tbOptnB->ForeColor = System::Drawing::Color::SpringGreen;
            this->tbOptnB->Location = System::Drawing::Point(76, 124);
            this->tbOptnB->Margin = System::Windows::Forms::Padding(4);
            this->tbOptnB->Multiline = true;
            this->tbOptnB->Name = L"tbOptnB";
            this->tbOptnB->ReadOnly = true;
            this->tbOptnB->Size = System::Drawing::Size(1316, 64);
            this->tbOptnB->TabIndex = 1;
            this->tbOptnB->TextChanged += gcnew System::EventHandler(this, &Startpage::textBox2_TextChanged);
            // 
            // panel1
            // 
            this->panel1->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
                static_cast<System::Int32>(static_cast<System::Byte>(54)));
            this->panel1->Controls->Add(this->tbOptnD);
            this->panel1->Controls->Add(this->tbOptnC);
            this->panel1->Controls->Add(this->tbOptnA);
            this->panel1->Controls->Add(this->tbOptnB);
            this->panel1->Controls->Add(this->rdbD);
            this->panel1->Controls->Add(this->rdbA);
            this->panel1->Controls->Add(this->rdbB);
            this->panel1->Controls->Add(this->rdbC);
            this->panel1->ForeColor = System::Drawing::SystemColors::Desktop;
            this->panel1->Location = System::Drawing::Point(-54, 266);
            this->panel1->Margin = System::Windows::Forms::Padding(4);
            this->panel1->Name = L"panel1";
            this->panel1->Size = System::Drawing::Size(1443, 352);
            this->panel1->TabIndex = 41;
            // 
            // tbOptnD
            // 
            this->tbOptnD->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->tbOptnD->BackColor = System::Drawing::Color::Black;
            this->tbOptnD->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tbOptnD->ForeColor = System::Drawing::Color::SpringGreen;
            this->tbOptnD->Location = System::Drawing::Point(76, 268);
            this->tbOptnD->Margin = System::Windows::Forms::Padding(4);
            this->tbOptnD->Multiline = true;
            this->tbOptnD->Name = L"tbOptnD";
            this->tbOptnD->ReadOnly = true;
            this->tbOptnD->Size = System::Drawing::Size(1316, 64);
            this->tbOptnD->TabIndex = 1;
            this->tbOptnD->TextChanged += gcnew System::EventHandler(this, &Startpage::textBox4_TextChanged);
            // 
            // tbOptnC
            // 
            this->tbOptnC->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->tbOptnC->BackColor = System::Drawing::Color::Black;
            this->tbOptnC->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tbOptnC->ForeColor = System::Drawing::Color::SpringGreen;
            this->tbOptnC->Location = System::Drawing::Point(76, 196);
            this->tbOptnC->Margin = System::Windows::Forms::Padding(4);
            this->tbOptnC->Multiline = true;
            this->tbOptnC->Name = L"tbOptnC";
            this->tbOptnC->ReadOnly = true;
            this->tbOptnC->Size = System::Drawing::Size(1316, 64);
            this->tbOptnC->TabIndex = 1;
            this->tbOptnC->TextChanged += gcnew System::EventHandler(this, &Startpage::textBox3_TextChanged);
            // 
            // tbOptnA
            // 
            this->tbOptnA->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->tbOptnA->BackColor = System::Drawing::Color::Black;
            this->tbOptnA->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tbOptnA->ForeColor = System::Drawing::Color::SpringGreen;
            this->tbOptnA->Location = System::Drawing::Point(76, 52);
            this->tbOptnA->Margin = System::Windows::Forms::Padding(4);
            this->tbOptnA->Multiline = true;
            this->tbOptnA->Name = L"tbOptnA";
            this->tbOptnA->ReadOnly = true;
            this->tbOptnA->Size = System::Drawing::Size(1316, 64);
            this->tbOptnA->TabIndex = 1;
            this->tbOptnA->TextChanged += gcnew System::EventHandler(this, &Startpage::textBox1_TextChanged);
            // 
            // rtbQuesitionDisplay
            // 
            this->rtbQuesitionDisplay->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->rtbQuesitionDisplay->BackColor = System::Drawing::Color::Black;
            this->rtbQuesitionDisplay->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->rtbQuesitionDisplay->Cursor = System::Windows::Forms::Cursors::No;
            this->rtbQuesitionDisplay->Font = (gcnew System::Drawing::Font(L"Calibri Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->rtbQuesitionDisplay->ForeColor = System::Drawing::Color::Gold;
            this->rtbQuesitionDisplay->Location = System::Drawing::Point(-54, 36);
            this->rtbQuesitionDisplay->Margin = System::Windows::Forms::Padding(4);
            this->rtbQuesitionDisplay->Name = L"rtbQuesitionDisplay";
            this->rtbQuesitionDisplay->ReadOnly = true;
            this->rtbQuesitionDisplay->Size = System::Drawing::Size(1443, 223);
            this->rtbQuesitionDisplay->TabIndex = 40;
            this->rtbQuesitionDisplay->Text = L"";
            this->rtbQuesitionDisplay->TextChanged += gcnew System::EventHandler(this, &Startpage::richTextBox2_TextChanged);
            // 
            // timer1
            // 
            this->timer1->Interval = 1000;
            this->timer1->Tick += gcnew System::EventHandler(this, &Startpage::timer1_Tick);
            // 
            // textBox41
            // 
            this->textBox41->BackColor = System::Drawing::SystemColors::ControlText;
            this->textBox41->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->textBox41->Location = System::Drawing::Point(1501, 36);
            this->textBox41->Margin = System::Windows::Forms::Padding(4);
            this->textBox41->Multiline = true;
            this->textBox41->Name = L"textBox41";
            this->textBox41->Size = System::Drawing::Size(291, 159);
            this->textBox41->TabIndex = 60;
            // 
            // panel2
            // 
            this->panel2->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
                static_cast<System::Int32>(static_cast<System::Byte>(54)));
            this->panel2->Controls->Add(this->textBox5);
            this->panel2->Controls->Add(this->textBox6);
            this->panel2->Controls->Add(this->textBox7);
            this->panel2->Controls->Add(this->textBox8);
            this->panel2->Controls->Add(this->radioButton5);
            this->panel2->Controls->Add(this->radioButton6);
            this->panel2->Controls->Add(this->radioButton7);
            this->panel2->Controls->Add(this->radioButton8);
            this->panel2->ForeColor = System::Drawing::SystemColors::Desktop;
            this->panel2->Location = System::Drawing::Point(-54, 855);
            this->panel2->Margin = System::Windows::Forms::Padding(4);
            this->panel2->Name = L"panel2";
            this->panel2->Size = System::Drawing::Size(1443, 352);
            this->panel2->TabIndex = 62;
            // 
            // textBox5
            // 
            this->textBox5->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->textBox5->BackColor = System::Drawing::Color::Black;
            this->textBox5->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox5->ForeColor = System::Drawing::Color::SpringGreen;
            this->textBox5->Location = System::Drawing::Point(76, 268);
            this->textBox5->Margin = System::Windows::Forms::Padding(4);
            this->textBox5->Multiline = true;
            this->textBox5->Name = L"textBox5";
            this->textBox5->ReadOnly = true;
            this->textBox5->Size = System::Drawing::Size(1316, 64);
            this->textBox5->TabIndex = 1;
            // 
            // textBox6
            // 
            this->textBox6->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->textBox6->BackColor = System::Drawing::Color::Black;
            this->textBox6->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox6->ForeColor = System::Drawing::Color::SpringGreen;
            this->textBox6->Location = System::Drawing::Point(76, 196);
            this->textBox6->Margin = System::Windows::Forms::Padding(4);
            this->textBox6->Multiline = true;
            this->textBox6->Name = L"textBox6";
            this->textBox6->ReadOnly = true;
            this->textBox6->Size = System::Drawing::Size(1316, 64);
            this->textBox6->TabIndex = 1;
            // 
            // textBox7
            // 
            this->textBox7->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->textBox7->BackColor = System::Drawing::Color::Black;
            this->textBox7->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox7->ForeColor = System::Drawing::Color::SpringGreen;
            this->textBox7->Location = System::Drawing::Point(76, 123);
            this->textBox7->Margin = System::Windows::Forms::Padding(4);
            this->textBox7->Multiline = true;
            this->textBox7->Name = L"textBox7";
            this->textBox7->ReadOnly = true;
            this->textBox7->Size = System::Drawing::Size(1316, 64);
            this->textBox7->TabIndex = 1;
            // 
            // textBox8
            // 
            this->textBox8->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->textBox8->BackColor = System::Drawing::Color::Black;
            this->textBox8->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox8->ForeColor = System::Drawing::Color::SpringGreen;
            this->textBox8->Location = System::Drawing::Point(76, 50);
            this->textBox8->Margin = System::Windows::Forms::Padding(4);
            this->textBox8->Multiline = true;
            this->textBox8->Name = L"textBox8";
            this->textBox8->ReadOnly = true;
            this->textBox8->Size = System::Drawing::Size(1316, 64);
            this->textBox8->TabIndex = 1;
            // 
            // radioButton5
            // 
            this->radioButton5->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->radioButton5->AutoSize = true;
            this->radioButton5->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->radioButton5->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->radioButton5->ForeColor = System::Drawing::Color::Gold;
            this->radioButton5->Location = System::Drawing::Point(17, 290);
            this->radioButton5->Margin = System::Windows::Forms::Padding(4);
            this->radioButton5->Name = L"radioButton5";
            this->radioButton5->Size = System::Drawing::Size(46, 31);
            this->radioButton5->TabIndex = 2;
            this->radioButton5->TabStop = true;
            this->radioButton5->Text = L"d";
            this->radioButton5->UseVisualStyleBackColor = false;
            // 
            // radioButton6
            // 
            this->radioButton6->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->radioButton6->AutoSize = true;
            this->radioButton6->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->radioButton6->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->radioButton6->ForeColor = System::Drawing::Color::Gold;
            this->radioButton6->Location = System::Drawing::Point(17, 76);
            this->radioButton6->Margin = System::Windows::Forms::Padding(4);
            this->radioButton6->Name = L"radioButton6";
            this->radioButton6->Size = System::Drawing::Size(46, 31);
            this->radioButton6->TabIndex = 2;
            this->radioButton6->TabStop = true;
            this->radioButton6->Text = L"a";
            this->radioButton6->UseVisualStyleBackColor = false;
            // 
            // radioButton7
            // 
            this->radioButton7->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->radioButton7->AutoSize = true;
            this->radioButton7->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->radioButton7->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->radioButton7->ForeColor = System::Drawing::Color::Gold;
            this->radioButton7->Location = System::Drawing::Point(16, 143);
            this->radioButton7->Margin = System::Windows::Forms::Padding(4);
            this->radioButton7->Name = L"radioButton7";
            this->radioButton7->Size = System::Drawing::Size(46, 31);
            this->radioButton7->TabIndex = 2;
            this->radioButton7->TabStop = true;
            this->radioButton7->Text = L"b";
            this->radioButton7->UseVisualStyleBackColor = false;
            // 
            // radioButton8
            // 
            this->radioButton8->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->radioButton8->AutoSize = true;
            this->radioButton8->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->radioButton8->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->radioButton8->ForeColor = System::Drawing::Color::Gold;
            this->radioButton8->Location = System::Drawing::Point(16, 218);
            this->radioButton8->Margin = System::Windows::Forms::Padding(4);
            this->radioButton8->Name = L"radioButton8";
            this->radioButton8->Size = System::Drawing::Size(45, 31);
            this->radioButton8->TabIndex = 2;
            this->radioButton8->TabStop = true;
            this->radioButton8->Text = L"c";
            this->radioButton8->UseVisualStyleBackColor = false;
            // 
            // richTextBox1
            // 
            this->richTextBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->richTextBox1->BackColor = System::Drawing::Color::Black;
            this->richTextBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->richTextBox1->Cursor = System::Windows::Forms::Cursors::No;
            this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->richTextBox1->ForeColor = System::Drawing::Color::Gold;
            this->richTextBox1->Location = System::Drawing::Point(-54, 625);
            this->richTextBox1->Margin = System::Windows::Forms::Padding(4);
            this->richTextBox1->Name = L"richTextBox1";
            this->richTextBox1->ReadOnly = true;
            this->richTextBox1->Size = System::Drawing::Size(1443, 223);
            this->richTextBox1->TabIndex = 61;
            this->richTextBox1->Text = L"";
            // 
            // panel3
            // 
            this->panel3->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
                static_cast<System::Int32>(static_cast<System::Byte>(54)));
            this->panel3->Controls->Add(this->textBox9);
            this->panel3->Controls->Add(this->textBox10);
            this->panel3->Controls->Add(this->textBox11);
            this->panel3->Controls->Add(this->textBox12);
            this->panel3->Controls->Add(this->radioButton9);
            this->panel3->Controls->Add(this->radioButton10);
            this->panel3->Controls->Add(this->radioButton11);
            this->panel3->Controls->Add(this->radioButton12);
            this->panel3->ForeColor = System::Drawing::SystemColors::Desktop;
            this->panel3->Location = System::Drawing::Point(-54, 1445);
            this->panel3->Margin = System::Windows::Forms::Padding(4);
            this->panel3->Name = L"panel3";
            this->panel3->Size = System::Drawing::Size(1443, 352);
            this->panel3->TabIndex = 64;
            // 
            // textBox9
            // 
            this->textBox9->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->textBox9->BackColor = System::Drawing::Color::Black;
            this->textBox9->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox9->ForeColor = System::Drawing::Color::SpringGreen;
            this->textBox9->Location = System::Drawing::Point(76, 268);
            this->textBox9->Margin = System::Windows::Forms::Padding(4);
            this->textBox9->Multiline = true;
            this->textBox9->Name = L"textBox9";
            this->textBox9->ReadOnly = true;
            this->textBox9->Size = System::Drawing::Size(1316, 64);
            this->textBox9->TabIndex = 1;
            // 
            // textBox10
            // 
            this->textBox10->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->textBox10->BackColor = System::Drawing::Color::Black;
            this->textBox10->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox10->ForeColor = System::Drawing::Color::SpringGreen;
            this->textBox10->Location = System::Drawing::Point(76, 196);
            this->textBox10->Margin = System::Windows::Forms::Padding(4);
            this->textBox10->Multiline = true;
            this->textBox10->Name = L"textBox10";
            this->textBox10->ReadOnly = true;
            this->textBox10->Size = System::Drawing::Size(1316, 64);
            this->textBox10->TabIndex = 1;
            // 
            // textBox11
            // 
            this->textBox11->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->textBox11->BackColor = System::Drawing::Color::Black;
            this->textBox11->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox11->ForeColor = System::Drawing::Color::SpringGreen;
            this->textBox11->Location = System::Drawing::Point(76, 123);
            this->textBox11->Margin = System::Windows::Forms::Padding(4);
            this->textBox11->Multiline = true;
            this->textBox11->Name = L"textBox11";
            this->textBox11->ReadOnly = true;
            this->textBox11->Size = System::Drawing::Size(1316, 64);
            this->textBox11->TabIndex = 1;
            // 
            // textBox12
            // 
            this->textBox12->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->textBox12->BackColor = System::Drawing::Color::Black;
            this->textBox12->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox12->ForeColor = System::Drawing::Color::SpringGreen;
            this->textBox12->Location = System::Drawing::Point(76, 50);
            this->textBox12->Margin = System::Windows::Forms::Padding(4);
            this->textBox12->Multiline = true;
            this->textBox12->Name = L"textBox12";
            this->textBox12->ReadOnly = true;
            this->textBox12->Size = System::Drawing::Size(1316, 64);
            this->textBox12->TabIndex = 1;
            // 
            // radioButton9
            // 
            this->radioButton9->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->radioButton9->AutoSize = true;
            this->radioButton9->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->radioButton9->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->radioButton9->ForeColor = System::Drawing::Color::Gold;
            this->radioButton9->Location = System::Drawing::Point(17, 290);
            this->radioButton9->Margin = System::Windows::Forms::Padding(4);
            this->radioButton9->Name = L"radioButton9";
            this->radioButton9->Size = System::Drawing::Size(46, 31);
            this->radioButton9->TabIndex = 2;
            this->radioButton9->TabStop = true;
            this->radioButton9->Text = L"d";
            this->radioButton9->UseVisualStyleBackColor = false;
            // 
            // radioButton10
            // 
            this->radioButton10->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->radioButton10->AutoSize = true;
            this->radioButton10->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->radioButton10->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->radioButton10->ForeColor = System::Drawing::Color::Gold;
            this->radioButton10->Location = System::Drawing::Point(17, 76);
            this->radioButton10->Margin = System::Windows::Forms::Padding(4);
            this->radioButton10->Name = L"radioButton10";
            this->radioButton10->Size = System::Drawing::Size(46, 31);
            this->radioButton10->TabIndex = 2;
            this->radioButton10->TabStop = true;
            this->radioButton10->Text = L"a";
            this->radioButton10->UseVisualStyleBackColor = false;
            // 
            // radioButton11
            // 
            this->radioButton11->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->radioButton11->AutoSize = true;
            this->radioButton11->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->radioButton11->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->radioButton11->ForeColor = System::Drawing::Color::Gold;
            this->radioButton11->Location = System::Drawing::Point(16, 143);
            this->radioButton11->Margin = System::Windows::Forms::Padding(4);
            this->radioButton11->Name = L"radioButton11";
            this->radioButton11->Size = System::Drawing::Size(46, 31);
            this->radioButton11->TabIndex = 2;
            this->radioButton11->TabStop = true;
            this->radioButton11->Text = L"b";
            this->radioButton11->UseVisualStyleBackColor = false;
            // 
            // radioButton12
            // 
            this->radioButton12->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->radioButton12->AutoSize = true;
            this->radioButton12->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->radioButton12->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->radioButton12->ForeColor = System::Drawing::Color::Gold;
            this->radioButton12->Location = System::Drawing::Point(16, 218);
            this->radioButton12->Margin = System::Windows::Forms::Padding(4);
            this->radioButton12->Name = L"radioButton12";
            this->radioButton12->Size = System::Drawing::Size(45, 31);
            this->radioButton12->TabIndex = 2;
            this->radioButton12->TabStop = true;
            this->radioButton12->Text = L"c";
            this->radioButton12->UseVisualStyleBackColor = false;
            // 
            // richTextBox3
            // 
            this->richTextBox3->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->richTextBox3->BackColor = System::Drawing::Color::Black;
            this->richTextBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->richTextBox3->Cursor = System::Windows::Forms::Cursors::No;
            this->richTextBox3->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->richTextBox3->ForeColor = System::Drawing::Color::Gold;
            this->richTextBox3->Location = System::Drawing::Point(-54, 1215);
            this->richTextBox3->Margin = System::Windows::Forms::Padding(4);
            this->richTextBox3->Name = L"richTextBox3";
            this->richTextBox3->ReadOnly = true;
            this->richTextBox3->Size = System::Drawing::Size(1443, 223);
            this->richTextBox3->TabIndex = 63;
            this->richTextBox3->Text = L"";
            // 
            // panel4
            // 
            this->panel4->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->panel4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
                static_cast<System::Int32>(static_cast<System::Byte>(54)));
            this->panel4->Controls->Add(this->textBox13);
            this->panel4->Controls->Add(this->textBox14);
            this->panel4->Controls->Add(this->textBox15);
            this->panel4->Controls->Add(this->textBox16);
            this->panel4->Controls->Add(this->radioButton13);
            this->panel4->Controls->Add(this->radioButton14);
            this->panel4->Controls->Add(this->radioButton15);
            this->panel4->Controls->Add(this->radioButton16);
            this->panel4->ForeColor = System::Drawing::SystemColors::Desktop;
            this->panel4->Location = System::Drawing::Point(-54, 2034);
            this->panel4->Margin = System::Windows::Forms::Padding(4);
            this->panel4->Name = L"panel4";
            this->panel4->Size = System::Drawing::Size(1443, 352);
            this->panel4->TabIndex = 66;
            // 
            // textBox13
            // 
            this->textBox13->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->textBox13->BackColor = System::Drawing::Color::Black;
            this->textBox13->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox13->ForeColor = System::Drawing::Color::SpringGreen;
            this->textBox13->Location = System::Drawing::Point(76, 268);
            this->textBox13->Margin = System::Windows::Forms::Padding(4);
            this->textBox13->Multiline = true;
            this->textBox13->Name = L"textBox13";
            this->textBox13->ReadOnly = true;
            this->textBox13->Size = System::Drawing::Size(1316, 64);
            this->textBox13->TabIndex = 1;
            // 
            // textBox14
            // 
            this->textBox14->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->textBox14->BackColor = System::Drawing::Color::Black;
            this->textBox14->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox14->ForeColor = System::Drawing::Color::SpringGreen;
            this->textBox14->Location = System::Drawing::Point(76, 196);
            this->textBox14->Margin = System::Windows::Forms::Padding(4);
            this->textBox14->Multiline = true;
            this->textBox14->Name = L"textBox14";
            this->textBox14->ReadOnly = true;
            this->textBox14->Size = System::Drawing::Size(1316, 64);
            this->textBox14->TabIndex = 1;
            // 
            // textBox15
            // 
            this->textBox15->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->textBox15->BackColor = System::Drawing::Color::Black;
            this->textBox15->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox15->ForeColor = System::Drawing::Color::SpringGreen;
            this->textBox15->Location = System::Drawing::Point(76, 123);
            this->textBox15->Margin = System::Windows::Forms::Padding(4);
            this->textBox15->Multiline = true;
            this->textBox15->Name = L"textBox15";
            this->textBox15->ReadOnly = true;
            this->textBox15->Size = System::Drawing::Size(1316, 64);
            this->textBox15->TabIndex = 1;
            // 
            // textBox16
            // 
            this->textBox16->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->textBox16->BackColor = System::Drawing::Color::Black;
            this->textBox16->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox16->ForeColor = System::Drawing::Color::SpringGreen;
            this->textBox16->Location = System::Drawing::Point(76, 50);
            this->textBox16->Margin = System::Windows::Forms::Padding(4);
            this->textBox16->Multiline = true;
            this->textBox16->Name = L"textBox16";
            this->textBox16->ReadOnly = true;
            this->textBox16->Size = System::Drawing::Size(1316, 64);
            this->textBox16->TabIndex = 1;
            // 
            // radioButton13
            // 
            this->radioButton13->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->radioButton13->AutoSize = true;
            this->radioButton13->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->radioButton13->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->radioButton13->ForeColor = System::Drawing::Color::Gold;
            this->radioButton13->Location = System::Drawing::Point(17, 290);
            this->radioButton13->Margin = System::Windows::Forms::Padding(4);
            this->radioButton13->Name = L"radioButton13";
            this->radioButton13->Size = System::Drawing::Size(46, 31);
            this->radioButton13->TabIndex = 2;
            this->radioButton13->TabStop = true;
            this->radioButton13->Text = L"d";
            this->radioButton13->UseVisualStyleBackColor = false;
            // 
            // radioButton14
            // 
            this->radioButton14->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->radioButton14->AutoSize = true;
            this->radioButton14->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->radioButton14->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->radioButton14->ForeColor = System::Drawing::Color::Gold;
            this->radioButton14->Location = System::Drawing::Point(17, 76);
            this->radioButton14->Margin = System::Windows::Forms::Padding(4);
            this->radioButton14->Name = L"radioButton14";
            this->radioButton14->Size = System::Drawing::Size(46, 31);
            this->radioButton14->TabIndex = 2;
            this->radioButton14->TabStop = true;
            this->radioButton14->Text = L"a";
            this->radioButton14->UseVisualStyleBackColor = false;
            // 
            // radioButton15
            // 
            this->radioButton15->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->radioButton15->AutoSize = true;
            this->radioButton15->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->radioButton15->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->radioButton15->ForeColor = System::Drawing::Color::Gold;
            this->radioButton15->Location = System::Drawing::Point(16, 143);
            this->radioButton15->Margin = System::Windows::Forms::Padding(4);
            this->radioButton15->Name = L"radioButton15";
            this->radioButton15->Size = System::Drawing::Size(46, 31);
            this->radioButton15->TabIndex = 2;
            this->radioButton15->TabStop = true;
            this->radioButton15->Text = L"b";
            this->radioButton15->UseVisualStyleBackColor = false;
            // 
            // radioButton16
            // 
            this->radioButton16->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->radioButton16->AutoSize = true;
            this->radioButton16->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->radioButton16->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->radioButton16->ForeColor = System::Drawing::Color::Gold;
            this->radioButton16->Location = System::Drawing::Point(16, 218);
            this->radioButton16->Margin = System::Windows::Forms::Padding(4);
            this->radioButton16->Name = L"radioButton16";
            this->radioButton16->Size = System::Drawing::Size(45, 31);
            this->radioButton16->TabIndex = 2;
            this->radioButton16->TabStop = true;
            this->radioButton16->Text = L"c";
            this->radioButton16->UseVisualStyleBackColor = false;
            // 
            // richTextBox4
            // 
            this->richTextBox4->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->richTextBox4->BackColor = System::Drawing::Color::Black;
            this->richTextBox4->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->richTextBox4->Cursor = System::Windows::Forms::Cursors::No;
            this->richTextBox4->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->richTextBox4->ForeColor = System::Drawing::Color::Gold;
            this->richTextBox4->Location = System::Drawing::Point(-54, 1804);
            this->richTextBox4->Margin = System::Windows::Forms::Padding(4);
            this->richTextBox4->Name = L"richTextBox4";
            this->richTextBox4->ReadOnly = true;
            this->richTextBox4->Size = System::Drawing::Size(1443, 223);
            this->richTextBox4->TabIndex = 65;
            this->richTextBox4->Text = L"";
            // 
            // panel5
            // 
            this->panel5->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->panel5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
                static_cast<System::Int32>(static_cast<System::Byte>(54)));
            this->panel5->Controls->Add(this->textBox17);
            this->panel5->Controls->Add(this->textBox18);
            this->panel5->Controls->Add(this->textBox19);
            this->panel5->Controls->Add(this->textBox20);
            this->panel5->Controls->Add(this->radioButton17);
            this->panel5->Controls->Add(this->radioButton18);
            this->panel5->Controls->Add(this->radioButton19);
            this->panel5->Controls->Add(this->radioButton20);
            this->panel5->ForeColor = System::Drawing::SystemColors::Desktop;
            this->panel5->Location = System::Drawing::Point(-54, 2624);
            this->panel5->Margin = System::Windows::Forms::Padding(4);
            this->panel5->Name = L"panel5";
            this->panel5->Size = System::Drawing::Size(1443, 352);
            this->panel5->TabIndex = 68;
            // 
            // textBox17
            // 
            this->textBox17->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->textBox17->BackColor = System::Drawing::Color::Black;
            this->textBox17->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox17->ForeColor = System::Drawing::Color::SpringGreen;
            this->textBox17->Location = System::Drawing::Point(76, 268);
            this->textBox17->Margin = System::Windows::Forms::Padding(4);
            this->textBox17->Multiline = true;
            this->textBox17->Name = L"textBox17";
            this->textBox17->ReadOnly = true;
            this->textBox17->Size = System::Drawing::Size(1316, 64);
            this->textBox17->TabIndex = 1;
            // 
            // textBox18
            // 
            this->textBox18->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->textBox18->BackColor = System::Drawing::Color::Black;
            this->textBox18->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox18->ForeColor = System::Drawing::Color::SpringGreen;
            this->textBox18->Location = System::Drawing::Point(76, 196);
            this->textBox18->Margin = System::Windows::Forms::Padding(4);
            this->textBox18->Multiline = true;
            this->textBox18->Name = L"textBox18";
            this->textBox18->ReadOnly = true;
            this->textBox18->Size = System::Drawing::Size(1316, 64);
            this->textBox18->TabIndex = 1;
            // 
            // textBox19
            // 
            this->textBox19->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->textBox19->BackColor = System::Drawing::Color::Black;
            this->textBox19->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox19->ForeColor = System::Drawing::Color::SpringGreen;
            this->textBox19->Location = System::Drawing::Point(76, 123);
            this->textBox19->Margin = System::Windows::Forms::Padding(4);
            this->textBox19->Multiline = true;
            this->textBox19->Name = L"textBox19";
            this->textBox19->ReadOnly = true;
            this->textBox19->Size = System::Drawing::Size(1316, 64);
            this->textBox19->TabIndex = 1;
            // 
            // textBox20
            // 
            this->textBox20->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->textBox20->BackColor = System::Drawing::Color::Black;
            this->textBox20->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox20->ForeColor = System::Drawing::Color::SpringGreen;
            this->textBox20->Location = System::Drawing::Point(76, 50);
            this->textBox20->Margin = System::Windows::Forms::Padding(4);
            this->textBox20->Multiline = true;
            this->textBox20->Name = L"textBox20";
            this->textBox20->ReadOnly = true;
            this->textBox20->Size = System::Drawing::Size(1316, 64);
            this->textBox20->TabIndex = 1;
            // 
            // radioButton17
            // 
            this->radioButton17->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->radioButton17->AutoSize = true;
            this->radioButton17->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->radioButton17->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->radioButton17->ForeColor = System::Drawing::Color::Gold;
            this->radioButton17->Location = System::Drawing::Point(17, 290);
            this->radioButton17->Margin = System::Windows::Forms::Padding(4);
            this->radioButton17->Name = L"radioButton17";
            this->radioButton17->Size = System::Drawing::Size(46, 31);
            this->radioButton17->TabIndex = 2;
            this->radioButton17->TabStop = true;
            this->radioButton17->Text = L"d";
            this->radioButton17->UseVisualStyleBackColor = false;
            // 
            // radioButton18
            // 
            this->radioButton18->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->radioButton18->AutoSize = true;
            this->radioButton18->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->radioButton18->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->radioButton18->ForeColor = System::Drawing::Color::Gold;
            this->radioButton18->Location = System::Drawing::Point(17, 76);
            this->radioButton18->Margin = System::Windows::Forms::Padding(4);
            this->radioButton18->Name = L"radioButton18";
            this->radioButton18->Size = System::Drawing::Size(46, 31);
            this->radioButton18->TabIndex = 2;
            this->radioButton18->TabStop = true;
            this->radioButton18->Text = L"a";
            this->radioButton18->UseVisualStyleBackColor = false;
            // 
            // radioButton19
            // 
            this->radioButton19->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->radioButton19->AutoSize = true;
            this->radioButton19->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->radioButton19->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->radioButton19->ForeColor = System::Drawing::Color::Gold;
            this->radioButton19->Location = System::Drawing::Point(16, 143);
            this->radioButton19->Margin = System::Windows::Forms::Padding(4);
            this->radioButton19->Name = L"radioButton19";
            this->radioButton19->Size = System::Drawing::Size(46, 31);
            this->radioButton19->TabIndex = 2;
            this->radioButton19->TabStop = true;
            this->radioButton19->Text = L"b";
            this->radioButton19->UseVisualStyleBackColor = false;
            // 
            // radioButton20
            // 
            this->radioButton20->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->radioButton20->AutoSize = true;
            this->radioButton20->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->radioButton20->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->radioButton20->ForeColor = System::Drawing::Color::Gold;
            this->radioButton20->Location = System::Drawing::Point(16, 218);
            this->radioButton20->Margin = System::Windows::Forms::Padding(4);
            this->radioButton20->Name = L"radioButton20";
            this->radioButton20->Size = System::Drawing::Size(45, 31);
            this->radioButton20->TabIndex = 2;
            this->radioButton20->TabStop = true;
            this->radioButton20->Text = L"c";
            this->radioButton20->UseVisualStyleBackColor = false;
            // 
            // richTextBox5
            // 
            this->richTextBox5->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->richTextBox5->BackColor = System::Drawing::Color::Black;
            this->richTextBox5->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->richTextBox5->Cursor = System::Windows::Forms::Cursors::No;
            this->richTextBox5->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->richTextBox5->ForeColor = System::Drawing::Color::Gold;
            this->richTextBox5->Location = System::Drawing::Point(-54, 2394);
            this->richTextBox5->Margin = System::Windows::Forms::Padding(4);
            this->richTextBox5->Name = L"richTextBox5";
            this->richTextBox5->ReadOnly = true;
            this->richTextBox5->Size = System::Drawing::Size(1443, 223);
            this->richTextBox5->TabIndex = 67;
            this->richTextBox5->Text = L"";
            // 
            // panel6
            // 
            this->panel6->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->panel6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
                static_cast<System::Int32>(static_cast<System::Byte>(54)));
            this->panel6->Controls->Add(this->textBox21);
            this->panel6->Controls->Add(this->textBox22);
            this->panel6->Controls->Add(this->textBox23);
            this->panel6->Controls->Add(this->textBox24);
            this->panel6->Controls->Add(this->radioButton21);
            this->panel6->Controls->Add(this->radioButton22);
            this->panel6->Controls->Add(this->radioButton23);
            this->panel6->Controls->Add(this->radioButton24);
            this->panel6->ForeColor = System::Drawing::SystemColors::Desktop;
            this->panel6->Location = System::Drawing::Point(-54, 3214);
            this->panel6->Margin = System::Windows::Forms::Padding(4);
            this->panel6->Name = L"panel6";
            this->panel6->Size = System::Drawing::Size(1443, 352);
            this->panel6->TabIndex = 70;
            // 
            // textBox21
            // 
            this->textBox21->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->textBox21->BackColor = System::Drawing::Color::Black;
            this->textBox21->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox21->ForeColor = System::Drawing::Color::SpringGreen;
            this->textBox21->Location = System::Drawing::Point(76, 268);
            this->textBox21->Margin = System::Windows::Forms::Padding(4);
            this->textBox21->Multiline = true;
            this->textBox21->Name = L"textBox21";
            this->textBox21->ReadOnly = true;
            this->textBox21->Size = System::Drawing::Size(1316, 64);
            this->textBox21->TabIndex = 1;
            // 
            // textBox22
            // 
            this->textBox22->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->textBox22->BackColor = System::Drawing::Color::Black;
            this->textBox22->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox22->ForeColor = System::Drawing::Color::SpringGreen;
            this->textBox22->Location = System::Drawing::Point(76, 196);
            this->textBox22->Margin = System::Windows::Forms::Padding(4);
            this->textBox22->Multiline = true;
            this->textBox22->Name = L"textBox22";
            this->textBox22->ReadOnly = true;
            this->textBox22->Size = System::Drawing::Size(1316, 64);
            this->textBox22->TabIndex = 1;
            // 
            // textBox23
            // 
            this->textBox23->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->textBox23->BackColor = System::Drawing::Color::Black;
            this->textBox23->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox23->ForeColor = System::Drawing::Color::SpringGreen;
            this->textBox23->Location = System::Drawing::Point(76, 123);
            this->textBox23->Margin = System::Windows::Forms::Padding(4);
            this->textBox23->Multiline = true;
            this->textBox23->Name = L"textBox23";
            this->textBox23->ReadOnly = true;
            this->textBox23->Size = System::Drawing::Size(1316, 64);
            this->textBox23->TabIndex = 1;
            // 
            // textBox24
            // 
            this->textBox24->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->textBox24->BackColor = System::Drawing::Color::Black;
            this->textBox24->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox24->ForeColor = System::Drawing::Color::SpringGreen;
            this->textBox24->Location = System::Drawing::Point(76, 50);
            this->textBox24->Margin = System::Windows::Forms::Padding(4);
            this->textBox24->Multiline = true;
            this->textBox24->Name = L"textBox24";
            this->textBox24->ReadOnly = true;
            this->textBox24->Size = System::Drawing::Size(1316, 64);
            this->textBox24->TabIndex = 1;
            // 
            // radioButton21
            // 
            this->radioButton21->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->radioButton21->AutoSize = true;
            this->radioButton21->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->radioButton21->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->radioButton21->ForeColor = System::Drawing::Color::Gold;
            this->radioButton21->Location = System::Drawing::Point(17, 290);
            this->radioButton21->Margin = System::Windows::Forms::Padding(4);
            this->radioButton21->Name = L"radioButton21";
            this->radioButton21->Size = System::Drawing::Size(46, 31);
            this->radioButton21->TabIndex = 2;
            this->radioButton21->TabStop = true;
            this->radioButton21->Text = L"d";
            this->radioButton21->UseVisualStyleBackColor = false;
            // 
            // radioButton22
            // 
            this->radioButton22->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->radioButton22->AutoSize = true;
            this->radioButton22->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->radioButton22->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->radioButton22->ForeColor = System::Drawing::Color::Gold;
            this->radioButton22->Location = System::Drawing::Point(17, 76);
            this->radioButton22->Margin = System::Windows::Forms::Padding(4);
            this->radioButton22->Name = L"radioButton22";
            this->radioButton22->Size = System::Drawing::Size(46, 31);
            this->radioButton22->TabIndex = 2;
            this->radioButton22->TabStop = true;
            this->radioButton22->Text = L"a";
            this->radioButton22->UseVisualStyleBackColor = false;
            // 
            // radioButton23
            // 
            this->radioButton23->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->radioButton23->AutoSize = true;
            this->radioButton23->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->radioButton23->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->radioButton23->ForeColor = System::Drawing::Color::Gold;
            this->radioButton23->Location = System::Drawing::Point(16, 143);
            this->radioButton23->Margin = System::Windows::Forms::Padding(4);
            this->radioButton23->Name = L"radioButton23";
            this->radioButton23->Size = System::Drawing::Size(46, 31);
            this->radioButton23->TabIndex = 2;
            this->radioButton23->TabStop = true;
            this->radioButton23->Text = L"b";
            this->radioButton23->UseVisualStyleBackColor = false;
            // 
            // radioButton24
            // 
            this->radioButton24->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->radioButton24->AutoSize = true;
            this->radioButton24->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->radioButton24->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->radioButton24->ForeColor = System::Drawing::Color::Gold;
            this->radioButton24->Location = System::Drawing::Point(16, 218);
            this->radioButton24->Margin = System::Windows::Forms::Padding(4);
            this->radioButton24->Name = L"radioButton24";
            this->radioButton24->Size = System::Drawing::Size(45, 31);
            this->radioButton24->TabIndex = 2;
            this->radioButton24->TabStop = true;
            this->radioButton24->Text = L"c";
            this->radioButton24->UseVisualStyleBackColor = false;
            // 
            // richTextBox6
            // 
            this->richTextBox6->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->richTextBox6->BackColor = System::Drawing::Color::Black;
            this->richTextBox6->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->richTextBox6->Cursor = System::Windows::Forms::Cursors::No;
            this->richTextBox6->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->richTextBox6->ForeColor = System::Drawing::Color::Gold;
            this->richTextBox6->Location = System::Drawing::Point(-54, 2983);
            this->richTextBox6->Margin = System::Windows::Forms::Padding(4);
            this->richTextBox6->Name = L"richTextBox6";
            this->richTextBox6->ReadOnly = true;
            this->richTextBox6->Size = System::Drawing::Size(1443, 223);
            this->richTextBox6->TabIndex = 69;
            this->richTextBox6->Text = L"";
            // 
            // panel7
            // 
            this->panel7->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->panel7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
                static_cast<System::Int32>(static_cast<System::Byte>(54)));
            this->panel7->Controls->Add(this->textBox25);
            this->panel7->Controls->Add(this->textBox26);
            this->panel7->Controls->Add(this->textBox27);
            this->panel7->Controls->Add(this->textBox28);
            this->panel7->Controls->Add(this->radioButton25);
            this->panel7->Controls->Add(this->radioButton26);
            this->panel7->Controls->Add(this->radioButton27);
            this->panel7->Controls->Add(this->radioButton28);
            this->panel7->ForeColor = System::Drawing::SystemColors::Desktop;
            this->panel7->Location = System::Drawing::Point(-54, 3803);
            this->panel7->Margin = System::Windows::Forms::Padding(4);
            this->panel7->Name = L"panel7";
            this->panel7->Size = System::Drawing::Size(1443, 352);
            this->panel7->TabIndex = 72;
            // 
            // textBox25
            // 
            this->textBox25->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->textBox25->BackColor = System::Drawing::Color::Black;
            this->textBox25->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox25->ForeColor = System::Drawing::Color::SpringGreen;
            this->textBox25->Location = System::Drawing::Point(76, 268);
            this->textBox25->Margin = System::Windows::Forms::Padding(4);
            this->textBox25->Multiline = true;
            this->textBox25->Name = L"textBox25";
            this->textBox25->ReadOnly = true;
            this->textBox25->Size = System::Drawing::Size(1316, 64);
            this->textBox25->TabIndex = 1;
            // 
            // textBox26
            // 
            this->textBox26->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->textBox26->BackColor = System::Drawing::Color::Black;
            this->textBox26->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox26->ForeColor = System::Drawing::Color::SpringGreen;
            this->textBox26->Location = System::Drawing::Point(76, 196);
            this->textBox26->Margin = System::Windows::Forms::Padding(4);
            this->textBox26->Multiline = true;
            this->textBox26->Name = L"textBox26";
            this->textBox26->ReadOnly = true;
            this->textBox26->Size = System::Drawing::Size(1316, 64);
            this->textBox26->TabIndex = 1;
            // 
            // textBox27
            // 
            this->textBox27->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->textBox27->BackColor = System::Drawing::Color::Black;
            this->textBox27->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox27->ForeColor = System::Drawing::Color::SpringGreen;
            this->textBox27->Location = System::Drawing::Point(76, 123);
            this->textBox27->Margin = System::Windows::Forms::Padding(4);
            this->textBox27->Multiline = true;
            this->textBox27->Name = L"textBox27";
            this->textBox27->ReadOnly = true;
            this->textBox27->Size = System::Drawing::Size(1316, 64);
            this->textBox27->TabIndex = 1;
            // 
            // textBox28
            // 
            this->textBox28->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->textBox28->BackColor = System::Drawing::Color::Black;
            this->textBox28->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox28->ForeColor = System::Drawing::Color::SpringGreen;
            this->textBox28->Location = System::Drawing::Point(76, 50);
            this->textBox28->Margin = System::Windows::Forms::Padding(4);
            this->textBox28->Multiline = true;
            this->textBox28->Name = L"textBox28";
            this->textBox28->ReadOnly = true;
            this->textBox28->Size = System::Drawing::Size(1316, 64);
            this->textBox28->TabIndex = 1;
            // 
            // radioButton25
            // 
            this->radioButton25->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->radioButton25->AutoSize = true;
            this->radioButton25->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->radioButton25->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->radioButton25->ForeColor = System::Drawing::Color::Gold;
            this->radioButton25->Location = System::Drawing::Point(17, 290);
            this->radioButton25->Margin = System::Windows::Forms::Padding(4);
            this->radioButton25->Name = L"radioButton25";
            this->radioButton25->Size = System::Drawing::Size(46, 31);
            this->radioButton25->TabIndex = 2;
            this->radioButton25->TabStop = true;
            this->radioButton25->Text = L"d";
            this->radioButton25->UseVisualStyleBackColor = false;
            // 
            // radioButton26
            // 
            this->radioButton26->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->radioButton26->AutoSize = true;
            this->radioButton26->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->radioButton26->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->radioButton26->ForeColor = System::Drawing::Color::Gold;
            this->radioButton26->Location = System::Drawing::Point(17, 76);
            this->radioButton26->Margin = System::Windows::Forms::Padding(4);
            this->radioButton26->Name = L"radioButton26";
            this->radioButton26->Size = System::Drawing::Size(46, 31);
            this->radioButton26->TabIndex = 2;
            this->radioButton26->TabStop = true;
            this->radioButton26->Text = L"a";
            this->radioButton26->UseVisualStyleBackColor = false;
            // 
            // radioButton27
            // 
            this->radioButton27->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->radioButton27->AutoSize = true;
            this->radioButton27->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->radioButton27->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->radioButton27->ForeColor = System::Drawing::Color::Gold;
            this->radioButton27->Location = System::Drawing::Point(16, 143);
            this->radioButton27->Margin = System::Windows::Forms::Padding(4);
            this->radioButton27->Name = L"radioButton27";
            this->radioButton27->Size = System::Drawing::Size(46, 31);
            this->radioButton27->TabIndex = 2;
            this->radioButton27->TabStop = true;
            this->radioButton27->Text = L"b";
            this->radioButton27->UseVisualStyleBackColor = false;
            // 
            // radioButton28
            // 
            this->radioButton28->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->radioButton28->AutoSize = true;
            this->radioButton28->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->radioButton28->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->radioButton28->ForeColor = System::Drawing::Color::Gold;
            this->radioButton28->Location = System::Drawing::Point(16, 218);
            this->radioButton28->Margin = System::Windows::Forms::Padding(4);
            this->radioButton28->Name = L"radioButton28";
            this->radioButton28->Size = System::Drawing::Size(45, 31);
            this->radioButton28->TabIndex = 2;
            this->radioButton28->TabStop = true;
            this->radioButton28->Text = L"c";
            this->radioButton28->UseVisualStyleBackColor = false;
            // 
            // richTextBox7
            // 
            this->richTextBox7->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->richTextBox7->BackColor = System::Drawing::Color::Black;
            this->richTextBox7->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->richTextBox7->Cursor = System::Windows::Forms::Cursors::No;
            this->richTextBox7->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->richTextBox7->ForeColor = System::Drawing::Color::Gold;
            this->richTextBox7->Location = System::Drawing::Point(-54, 3573);
            this->richTextBox7->Margin = System::Windows::Forms::Padding(4);
            this->richTextBox7->Name = L"richTextBox7";
            this->richTextBox7->ReadOnly = true;
            this->richTextBox7->Size = System::Drawing::Size(1443, 223);
            this->richTextBox7->TabIndex = 71;
            this->richTextBox7->Text = L"";
            // 
            // panel8
            // 
            this->panel8->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->panel8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
                static_cast<System::Int32>(static_cast<System::Byte>(54)));
            this->panel8->Controls->Add(this->textBox29);
            this->panel8->Controls->Add(this->textBox30);
            this->panel8->Controls->Add(this->textBox31);
            this->panel8->Controls->Add(this->textBox32);
            this->panel8->Controls->Add(this->radioButton29);
            this->panel8->Controls->Add(this->radioButton30);
            this->panel8->Controls->Add(this->radioButton31);
            this->panel8->Controls->Add(this->radioButton32);
            this->panel8->ForeColor = System::Drawing::SystemColors::Desktop;
            this->panel8->Location = System::Drawing::Point(-54, 4393);
            this->panel8->Margin = System::Windows::Forms::Padding(4);
            this->panel8->Name = L"panel8";
            this->panel8->Size = System::Drawing::Size(1443, 352);
            this->panel8->TabIndex = 74;
            // 
            // textBox29
            // 
            this->textBox29->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->textBox29->BackColor = System::Drawing::Color::Black;
            this->textBox29->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox29->ForeColor = System::Drawing::Color::SpringGreen;
            this->textBox29->Location = System::Drawing::Point(76, 268);
            this->textBox29->Margin = System::Windows::Forms::Padding(4);
            this->textBox29->Multiline = true;
            this->textBox29->Name = L"textBox29";
            this->textBox29->ReadOnly = true;
            this->textBox29->Size = System::Drawing::Size(1316, 64);
            this->textBox29->TabIndex = 1;
            // 
            // textBox30
            // 
            this->textBox30->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->textBox30->BackColor = System::Drawing::Color::Black;
            this->textBox30->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox30->ForeColor = System::Drawing::Color::SpringGreen;
            this->textBox30->Location = System::Drawing::Point(76, 196);
            this->textBox30->Margin = System::Windows::Forms::Padding(4);
            this->textBox30->Multiline = true;
            this->textBox30->Name = L"textBox30";
            this->textBox30->ReadOnly = true;
            this->textBox30->Size = System::Drawing::Size(1316, 64);
            this->textBox30->TabIndex = 1;
            // 
            // textBox31
            // 
            this->textBox31->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->textBox31->BackColor = System::Drawing::Color::Black;
            this->textBox31->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox31->ForeColor = System::Drawing::Color::SpringGreen;
            this->textBox31->Location = System::Drawing::Point(76, 123);
            this->textBox31->Margin = System::Windows::Forms::Padding(4);
            this->textBox31->Multiline = true;
            this->textBox31->Name = L"textBox31";
            this->textBox31->ReadOnly = true;
            this->textBox31->Size = System::Drawing::Size(1316, 64);
            this->textBox31->TabIndex = 1;
            // 
            // textBox32
            // 
            this->textBox32->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->textBox32->BackColor = System::Drawing::Color::Black;
            this->textBox32->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox32->ForeColor = System::Drawing::Color::SpringGreen;
            this->textBox32->Location = System::Drawing::Point(76, 50);
            this->textBox32->Margin = System::Windows::Forms::Padding(4);
            this->textBox32->Multiline = true;
            this->textBox32->Name = L"textBox32";
            this->textBox32->ReadOnly = true;
            this->textBox32->Size = System::Drawing::Size(1316, 64);
            this->textBox32->TabIndex = 1;
            // 
            // radioButton29
            // 
            this->radioButton29->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->radioButton29->AutoSize = true;
            this->radioButton29->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->radioButton29->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->radioButton29->ForeColor = System::Drawing::Color::Gold;
            this->radioButton29->Location = System::Drawing::Point(17, 290);
            this->radioButton29->Margin = System::Windows::Forms::Padding(4);
            this->radioButton29->Name = L"radioButton29";
            this->radioButton29->Size = System::Drawing::Size(46, 31);
            this->radioButton29->TabIndex = 2;
            this->radioButton29->TabStop = true;
            this->radioButton29->Text = L"d";
            this->radioButton29->UseVisualStyleBackColor = false;
            // 
            // radioButton30
            // 
            this->radioButton30->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->radioButton30->AutoSize = true;
            this->radioButton30->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->radioButton30->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->radioButton30->ForeColor = System::Drawing::Color::Gold;
            this->radioButton30->Location = System::Drawing::Point(17, 76);
            this->radioButton30->Margin = System::Windows::Forms::Padding(4);
            this->radioButton30->Name = L"radioButton30";
            this->radioButton30->Size = System::Drawing::Size(46, 31);
            this->radioButton30->TabIndex = 2;
            this->radioButton30->TabStop = true;
            this->radioButton30->Text = L"a";
            this->radioButton30->UseVisualStyleBackColor = false;
            // 
            // radioButton31
            // 
            this->radioButton31->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->radioButton31->AutoSize = true;
            this->radioButton31->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->radioButton31->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->radioButton31->ForeColor = System::Drawing::Color::Gold;
            this->radioButton31->Location = System::Drawing::Point(16, 143);
            this->radioButton31->Margin = System::Windows::Forms::Padding(4);
            this->radioButton31->Name = L"radioButton31";
            this->radioButton31->Size = System::Drawing::Size(46, 31);
            this->radioButton31->TabIndex = 2;
            this->radioButton31->TabStop = true;
            this->radioButton31->Text = L"b";
            this->radioButton31->UseVisualStyleBackColor = false;
            // 
            // radioButton32
            // 
            this->radioButton32->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->radioButton32->AutoSize = true;
            this->radioButton32->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->radioButton32->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->radioButton32->ForeColor = System::Drawing::Color::Gold;
            this->radioButton32->Location = System::Drawing::Point(16, 218);
            this->radioButton32->Margin = System::Windows::Forms::Padding(4);
            this->radioButton32->Name = L"radioButton32";
            this->radioButton32->Size = System::Drawing::Size(45, 31);
            this->radioButton32->TabIndex = 2;
            this->radioButton32->TabStop = true;
            this->radioButton32->Text = L"c";
            this->radioButton32->UseVisualStyleBackColor = false;
            // 
            // richTextBox8
            // 
            this->richTextBox8->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->richTextBox8->BackColor = System::Drawing::Color::Black;
            this->richTextBox8->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->richTextBox8->Cursor = System::Windows::Forms::Cursors::No;
            this->richTextBox8->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->richTextBox8->ForeColor = System::Drawing::Color::Gold;
            this->richTextBox8->Location = System::Drawing::Point(-54, 4162);
            this->richTextBox8->Margin = System::Windows::Forms::Padding(4);
            this->richTextBox8->Name = L"richTextBox8";
            this->richTextBox8->ReadOnly = true;
            this->richTextBox8->Size = System::Drawing::Size(1443, 223);
            this->richTextBox8->TabIndex = 73;
            this->richTextBox8->Text = L"";
            // 
            // panel9
            // 
            this->panel9->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->panel9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
                static_cast<System::Int32>(static_cast<System::Byte>(54)));
            this->panel9->Controls->Add(this->textBox33);
            this->panel9->Controls->Add(this->textBox34);
            this->panel9->Controls->Add(this->textBox35);
            this->panel9->Controls->Add(this->textBox36);
            this->panel9->Controls->Add(this->radioButton33);
            this->panel9->Controls->Add(this->radioButton34);
            this->panel9->Controls->Add(this->radioButton35);
            this->panel9->Controls->Add(this->radioButton36);
            this->panel9->ForeColor = System::Drawing::SystemColors::Desktop;
            this->panel9->Location = System::Drawing::Point(-54, 4982);
            this->panel9->Margin = System::Windows::Forms::Padding(4);
            this->panel9->Name = L"panel9";
            this->panel9->Size = System::Drawing::Size(1443, 352);
            this->panel9->TabIndex = 76;
            // 
            // textBox33
            // 
            this->textBox33->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->textBox33->BackColor = System::Drawing::Color::Black;
            this->textBox33->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox33->ForeColor = System::Drawing::Color::SpringGreen;
            this->textBox33->Location = System::Drawing::Point(76, 268);
            this->textBox33->Margin = System::Windows::Forms::Padding(4);
            this->textBox33->Multiline = true;
            this->textBox33->Name = L"textBox33";
            this->textBox33->ReadOnly = true;
            this->textBox33->Size = System::Drawing::Size(1316, 64);
            this->textBox33->TabIndex = 1;
            // 
            // textBox34
            // 
            this->textBox34->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->textBox34->BackColor = System::Drawing::Color::Black;
            this->textBox34->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox34->ForeColor = System::Drawing::Color::SpringGreen;
            this->textBox34->Location = System::Drawing::Point(76, 196);
            this->textBox34->Margin = System::Windows::Forms::Padding(4);
            this->textBox34->Multiline = true;
            this->textBox34->Name = L"textBox34";
            this->textBox34->ReadOnly = true;
            this->textBox34->Size = System::Drawing::Size(1316, 64);
            this->textBox34->TabIndex = 1;
            // 
            // textBox35
            // 
            this->textBox35->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->textBox35->BackColor = System::Drawing::Color::Black;
            this->textBox35->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox35->ForeColor = System::Drawing::Color::SpringGreen;
            this->textBox35->Location = System::Drawing::Point(76, 123);
            this->textBox35->Margin = System::Windows::Forms::Padding(4);
            this->textBox35->Multiline = true;
            this->textBox35->Name = L"textBox35";
            this->textBox35->ReadOnly = true;
            this->textBox35->Size = System::Drawing::Size(1316, 64);
            this->textBox35->TabIndex = 1;
            // 
            // textBox36
            // 
            this->textBox36->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->textBox36->BackColor = System::Drawing::Color::Black;
            this->textBox36->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox36->ForeColor = System::Drawing::Color::SpringGreen;
            this->textBox36->Location = System::Drawing::Point(76, 50);
            this->textBox36->Margin = System::Windows::Forms::Padding(4);
            this->textBox36->Multiline = true;
            this->textBox36->Name = L"textBox36";
            this->textBox36->ReadOnly = true;
            this->textBox36->Size = System::Drawing::Size(1316, 64);
            this->textBox36->TabIndex = 1;
            // 
            // radioButton33
            // 
            this->radioButton33->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->radioButton33->AutoSize = true;
            this->radioButton33->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->radioButton33->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->radioButton33->ForeColor = System::Drawing::Color::Gold;
            this->radioButton33->Location = System::Drawing::Point(17, 290);
            this->radioButton33->Margin = System::Windows::Forms::Padding(4);
            this->radioButton33->Name = L"radioButton33";
            this->radioButton33->Size = System::Drawing::Size(46, 31);
            this->radioButton33->TabIndex = 2;
            this->radioButton33->TabStop = true;
            this->radioButton33->Text = L"d";
            this->radioButton33->UseVisualStyleBackColor = false;
            // 
            // radioButton34
            // 
            this->radioButton34->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->radioButton34->AutoSize = true;
            this->radioButton34->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->radioButton34->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->radioButton34->ForeColor = System::Drawing::Color::Gold;
            this->radioButton34->Location = System::Drawing::Point(17, 76);
            this->radioButton34->Margin = System::Windows::Forms::Padding(4);
            this->radioButton34->Name = L"radioButton34";
            this->radioButton34->Size = System::Drawing::Size(46, 31);
            this->radioButton34->TabIndex = 2;
            this->radioButton34->TabStop = true;
            this->radioButton34->Text = L"a";
            this->radioButton34->UseVisualStyleBackColor = false;
            // 
            // radioButton35
            // 
            this->radioButton35->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->radioButton35->AutoSize = true;
            this->radioButton35->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->radioButton35->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->radioButton35->ForeColor = System::Drawing::Color::Gold;
            this->radioButton35->Location = System::Drawing::Point(16, 143);
            this->radioButton35->Margin = System::Windows::Forms::Padding(4);
            this->radioButton35->Name = L"radioButton35";
            this->radioButton35->Size = System::Drawing::Size(46, 31);
            this->radioButton35->TabIndex = 2;
            this->radioButton35->TabStop = true;
            this->radioButton35->Text = L"b";
            this->radioButton35->UseVisualStyleBackColor = false;
            // 
            // radioButton36
            // 
            this->radioButton36->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->radioButton36->AutoSize = true;
            this->radioButton36->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->radioButton36->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->radioButton36->ForeColor = System::Drawing::Color::Gold;
            this->radioButton36->Location = System::Drawing::Point(16, 218);
            this->radioButton36->Margin = System::Windows::Forms::Padding(4);
            this->radioButton36->Name = L"radioButton36";
            this->radioButton36->Size = System::Drawing::Size(45, 31);
            this->radioButton36->TabIndex = 2;
            this->radioButton36->TabStop = true;
            this->radioButton36->Text = L"c";
            this->radioButton36->UseVisualStyleBackColor = false;
            // 
            // richTextBox9
            // 
            this->richTextBox9->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->richTextBox9->BackColor = System::Drawing::Color::Black;
            this->richTextBox9->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->richTextBox9->Cursor = System::Windows::Forms::Cursors::No;
            this->richTextBox9->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->richTextBox9->ForeColor = System::Drawing::Color::Gold;
            this->richTextBox9->Location = System::Drawing::Point(-54, 4752);
            this->richTextBox9->Margin = System::Windows::Forms::Padding(4);
            this->richTextBox9->Name = L"richTextBox9";
            this->richTextBox9->ReadOnly = true;
            this->richTextBox9->Size = System::Drawing::Size(1443, 223);
            this->richTextBox9->TabIndex = 75;
            this->richTextBox9->Text = L"";
            // 
            // panel10
            // 
            this->panel10->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->panel10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
                static_cast<System::Int32>(static_cast<System::Byte>(54)));
            this->panel10->Controls->Add(this->textBox37);
            this->panel10->Controls->Add(this->textBox38);
            this->panel10->Controls->Add(this->textBox39);
            this->panel10->Controls->Add(this->textBox40);
            this->panel10->Controls->Add(this->radioButton37);
            this->panel10->Controls->Add(this->radioButton38);
            this->panel10->Controls->Add(this->radioButton39);
            this->panel10->Controls->Add(this->radioButton40);
            this->panel10->ForeColor = System::Drawing::SystemColors::Desktop;
            this->panel10->Location = System::Drawing::Point(-54, 5572);
            this->panel10->Margin = System::Windows::Forms::Padding(4);
            this->panel10->Name = L"panel10";
            this->panel10->Size = System::Drawing::Size(1443, 352);
            this->panel10->TabIndex = 78;
            // 
            // textBox37
            // 
            this->textBox37->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->textBox37->BackColor = System::Drawing::Color::Black;
            this->textBox37->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox37->ForeColor = System::Drawing::Color::SpringGreen;
            this->textBox37->Location = System::Drawing::Point(76, 268);
            this->textBox37->Margin = System::Windows::Forms::Padding(4);
            this->textBox37->Multiline = true;
            this->textBox37->Name = L"textBox37";
            this->textBox37->ReadOnly = true;
            this->textBox37->Size = System::Drawing::Size(1316, 64);
            this->textBox37->TabIndex = 1;
            // 
            // textBox38
            // 
            this->textBox38->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->textBox38->BackColor = System::Drawing::Color::Black;
            this->textBox38->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox38->ForeColor = System::Drawing::Color::SpringGreen;
            this->textBox38->Location = System::Drawing::Point(76, 196);
            this->textBox38->Margin = System::Windows::Forms::Padding(4);
            this->textBox38->Multiline = true;
            this->textBox38->Name = L"textBox38";
            this->textBox38->ReadOnly = true;
            this->textBox38->Size = System::Drawing::Size(1316, 64);
            this->textBox38->TabIndex = 1;
            // 
            // textBox39
            // 
            this->textBox39->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->textBox39->BackColor = System::Drawing::Color::Black;
            this->textBox39->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox39->ForeColor = System::Drawing::Color::SpringGreen;
            this->textBox39->Location = System::Drawing::Point(76, 123);
            this->textBox39->Margin = System::Windows::Forms::Padding(4);
            this->textBox39->Multiline = true;
            this->textBox39->Name = L"textBox39";
            this->textBox39->ReadOnly = true;
            this->textBox39->Size = System::Drawing::Size(1316, 64);
            this->textBox39->TabIndex = 1;
            // 
            // textBox40
            // 
            this->textBox40->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->textBox40->BackColor = System::Drawing::Color::Black;
            this->textBox40->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox40->ForeColor = System::Drawing::Color::SpringGreen;
            this->textBox40->Location = System::Drawing::Point(76, 50);
            this->textBox40->Margin = System::Windows::Forms::Padding(4);
            this->textBox40->Multiline = true;
            this->textBox40->Name = L"textBox40";
            this->textBox40->ReadOnly = true;
            this->textBox40->Size = System::Drawing::Size(1316, 64);
            this->textBox40->TabIndex = 1;
            // 
            // radioButton37
            // 
            this->radioButton37->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->radioButton37->AutoSize = true;
            this->radioButton37->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->radioButton37->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->radioButton37->ForeColor = System::Drawing::Color::Gold;
            this->radioButton37->Location = System::Drawing::Point(17, 290);
            this->radioButton37->Margin = System::Windows::Forms::Padding(4);
            this->radioButton37->Name = L"radioButton37";
            this->radioButton37->Size = System::Drawing::Size(46, 31);
            this->radioButton37->TabIndex = 2;
            this->radioButton37->TabStop = true;
            this->radioButton37->Text = L"d";
            this->radioButton37->UseVisualStyleBackColor = false;
            // 
            // radioButton38
            // 
            this->radioButton38->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->radioButton38->AutoSize = true;
            this->radioButton38->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->radioButton38->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->radioButton38->ForeColor = System::Drawing::Color::Gold;
            this->radioButton38->Location = System::Drawing::Point(17, 76);
            this->radioButton38->Margin = System::Windows::Forms::Padding(4);
            this->radioButton38->Name = L"radioButton38";
            this->radioButton38->Size = System::Drawing::Size(46, 31);
            this->radioButton38->TabIndex = 2;
            this->radioButton38->TabStop = true;
            this->radioButton38->Text = L"a";
            this->radioButton38->UseVisualStyleBackColor = false;
            // 
            // radioButton39
            // 
            this->radioButton39->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->radioButton39->AutoSize = true;
            this->radioButton39->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->radioButton39->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->radioButton39->ForeColor = System::Drawing::Color::Gold;
            this->radioButton39->Location = System::Drawing::Point(16, 143);
            this->radioButton39->Margin = System::Windows::Forms::Padding(4);
            this->radioButton39->Name = L"radioButton39";
            this->radioButton39->Size = System::Drawing::Size(46, 31);
            this->radioButton39->TabIndex = 2;
            this->radioButton39->TabStop = true;
            this->radioButton39->Text = L"b";
            this->radioButton39->UseVisualStyleBackColor = false;
            // 
            // radioButton40
            // 
            this->radioButton40->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->radioButton40->AutoSize = true;
            this->radioButton40->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->radioButton40->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->radioButton40->ForeColor = System::Drawing::Color::Gold;
            this->radioButton40->Location = System::Drawing::Point(16, 218);
            this->radioButton40->Margin = System::Windows::Forms::Padding(4);
            this->radioButton40->Name = L"radioButton40";
            this->radioButton40->Size = System::Drawing::Size(45, 31);
            this->radioButton40->TabIndex = 2;
            this->radioButton40->TabStop = true;
            this->radioButton40->Text = L"c";
            this->radioButton40->UseVisualStyleBackColor = false;
            // 
            // richTextBox10
            // 
            this->richTextBox10->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->richTextBox10->BackColor = System::Drawing::Color::Black;
            this->richTextBox10->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->richTextBox10->Cursor = System::Windows::Forms::Cursors::No;
            this->richTextBox10->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->richTextBox10->ForeColor = System::Drawing::Color::Gold;
            this->richTextBox10->Location = System::Drawing::Point(-54, 5342);
            this->richTextBox10->Margin = System::Windows::Forms::Padding(4);
            this->richTextBox10->Name = L"richTextBox10";
            this->richTextBox10->ReadOnly = true;
            this->richTextBox10->Size = System::Drawing::Size(1443, 223);
            this->richTextBox10->TabIndex = 77;
            this->richTextBox10->Text = L"";
            // 
            // pictureBox3
            // 
            this->pictureBox3->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->pictureBox3->Cursor = System::Windows::Forms::Cursors::Hand;
            this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
            this->pictureBox3->Location = System::Drawing::Point(1661, 4);
            this->pictureBox3->Margin = System::Windows::Forms::Padding(4);
            this->pictureBox3->Name = L"pictureBox3";
            this->pictureBox3->Size = System::Drawing::Size(32, 25);
            this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox3->TabIndex = 79;
            this->pictureBox3->TabStop = false;
            this->pictureBox3->Click += gcnew System::EventHandler(this, &Startpage::pictureBox3_Click);
            // 
            // Startpage
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->AutoScroll = true;
            this->AutoScrollMinSize = System::Drawing::Size(665, 4900);
            this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
                static_cast<System::Int32>(static_cast<System::Byte>(54)));
            this->ClientSize = System::Drawing::Size(1953, 964);
            this->Controls->Add(this->pictureBox3);
            this->Controls->Add(this->panel10);
            this->Controls->Add(this->richTextBox10);
            this->Controls->Add(this->panel9);
            this->Controls->Add(this->richTextBox9);
            this->Controls->Add(this->panel8);
            this->Controls->Add(this->richTextBox8);
            this->Controls->Add(this->panel7);
            this->Controls->Add(this->richTextBox7);
            this->Controls->Add(this->panel6);
            this->Controls->Add(this->richTextBox6);
            this->Controls->Add(this->panel5);
            this->Controls->Add(this->richTextBox5);
            this->Controls->Add(this->panel4);
            this->Controls->Add(this->richTextBox4);
            this->Controls->Add(this->panel3);
            this->Controls->Add(this->richTextBox3);
            this->Controls->Add(this->panel2);
            this->Controls->Add(this->richTextBox1);
            this->Controls->Add(this->button2);
            this->Controls->Add(this->button1);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->label1);
            this->Controls->Add(this->panel1);
            this->Controls->Add(this->rtbQuesitionDisplay);
            this->Controls->Add(this->textBox41);
            this->ForeColor = System::Drawing::Color::Gold;
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
            this->Margin = System::Windows::Forms::Padding(4);
            this->Name = L"Startpage";
            this->Text = L"Ultimate Entrance Cracker";
            this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
            this->Load += gcnew System::EventHandler(this, &Startpage::Startpage_Load);
            this->panel1->ResumeLayout(false);
            this->panel1->PerformLayout();
            this->panel2->ResumeLayout(false);
            this->panel2->PerformLayout();
            this->panel3->ResumeLayout(false);
            this->panel3->PerformLayout();
            this->panel4->ResumeLayout(false);
            this->panel4->PerformLayout();
            this->panel5->ResumeLayout(false);
            this->panel5->PerformLayout();
            this->panel6->ResumeLayout(false);
            this->panel6->PerformLayout();
            this->panel7->ResumeLayout(false);
            this->panel7->PerformLayout();
            this->panel8->ResumeLayout(false);
            this->panel8->PerformLayout();
            this->panel9->ResumeLayout(false);
            this->panel9->PerformLayout();
            this->panel10->ResumeLayout(false);
            this->panel10->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion







private: System::Void Startpage_Load(System::Object^ sender, System::EventArgs^ e) {
	timer1->Start();
}
	   int timeleft = 7200;
	   int hr, min, sec;
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
	if (timeleft > 0)
	{
		timeleft = timeleft - 1;
        if (timeleft % 2 == 0) {
            this->label2->ForeColor = System::Drawing::Color::Gold;
            this->label1->ForeColor = System::Drawing::Color::Gold;
            this->label1->Location = System::Drawing::Point(1150, 33);
            this->label2->Location = System::Drawing::Point(1167, 72);
            this->textBox41->Location = System::Drawing::Point(1141, 29);

        }
        else {
            this->label2->ForeColor = System::Drawing::Color::Turquoise;
            this->label1->ForeColor = System::Drawing::Color::Turquoise;
            this->label1->Location = System::Drawing::Point(1150, 33);
            this->label2->Location = System::Drawing::Point(1167, 72);
            this->textBox41->Location = System::Drawing::Point(1141, 29);





           



        }
		hr = timeleft / 3600;
		sec = timeleft % 3600;
		min = sec / 60;
		sec = sec % 60;
		label2->Text = hr + ":" + min + ":" + sec;

	}
	else {
		timer1->Stop();
		MessageBox::Show("Your time is up!!");
	}
}



private: System::Void pictureBox3_Click(System::Object^ sender, System::EventArgs^ e) {
    this->Close();
}
public: Question^ question_list = null_ptr;
private: System::Void richTextBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void rdbB_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void rdbC_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void rdbD_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
