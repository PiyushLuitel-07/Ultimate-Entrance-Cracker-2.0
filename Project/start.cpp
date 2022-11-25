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
    /// Summary for Startpage
    /// </summary>
    public ref class Startpage : public System::Windows::Forms::Form
    {
    public:
        Startpage(void)
        {
            InitializeComponent();
            static int score;
            Question^ question_list = nullptr;

            //
            //TODO: Add the constructor code here
            //
            try {

                //connectSQL(question_list);
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
                rtbQuestionDisplay->Text = question_list->question;
                tbOptnA->Text = question_list->Option_a;
                tbOptnB->Text = question_list->Option_b;
                tbOptnC->Text = question_list->Option_c;
                tbOptnD->Text = question_list->Option_d;

                //connectSQL(question_list);
                if (reader->Read()) {
                    question_list = gcnew Question;
                    question_list->question = reader->GetString(1);
                    question_list->Option_a = reader->GetString(2);
                    question_list->Option_b = reader->GetString(3);
                    question_list->Option_c = reader->GetString(4);
                    question_list->Option_d = reader->GetString(5);
                    question_list->Correct_optn = reader->GetString(6);
                }
                rtbQuestionDisplay2->Text = question_list->question;
                tbOptnA2->Text = question_list->Option_a;
                tbOptnB2->Text = question_list->Option_b;
                tbOptnC2->Text = question_list->Option_c;
                tbOptnD2->Text = question_list->Option_d;

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


    private: System::Windows::Forms::RadioButton^ radioButton4;
    private: System::Windows::Forms::RadioButton^ radioButton3;
    private: System::Windows::Forms::RadioButton^ radioButton2;
    private: System::Windows::Forms::RadioButton^ radioButton1;
    private: System::Windows::Forms::TextBox^ tbOptnB;




    private: System::Windows::Forms::Panel^ panel1;
    private: System::Windows::Forms::RichTextBox^ rtbQuestionDisplay;








    private: System::Windows::Forms::TextBox^ tbOptnD;





    private: System::Windows::Forms::TextBox^ tbOptnC;

    private: System::Windows::Forms::TextBox^ tbOptnA;
    private: System::Windows::Forms::Label^ lb3;














private: System::Windows::Forms::Timer^ timer1;
private: System::Windows::Forms::Label^ label3;
private: System::Windows::Forms::RichTextBox^ rtbQuestionDisplay2;
private: System::Windows::Forms::Panel^ panel2;
private: System::Windows::Forms::TextBox^ tbOptnD2;
private: System::Windows::Forms::TextBox^ tbOptnC2;
private: System::Windows::Forms::TextBox^ tbOptnA2;
private: System::Windows::Forms::TextBox^ tbOptnB2;
private: System::Windows::Forms::RadioButton^ radioButton5;
private: System::Windows::Forms::RadioButton^ radioButton6;
private: System::Windows::Forms::RadioButton^ radioButton7;
private: System::Windows::Forms::RadioButton^ radioButton8;
private: System::Windows::Forms::RichTextBox^ rtbQuestionDisplay3;
private: System::Windows::Forms::Panel^ panel3;
private: System::Windows::Forms::TextBox^ textBox5;
private: System::Windows::Forms::TextBox^ textBox6;
private: System::Windows::Forms::TextBox^ tbOptnA3;
private: System::Windows::Forms::TextBox^ textBox8;
private: System::Windows::Forms::RadioButton^ radioButton9;
private: System::Windows::Forms::RadioButton^ radioButton10;
private: System::Windows::Forms::RadioButton^ radioButton11;
private: System::Windows::Forms::RadioButton^ radioButton12;
private: System::Windows::Forms::RichTextBox^ rtbQuestionDisplay4;
private: System::Windows::Forms::Panel^ panel4;
private: System::Windows::Forms::TextBox^ textBox9;
private: System::Windows::Forms::TextBox^ textBox10;
private: System::Windows::Forms::TextBox^ tbOptnA4;
private: System::Windows::Forms::TextBox^ textBox12;
private: System::Windows::Forms::RadioButton^ radioButton13;
private: System::Windows::Forms::RadioButton^ radioButton14;
private: System::Windows::Forms::RadioButton^ radioButton15;
private: System::Windows::Forms::RadioButton^ radioButton16;
private: System::Windows::Forms::RichTextBox^ rtbQuestionDisplay5;
private: System::Windows::Forms::Panel^ panel5;
private: System::Windows::Forms::TextBox^ textBox13;
private: System::Windows::Forms::TextBox^ textBox14;
private: System::Windows::Forms::TextBox^ tbOptnA5;
private: System::Windows::Forms::TextBox^ textBox16;
private: System::Windows::Forms::RadioButton^ radioButton17;
private: System::Windows::Forms::RadioButton^ radioButton18;
private: System::Windows::Forms::RadioButton^ radioButton19;
private: System::Windows::Forms::RadioButton^ radioButton20;
private: System::Windows::Forms::RichTextBox^ rtbQuestionDisplay6;
private: System::Windows::Forms::Panel^ panel6;
private: System::Windows::Forms::TextBox^ textBox17;
private: System::Windows::Forms::TextBox^ textBox18;
private: System::Windows::Forms::TextBox^ tbOptnA6;
private: System::Windows::Forms::TextBox^ textBox20;
private: System::Windows::Forms::RadioButton^ radioButton21;
private: System::Windows::Forms::RadioButton^ radioButton22;
private: System::Windows::Forms::RadioButton^ radioButton23;
private: System::Windows::Forms::RadioButton^ radioButton24;
private: System::Windows::Forms::RichTextBox^ tbOptnA8;
private: System::Windows::Forms::Panel^ panel7;
private: System::Windows::Forms::TextBox^ textBox21;
private: System::Windows::Forms::TextBox^ textBox22;
private: System::Windows::Forms::TextBox^ textBox23;
private: System::Windows::Forms::TextBox^ textBox24;
private: System::Windows::Forms::RadioButton^ radioButton25;
private: System::Windows::Forms::RadioButton^ radioButton26;
private: System::Windows::Forms::RadioButton^ radioButton27;
private: System::Windows::Forms::RadioButton^ radioButton28;
private: System::Windows::Forms::RichTextBox^ rtbQuestionDisplay8;
private: System::Windows::Forms::RadioButton^ radioButton32;
private: System::Windows::Forms::RadioButton^ radioButton31;
private: System::Windows::Forms::RadioButton^ radioButton30;
private: System::Windows::Forms::RadioButton^ radioButton29;
private: System::Windows::Forms::TextBox^ textBox28;
private: System::Windows::Forms::TextBox^ textBox27;
private: System::Windows::Forms::TextBox^ textBox26;
private: System::Windows::Forms::TextBox^ textBox25;
private: System::Windows::Forms::Panel^ panel8;

private: System::Windows::Forms::RichTextBox^ rtbQuestionDisplay9;

private: System::Windows::Forms::Panel^ panel10;
private: System::Windows::Forms::TextBox^ textBox1;
private: System::Windows::Forms::TextBox^ textBox2;
private: System::Windows::Forms::TextBox^ textBox3;
private: System::Windows::Forms::TextBox^ textBox4;
private: System::Windows::Forms::RadioButton^ radioButton33;
private: System::Windows::Forms::RadioButton^ radioButton34;
private: System::Windows::Forms::RadioButton^ radioButton35;
private: System::Windows::Forms::RadioButton^ radioButton36;
private: System::Windows::Forms::RichTextBox^ richTextBox2;
private: System::Windows::Forms::Panel^ panel11;
private: System::Windows::Forms::TextBox^ textBox7;
private: System::Windows::Forms::TextBox^ textBox11;
private: System::Windows::Forms::TextBox^ textBox15;
private: System::Windows::Forms::TextBox^ textBox19;
private: System::Windows::Forms::RadioButton^ radioButton37;
private: System::Windows::Forms::RadioButton^ radioButton38;
private: System::Windows::Forms::RadioButton^ radioButton39;
private: System::Windows::Forms::RadioButton^ radioButton40;
private: System::Windows::Forms::Panel^ panel12;































































































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
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->button2 = (gcnew System::Windows::Forms::Button());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
            this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
            this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
            this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
            this->tbOptnB = (gcnew System::Windows::Forms::TextBox());
            this->panel1 = (gcnew System::Windows::Forms::Panel());
            this->tbOptnD = (gcnew System::Windows::Forms::TextBox());
            this->tbOptnC = (gcnew System::Windows::Forms::TextBox());
            this->tbOptnA = (gcnew System::Windows::Forms::TextBox());
            this->rtbQuestionDisplay = (gcnew System::Windows::Forms::RichTextBox());
            this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
            this->lb3 = (gcnew System::Windows::Forms::Label());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->rtbQuestionDisplay2 = (gcnew System::Windows::Forms::RichTextBox());
            this->panel2 = (gcnew System::Windows::Forms::Panel());
            this->tbOptnD2 = (gcnew System::Windows::Forms::TextBox());
            this->tbOptnC2 = (gcnew System::Windows::Forms::TextBox());
            this->tbOptnA2 = (gcnew System::Windows::Forms::TextBox());
            this->tbOptnB2 = (gcnew System::Windows::Forms::TextBox());
            this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
            this->radioButton6 = (gcnew System::Windows::Forms::RadioButton());
            this->radioButton7 = (gcnew System::Windows::Forms::RadioButton());
            this->radioButton8 = (gcnew System::Windows::Forms::RadioButton());
            this->rtbQuestionDisplay3 = (gcnew System::Windows::Forms::RichTextBox());
            this->panel3 = (gcnew System::Windows::Forms::Panel());
            this->textBox5 = (gcnew System::Windows::Forms::TextBox());
            this->textBox6 = (gcnew System::Windows::Forms::TextBox());
            this->tbOptnA3 = (gcnew System::Windows::Forms::TextBox());
            this->textBox8 = (gcnew System::Windows::Forms::TextBox());
            this->radioButton9 = (gcnew System::Windows::Forms::RadioButton());
            this->radioButton10 = (gcnew System::Windows::Forms::RadioButton());
            this->radioButton11 = (gcnew System::Windows::Forms::RadioButton());
            this->radioButton12 = (gcnew System::Windows::Forms::RadioButton());
            this->rtbQuestionDisplay4 = (gcnew System::Windows::Forms::RichTextBox());
            this->panel4 = (gcnew System::Windows::Forms::Panel());
            this->textBox9 = (gcnew System::Windows::Forms::TextBox());
            this->textBox10 = (gcnew System::Windows::Forms::TextBox());
            this->tbOptnA4 = (gcnew System::Windows::Forms::TextBox());
            this->textBox12 = (gcnew System::Windows::Forms::TextBox());
            this->radioButton13 = (gcnew System::Windows::Forms::RadioButton());
            this->radioButton14 = (gcnew System::Windows::Forms::RadioButton());
            this->radioButton15 = (gcnew System::Windows::Forms::RadioButton());
            this->radioButton16 = (gcnew System::Windows::Forms::RadioButton());
            this->rtbQuestionDisplay5 = (gcnew System::Windows::Forms::RichTextBox());
            this->panel5 = (gcnew System::Windows::Forms::Panel());
            this->textBox13 = (gcnew System::Windows::Forms::TextBox());
            this->textBox14 = (gcnew System::Windows::Forms::TextBox());
            this->tbOptnA5 = (gcnew System::Windows::Forms::TextBox());
            this->textBox16 = (gcnew System::Windows::Forms::TextBox());
            this->radioButton17 = (gcnew System::Windows::Forms::RadioButton());
            this->radioButton18 = (gcnew System::Windows::Forms::RadioButton());
            this->radioButton19 = (gcnew System::Windows::Forms::RadioButton());
            this->radioButton20 = (gcnew System::Windows::Forms::RadioButton());
            this->rtbQuestionDisplay6 = (gcnew System::Windows::Forms::RichTextBox());
            this->panel6 = (gcnew System::Windows::Forms::Panel());
            this->textBox17 = (gcnew System::Windows::Forms::TextBox());
            this->textBox18 = (gcnew System::Windows::Forms::TextBox());
            this->tbOptnA6 = (gcnew System::Windows::Forms::TextBox());
            this->textBox20 = (gcnew System::Windows::Forms::TextBox());
            this->radioButton21 = (gcnew System::Windows::Forms::RadioButton());
            this->radioButton22 = (gcnew System::Windows::Forms::RadioButton());
            this->radioButton23 = (gcnew System::Windows::Forms::RadioButton());
            this->radioButton24 = (gcnew System::Windows::Forms::RadioButton());
            this->tbOptnA8 = (gcnew System::Windows::Forms::RichTextBox());
            this->panel7 = (gcnew System::Windows::Forms::Panel());
            this->textBox21 = (gcnew System::Windows::Forms::TextBox());
            this->textBox22 = (gcnew System::Windows::Forms::TextBox());
            this->textBox23 = (gcnew System::Windows::Forms::TextBox());
            this->textBox24 = (gcnew System::Windows::Forms::TextBox());
            this->radioButton25 = (gcnew System::Windows::Forms::RadioButton());
            this->radioButton26 = (gcnew System::Windows::Forms::RadioButton());
            this->radioButton27 = (gcnew System::Windows::Forms::RadioButton());
            this->radioButton28 = (gcnew System::Windows::Forms::RadioButton());
            this->rtbQuestionDisplay8 = (gcnew System::Windows::Forms::RichTextBox());
            this->radioButton32 = (gcnew System::Windows::Forms::RadioButton());
            this->radioButton31 = (gcnew System::Windows::Forms::RadioButton());
            this->radioButton30 = (gcnew System::Windows::Forms::RadioButton());
            this->radioButton29 = (gcnew System::Windows::Forms::RadioButton());
            this->textBox28 = (gcnew System::Windows::Forms::TextBox());
            this->textBox27 = (gcnew System::Windows::Forms::TextBox());
            this->textBox26 = (gcnew System::Windows::Forms::TextBox());
            this->textBox25 = (gcnew System::Windows::Forms::TextBox());
            this->panel8 = (gcnew System::Windows::Forms::Panel());
            this->rtbQuestionDisplay9 = (gcnew System::Windows::Forms::RichTextBox());
            this->panel10 = (gcnew System::Windows::Forms::Panel());
            this->textBox1 = (gcnew System::Windows::Forms::TextBox());
            this->textBox2 = (gcnew System::Windows::Forms::TextBox());
            this->textBox3 = (gcnew System::Windows::Forms::TextBox());
            this->textBox4 = (gcnew System::Windows::Forms::TextBox());
            this->radioButton33 = (gcnew System::Windows::Forms::RadioButton());
            this->radioButton34 = (gcnew System::Windows::Forms::RadioButton());
            this->radioButton35 = (gcnew System::Windows::Forms::RadioButton());
            this->radioButton36 = (gcnew System::Windows::Forms::RadioButton());
            this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
            this->panel11 = (gcnew System::Windows::Forms::Panel());
            this->textBox7 = (gcnew System::Windows::Forms::TextBox());
            this->textBox11 = (gcnew System::Windows::Forms::TextBox());
            this->textBox15 = (gcnew System::Windows::Forms::TextBox());
            this->textBox19 = (gcnew System::Windows::Forms::TextBox());
            this->radioButton37 = (gcnew System::Windows::Forms::RadioButton());
            this->radioButton38 = (gcnew System::Windows::Forms::RadioButton());
            this->radioButton39 = (gcnew System::Windows::Forms::RadioButton());
            this->radioButton40 = (gcnew System::Windows::Forms::RadioButton());
            this->panel12 = (gcnew System::Windows::Forms::Panel());
            this->panel1->SuspendLayout();
            this->panel2->SuspendLayout();
            this->panel3->SuspendLayout();
            this->panel4->SuspendLayout();
            this->panel5->SuspendLayout();
            this->panel6->SuspendLayout();
            this->panel7->SuspendLayout();
            this->panel8->SuspendLayout();
            this->panel10->SuspendLayout();
            this->panel11->SuspendLayout();
            this->SuspendLayout();
            // 
            // label1
            // 
            this->label1->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label1->AutoSize = true;
            this->label1->BackColor = System::Drawing::Color::Transparent;
            this->label1->Font = (gcnew System::Drawing::Font(L"Calibri Light", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label1->ForeColor = System::Drawing::Color::Gold;
            this->label1->Location = System::Drawing::Point(1519, 151);
            this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(248, 41);
            this->label1->TabIndex = 4;
            this->label1->Text = L"Time Remaining:";
            // 
            // label2
            // 
            this->label2->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label2->AutoSize = true;
            this->label2->BackColor = System::Drawing::Color::Transparent;
            this->label2->Font = (gcnew System::Drawing::Font(L"Calibri Light", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label2->ForeColor = System::Drawing::Color::Gold;
            this->label2->Location = System::Drawing::Point(1759, 151);
            this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(121, 41);
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
            this->button2->Location = System::Drawing::Point(1182, 6386);
            this->button2->Margin = System::Windows::Forms::Padding(4);
            this->button2->Name = L"button2";
            this->button2->Size = System::Drawing::Size(340, 85);
            this->button2->TabIndex = 58;
            this->button2->Text = L"Cancel";
            this->button2->UseVisualStyleBackColor = false;
            this->button2->Click += gcnew System::EventHandler(this, &Startpage::button2_Click);
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
            this->button1->Location = System::Drawing::Point(834, 6386);
            this->button1->Margin = System::Windows::Forms::Padding(4);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(340, 85);
            this->button1->TabIndex = 58;
            this->button1->Text = L"Next";
            this->button1->UseVisualStyleBackColor = false;
            this->button1->Click += gcnew System::EventHandler(this, &Startpage::button1_Click);
            // 
            // radioButton4
            // 
            this->radioButton4->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->radioButton4->AutoSize = true;
            this->radioButton4->BackColor = System::Drawing::Color::Transparent;
            this->radioButton4->Cursor = System::Windows::Forms::Cursors::Hand;
            this->radioButton4->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->radioButton4->ForeColor = System::Drawing::Color::Gold;
            this->radioButton4->Location = System::Drawing::Point(174, 205);
            this->radioButton4->Margin = System::Windows::Forms::Padding(4);
            this->radioButton4->Name = L"radioButton4";
            this->radioButton4->Size = System::Drawing::Size(45, 31);
            this->radioButton4->TabIndex = 2;
            this->radioButton4->TabStop = true;
            this->radioButton4->Text = L"c";
            this->radioButton4->UseVisualStyleBackColor = false;
            // 
            // radioButton3
            // 
            this->radioButton3->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->radioButton3->AutoSize = true;
            this->radioButton3->BackColor = System::Drawing::Color::Transparent;
            this->radioButton3->Cursor = System::Windows::Forms::Cursors::Hand;
            this->radioButton3->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->radioButton3->ForeColor = System::Drawing::Color::Gold;
            this->radioButton3->Location = System::Drawing::Point(174, 129);
            this->radioButton3->Margin = System::Windows::Forms::Padding(4);
            this->radioButton3->Name = L"radioButton3";
            this->radioButton3->Size = System::Drawing::Size(46, 31);
            this->radioButton3->TabIndex = 2;
            this->radioButton3->TabStop = true;
            this->radioButton3->Text = L"b";
            this->radioButton3->UseVisualStyleBackColor = false;
            // 
            // radioButton2
            // 
            this->radioButton2->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->radioButton2->AutoSize = true;
            this->radioButton2->BackColor = System::Drawing::Color::Transparent;
            this->radioButton2->Cursor = System::Windows::Forms::Cursors::Hand;
            this->radioButton2->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->radioButton2->ForeColor = System::Drawing::Color::Gold;
            this->radioButton2->Location = System::Drawing::Point(175, 54);
            this->radioButton2->Margin = System::Windows::Forms::Padding(4);
            this->radioButton2->Name = L"radioButton2";
            this->radioButton2->Size = System::Drawing::Size(46, 31);
            this->radioButton2->TabIndex = 2;
            this->radioButton2->TabStop = true;
            this->radioButton2->Text = L"a";
            this->radioButton2->UseVisualStyleBackColor = false;
            this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &Startpage::radioButton2_CheckedChanged);
            // 
            // radioButton1
            // 
            this->radioButton1->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->radioButton1->AutoSize = true;
            this->radioButton1->BackColor = System::Drawing::Color::Transparent;
            this->radioButton1->Cursor = System::Windows::Forms::Cursors::Hand;
            this->radioButton1->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->radioButton1->ForeColor = System::Drawing::Color::Gold;
            this->radioButton1->Location = System::Drawing::Point(175, 283);
            this->radioButton1->Margin = System::Windows::Forms::Padding(4);
            this->radioButton1->Name = L"radioButton1";
            this->radioButton1->Size = System::Drawing::Size(46, 31);
            this->radioButton1->TabIndex = 2;
            this->radioButton1->TabStop = true;
            this->radioButton1->Text = L"d";
            this->radioButton1->UseVisualStyleBackColor = false;
            // 
            // tbOptnB
            // 
            this->tbOptnB->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->tbOptnB->BackColor = System::Drawing::Color::Gray;
            this->tbOptnB->Cursor = System::Windows::Forms::Cursors::Hand;
            this->tbOptnB->Font = (gcnew System::Drawing::Font(L"Cambria", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tbOptnB->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->tbOptnB->Location = System::Drawing::Point(229, 110);
            this->tbOptnB->Margin = System::Windows::Forms::Padding(4);
            this->tbOptnB->Multiline = true;
            this->tbOptnB->Name = L"tbOptnB";
            this->tbOptnB->ReadOnly = true;
            this->tbOptnB->Size = System::Drawing::Size(1755, 70);
            this->tbOptnB->TabIndex = 1;
            this->tbOptnB->Text = L"dddd\r\nddd";
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
            this->panel1->Controls->Add(this->radioButton1);
            this->panel1->Controls->Add(this->radioButton2);
            this->panel1->Controls->Add(this->radioButton3);
            this->panel1->Controls->Add(this->radioButton4);
            this->panel1->ForeColor = System::Drawing::SystemColors::Desktop;
            this->panel1->Location = System::Drawing::Point(-86, 430);
            this->panel1->Margin = System::Windows::Forms::Padding(4);
            this->panel1->Name = L"panel1";
            this->panel1->Size = System::Drawing::Size(1994, 390);
            this->panel1->TabIndex = 41;
            // 
            // tbOptnD
            // 
            this->tbOptnD->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->tbOptnD->BackColor = System::Drawing::Color::Gray;
            this->tbOptnD->Cursor = System::Windows::Forms::Cursors::Hand;
            this->tbOptnD->Font = (gcnew System::Drawing::Font(L"Cambria", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tbOptnD->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->tbOptnD->Location = System::Drawing::Point(229, 267);
            this->tbOptnD->Margin = System::Windows::Forms::Padding(4);
            this->tbOptnD->Multiline = true;
            this->tbOptnD->Name = L"tbOptnD";
            this->tbOptnD->ReadOnly = true;
            this->tbOptnD->Size = System::Drawing::Size(1755, 70);
            this->tbOptnD->TabIndex = 1;
            this->tbOptnD->Text = L"dddd\r\nddd";
            // 
            // tbOptnC
            // 
            this->tbOptnC->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->tbOptnC->BackColor = System::Drawing::Color::Gray;
            this->tbOptnC->Cursor = System::Windows::Forms::Cursors::Hand;
            this->tbOptnC->Font = (gcnew System::Drawing::Font(L"Cambria", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tbOptnC->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->tbOptnC->Location = System::Drawing::Point(229, 188);
            this->tbOptnC->Margin = System::Windows::Forms::Padding(4);
            this->tbOptnC->Multiline = true;
            this->tbOptnC->Name = L"tbOptnC";
            this->tbOptnC->ReadOnly = true;
            this->tbOptnC->Size = System::Drawing::Size(1755, 70);
            this->tbOptnC->TabIndex = 1;
            this->tbOptnC->Text = L"dddd\r\nddd";
            this->tbOptnC->TextChanged += gcnew System::EventHandler(this, &Startpage::tbOptnC_TextChanged);
            // 
            // tbOptnA
            // 
            this->tbOptnA->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->tbOptnA->BackColor = System::Drawing::Color::Gray;
            this->tbOptnA->Cursor = System::Windows::Forms::Cursors::Hand;
            this->tbOptnA->Font = (gcnew System::Drawing::Font(L"Cambria", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tbOptnA->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->tbOptnA->Location = System::Drawing::Point(229, 32);
            this->tbOptnA->Margin = System::Windows::Forms::Padding(4);
            this->tbOptnA->Multiline = true;
            this->tbOptnA->Name = L"tbOptnA";
            this->tbOptnA->ReadOnly = true;
            this->tbOptnA->Size = System::Drawing::Size(1755, 70);
            this->tbOptnA->TabIndex = 1;
            this->tbOptnA->Text = L"dddd\r\nddd";
            this->tbOptnA->TextChanged += gcnew System::EventHandler(this, &Startpage::tbOptnA_TextChanged);
            // 
            // rtbQuestionDisplay
            // 
            this->rtbQuestionDisplay->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->rtbQuestionDisplay->BackColor = System::Drawing::Color::DimGray;
            this->rtbQuestionDisplay->Cursor = System::Windows::Forms::Cursors::Default;
            this->rtbQuestionDisplay->Font = (gcnew System::Drawing::Font(L"Times New Roman", 25.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->rtbQuestionDisplay->ForeColor = System::Drawing::SystemColors::InfoText;
            this->rtbQuestionDisplay->Location = System::Drawing::Point(39, 206);
            this->rtbQuestionDisplay->Margin = System::Windows::Forms::Padding(4);
            this->rtbQuestionDisplay->Name = L"rtbQuestionDisplay";
            this->rtbQuestionDisplay->ReadOnly = true;
            this->rtbQuestionDisplay->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::None;
            this->rtbQuestionDisplay->Size = System::Drawing::Size(1869, 223);
            this->rtbQuestionDisplay->TabIndex = 40;
            this->rtbQuestionDisplay->Text = L"ddddd";
            this->rtbQuestionDisplay->TextChanged += gcnew System::EventHandler(this, &Startpage::rtbQuestionDisplay_TextChanged);
            // 
            // timer1
            // 
            this->timer1->Interval = 1000;
            this->timer1->Tick += gcnew System::EventHandler(this, &Startpage::timer1_Tick);
            // 
            // lb3
            // 
            this->lb3->AutoSize = true;
            this->lb3->Location = System::Drawing::Point(1789, -4835);
            this->lb3->Name = L"lb3";
            this->lb3->Size = System::Drawing::Size(0, 16);
            this->lb3->TabIndex = 59;
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 72, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label3->Location = System::Drawing::Point(462, 918);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(1028, 141);
            this->label3->TabIndex = 62;
            this->label3->Text = L"Ultimate Entrance Cracker";
            this->label3->Click += gcnew System::EventHandler(this, &Startpage::label3_Click);
            // 
            // rtbQuestionDisplay2
            // 
            this->rtbQuestionDisplay2->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->rtbQuestionDisplay2->BackColor = System::Drawing::Color::DimGray;
            this->rtbQuestionDisplay2->Cursor = System::Windows::Forms::Cursors::Default;
            this->rtbQuestionDisplay2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 25.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->rtbQuestionDisplay2->ForeColor = System::Drawing::SystemColors::InfoText;
            this->rtbQuestionDisplay2->Location = System::Drawing::Point(39, 812);
            this->rtbQuestionDisplay2->Margin = System::Windows::Forms::Padding(4);
            this->rtbQuestionDisplay2->Name = L"rtbQuestionDisplay2";
            this->rtbQuestionDisplay2->ReadOnly = true;
            this->rtbQuestionDisplay2->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::None;
            this->rtbQuestionDisplay2->Size = System::Drawing::Size(1869, 223);
            this->rtbQuestionDisplay2->TabIndex = 63;
            this->rtbQuestionDisplay2->Text = L"ddddd";
            // 
            // panel2
            // 
            this->panel2->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
                static_cast<System::Int32>(static_cast<System::Byte>(54)));
            this->panel2->Controls->Add(this->tbOptnD2);
            this->panel2->Controls->Add(this->tbOptnC2);
            this->panel2->Controls->Add(this->tbOptnA2);
            this->panel2->Controls->Add(this->tbOptnB2);
            this->panel2->Controls->Add(this->radioButton5);
            this->panel2->Controls->Add(this->radioButton6);
            this->panel2->Controls->Add(this->radioButton7);
            this->panel2->Controls->Add(this->radioButton8);
            this->panel2->ForeColor = System::Drawing::SystemColors::Desktop;
            this->panel2->Location = System::Drawing::Point(-86, 1039);
            this->panel2->Margin = System::Windows::Forms::Padding(4);
            this->panel2->Name = L"panel2";
            this->panel2->Size = System::Drawing::Size(1994, 390);
            this->panel2->TabIndex = 64;
            // 
            // tbOptnD2
            // 
            this->tbOptnD2->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->tbOptnD2->BackColor = System::Drawing::Color::Gray;
            this->tbOptnD2->Cursor = System::Windows::Forms::Cursors::Hand;
            this->tbOptnD2->Font = (gcnew System::Drawing::Font(L"Cambria", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tbOptnD2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->tbOptnD2->Location = System::Drawing::Point(229, 267);
            this->tbOptnD2->Margin = System::Windows::Forms::Padding(4);
            this->tbOptnD2->Multiline = true;
            this->tbOptnD2->Name = L"tbOptnD2";
            this->tbOptnD2->ReadOnly = true;
            this->tbOptnD2->Size = System::Drawing::Size(1755, 70);
            this->tbOptnD2->TabIndex = 1;
            this->tbOptnD2->Text = L"dddd\r\nddd";
            // 
            // tbOptnC2
            // 
            this->tbOptnC2->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->tbOptnC2->BackColor = System::Drawing::Color::Gray;
            this->tbOptnC2->Cursor = System::Windows::Forms::Cursors::Hand;
            this->tbOptnC2->Font = (gcnew System::Drawing::Font(L"Cambria", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tbOptnC2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->tbOptnC2->Location = System::Drawing::Point(229, 188);
            this->tbOptnC2->Margin = System::Windows::Forms::Padding(4);
            this->tbOptnC2->Multiline = true;
            this->tbOptnC2->Name = L"tbOptnC2";
            this->tbOptnC2->ReadOnly = true;
            this->tbOptnC2->Size = System::Drawing::Size(1755, 70);
            this->tbOptnC2->TabIndex = 1;
            this->tbOptnC2->Text = L"dddd\r\nddd";
            // 
            // tbOptnA2
            // 
            this->tbOptnA2->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->tbOptnA2->BackColor = System::Drawing::Color::Gray;
            this->tbOptnA2->Cursor = System::Windows::Forms::Cursors::Hand;
            this->tbOptnA2->Font = (gcnew System::Drawing::Font(L"Cambria", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tbOptnA2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->tbOptnA2->Location = System::Drawing::Point(229, 32);
            this->tbOptnA2->Margin = System::Windows::Forms::Padding(4);
            this->tbOptnA2->Multiline = true;
            this->tbOptnA2->Name = L"tbOptnA2";
            this->tbOptnA2->ReadOnly = true;
            this->tbOptnA2->Size = System::Drawing::Size(1755, 70);
            this->tbOptnA2->TabIndex = 1;
            this->tbOptnA2->Text = L"dddd\r\nddd";
            // 
            // tbOptnB2
            // 
            this->tbOptnB2->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->tbOptnB2->BackColor = System::Drawing::Color::Gray;
            this->tbOptnB2->Cursor = System::Windows::Forms::Cursors::Hand;
            this->tbOptnB2->Font = (gcnew System::Drawing::Font(L"Cambria", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tbOptnB2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->tbOptnB2->Location = System::Drawing::Point(229, 110);
            this->tbOptnB2->Margin = System::Windows::Forms::Padding(4);
            this->tbOptnB2->Multiline = true;
            this->tbOptnB2->Name = L"tbOptnB2";
            this->tbOptnB2->ReadOnly = true;
            this->tbOptnB2->Size = System::Drawing::Size(1755, 70);
            this->tbOptnB2->TabIndex = 1;
            this->tbOptnB2->Text = L"dddd\r\nddd";
            // 
            // radioButton5
            // 
            this->radioButton5->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->radioButton5->AutoSize = true;
            this->radioButton5->BackColor = System::Drawing::Color::Transparent;
            this->radioButton5->Cursor = System::Windows::Forms::Cursors::Hand;
            this->radioButton5->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->radioButton5->ForeColor = System::Drawing::Color::Gold;
            this->radioButton5->Location = System::Drawing::Point(175, 283);
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
            this->radioButton6->BackColor = System::Drawing::Color::Transparent;
            this->radioButton6->Cursor = System::Windows::Forms::Cursors::Hand;
            this->radioButton6->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->radioButton6->ForeColor = System::Drawing::Color::Gold;
            this->radioButton6->Location = System::Drawing::Point(175, 54);
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
            this->radioButton7->BackColor = System::Drawing::Color::Transparent;
            this->radioButton7->Cursor = System::Windows::Forms::Cursors::Hand;
            this->radioButton7->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->radioButton7->ForeColor = System::Drawing::Color::Gold;
            this->radioButton7->Location = System::Drawing::Point(174, 129);
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
            this->radioButton8->BackColor = System::Drawing::Color::Transparent;
            this->radioButton8->Cursor = System::Windows::Forms::Cursors::Hand;
            this->radioButton8->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->radioButton8->ForeColor = System::Drawing::Color::Gold;
            this->radioButton8->Location = System::Drawing::Point(174, 205);
            this->radioButton8->Margin = System::Windows::Forms::Padding(4);
            this->radioButton8->Name = L"radioButton8";
            this->radioButton8->Size = System::Drawing::Size(45, 31);
            this->radioButton8->TabIndex = 2;
            this->radioButton8->TabStop = true;
            this->radioButton8->Text = L"c";
            this->radioButton8->UseVisualStyleBackColor = false;
            // 
            // rtbQuestionDisplay3
            // 
            this->rtbQuestionDisplay3->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->rtbQuestionDisplay3->BackColor = System::Drawing::Color::DimGray;
            this->rtbQuestionDisplay3->Cursor = System::Windows::Forms::Cursors::Default;
            this->rtbQuestionDisplay3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 25.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->rtbQuestionDisplay3->ForeColor = System::Drawing::SystemColors::InfoText;
            this->rtbQuestionDisplay3->Location = System::Drawing::Point(39, 1418);
            this->rtbQuestionDisplay3->Margin = System::Windows::Forms::Padding(4);
            this->rtbQuestionDisplay3->Name = L"rtbQuestionDisplay3";
            this->rtbQuestionDisplay3->ReadOnly = true;
            this->rtbQuestionDisplay3->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::None;
            this->rtbQuestionDisplay3->Size = System::Drawing::Size(1869, 223);
            this->rtbQuestionDisplay3->TabIndex = 65;
            this->rtbQuestionDisplay3->Text = L"ddddd";
            // 
            // panel3
            // 
            this->panel3->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
                static_cast<System::Int32>(static_cast<System::Byte>(54)));
            this->panel3->Controls->Add(this->textBox5);
            this->panel3->Controls->Add(this->textBox6);
            this->panel3->Controls->Add(this->tbOptnA3);
            this->panel3->Controls->Add(this->textBox8);
            this->panel3->Controls->Add(this->radioButton9);
            this->panel3->Controls->Add(this->radioButton10);
            this->panel3->Controls->Add(this->radioButton11);
            this->panel3->Controls->Add(this->radioButton12);
            this->panel3->ForeColor = System::Drawing::SystemColors::Desktop;
            this->panel3->Location = System::Drawing::Point(-86, 1645);
            this->panel3->Margin = System::Windows::Forms::Padding(4);
            this->panel3->Name = L"panel3";
            this->panel3->Size = System::Drawing::Size(1994, 390);
            this->panel3->TabIndex = 66;
            // 
            // textBox5
            // 
            this->textBox5->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->textBox5->BackColor = System::Drawing::Color::Gray;
            this->textBox5->Cursor = System::Windows::Forms::Cursors::Hand;
            this->textBox5->Font = (gcnew System::Drawing::Font(L"Cambria", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox5->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->textBox5->Location = System::Drawing::Point(229, 267);
            this->textBox5->Margin = System::Windows::Forms::Padding(4);
            this->textBox5->Multiline = true;
            this->textBox5->Name = L"textBox5";
            this->textBox5->ReadOnly = true;
            this->textBox5->Size = System::Drawing::Size(1755, 70);
            this->textBox5->TabIndex = 1;
            this->textBox5->Text = L"dddd\r\nddd";
            // 
            // textBox6
            // 
            this->textBox6->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->textBox6->BackColor = System::Drawing::Color::Gray;
            this->textBox6->Cursor = System::Windows::Forms::Cursors::Hand;
            this->textBox6->Font = (gcnew System::Drawing::Font(L"Cambria", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox6->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->textBox6->Location = System::Drawing::Point(229, 188);
            this->textBox6->Margin = System::Windows::Forms::Padding(4);
            this->textBox6->Multiline = true;
            this->textBox6->Name = L"textBox6";
            this->textBox6->ReadOnly = true;
            this->textBox6->Size = System::Drawing::Size(1755, 70);
            this->textBox6->TabIndex = 1;
            this->textBox6->Text = L"dddd\r\nddd";
            // 
            // tbOptnA3
            // 
            this->tbOptnA3->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->tbOptnA3->BackColor = System::Drawing::Color::Gray;
            this->tbOptnA3->Cursor = System::Windows::Forms::Cursors::Hand;
            this->tbOptnA3->Font = (gcnew System::Drawing::Font(L"Cambria", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tbOptnA3->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->tbOptnA3->Location = System::Drawing::Point(229, 32);
            this->tbOptnA3->Margin = System::Windows::Forms::Padding(4);
            this->tbOptnA3->Multiline = true;
            this->tbOptnA3->Name = L"tbOptnA3";
            this->tbOptnA3->ReadOnly = true;
            this->tbOptnA3->Size = System::Drawing::Size(1755, 70);
            this->tbOptnA3->TabIndex = 1;
            this->tbOptnA3->Text = L"dddd\r\nddd";
            // 
            // textBox8
            // 
            this->textBox8->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->textBox8->BackColor = System::Drawing::Color::Gray;
            this->textBox8->Cursor = System::Windows::Forms::Cursors::Hand;
            this->textBox8->Font = (gcnew System::Drawing::Font(L"Cambria", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox8->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->textBox8->Location = System::Drawing::Point(229, 110);
            this->textBox8->Margin = System::Windows::Forms::Padding(4);
            this->textBox8->Multiline = true;
            this->textBox8->Name = L"textBox8";
            this->textBox8->ReadOnly = true;
            this->textBox8->Size = System::Drawing::Size(1755, 70);
            this->textBox8->TabIndex = 1;
            this->textBox8->Text = L"dddd\r\nddd";
            // 
            // radioButton9
            // 
            this->radioButton9->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->radioButton9->AutoSize = true;
            this->radioButton9->BackColor = System::Drawing::Color::Transparent;
            this->radioButton9->Cursor = System::Windows::Forms::Cursors::Hand;
            this->radioButton9->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->radioButton9->ForeColor = System::Drawing::Color::Gold;
            this->radioButton9->Location = System::Drawing::Point(175, 283);
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
            this->radioButton10->BackColor = System::Drawing::Color::Transparent;
            this->radioButton10->Cursor = System::Windows::Forms::Cursors::Hand;
            this->radioButton10->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->radioButton10->ForeColor = System::Drawing::Color::Gold;
            this->radioButton10->Location = System::Drawing::Point(175, 54);
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
            this->radioButton11->BackColor = System::Drawing::Color::Transparent;
            this->radioButton11->Cursor = System::Windows::Forms::Cursors::Hand;
            this->radioButton11->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->radioButton11->ForeColor = System::Drawing::Color::Gold;
            this->radioButton11->Location = System::Drawing::Point(174, 129);
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
            this->radioButton12->BackColor = System::Drawing::Color::Transparent;
            this->radioButton12->Cursor = System::Windows::Forms::Cursors::Hand;
            this->radioButton12->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->radioButton12->ForeColor = System::Drawing::Color::Gold;
            this->radioButton12->Location = System::Drawing::Point(174, 205);
            this->radioButton12->Margin = System::Windows::Forms::Padding(4);
            this->radioButton12->Name = L"radioButton12";
            this->radioButton12->Size = System::Drawing::Size(45, 31);
            this->radioButton12->TabIndex = 2;
            this->radioButton12->TabStop = true;
            this->radioButton12->Text = L"c";
            this->radioButton12->UseVisualStyleBackColor = false;
            // 
            // rtbQuestionDisplay4
            // 
            this->rtbQuestionDisplay4->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->rtbQuestionDisplay4->BackColor = System::Drawing::Color::DimGray;
            this->rtbQuestionDisplay4->Cursor = System::Windows::Forms::Cursors::Default;
            this->rtbQuestionDisplay4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 25.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->rtbQuestionDisplay4->ForeColor = System::Drawing::SystemColors::InfoText;
            this->rtbQuestionDisplay4->Location = System::Drawing::Point(39, 2023);
            this->rtbQuestionDisplay4->Margin = System::Windows::Forms::Padding(4);
            this->rtbQuestionDisplay4->Name = L"rtbQuestionDisplay4";
            this->rtbQuestionDisplay4->ReadOnly = true;
            this->rtbQuestionDisplay4->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::None;
            this->rtbQuestionDisplay4->Size = System::Drawing::Size(1869, 223);
            this->rtbQuestionDisplay4->TabIndex = 67;
            this->rtbQuestionDisplay4->Text = L"ddddd";
            // 
            // panel4
            // 
            this->panel4->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->panel4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
                static_cast<System::Int32>(static_cast<System::Byte>(54)));
            this->panel4->Controls->Add(this->textBox9);
            this->panel4->Controls->Add(this->textBox10);
            this->panel4->Controls->Add(this->tbOptnA4);
            this->panel4->Controls->Add(this->textBox12);
            this->panel4->Controls->Add(this->radioButton13);
            this->panel4->Controls->Add(this->radioButton14);
            this->panel4->Controls->Add(this->radioButton15);
            this->panel4->Controls->Add(this->radioButton16);
            this->panel4->ForeColor = System::Drawing::SystemColors::Desktop;
            this->panel4->Location = System::Drawing::Point(-86, 2244);
            this->panel4->Margin = System::Windows::Forms::Padding(4);
            this->panel4->Name = L"panel4";
            this->panel4->Size = System::Drawing::Size(1994, 390);
            this->panel4->TabIndex = 68;
            // 
            // textBox9
            // 
            this->textBox9->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->textBox9->BackColor = System::Drawing::Color::Gray;
            this->textBox9->Cursor = System::Windows::Forms::Cursors::Hand;
            this->textBox9->Font = (gcnew System::Drawing::Font(L"Cambria", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox9->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->textBox9->Location = System::Drawing::Point(229, 267);
            this->textBox9->Margin = System::Windows::Forms::Padding(4);
            this->textBox9->Multiline = true;
            this->textBox9->Name = L"textBox9";
            this->textBox9->ReadOnly = true;
            this->textBox9->Size = System::Drawing::Size(1755, 70);
            this->textBox9->TabIndex = 1;
            this->textBox9->Text = L"dddd\r\nddd";
            // 
            // textBox10
            // 
            this->textBox10->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->textBox10->BackColor = System::Drawing::Color::Gray;
            this->textBox10->Cursor = System::Windows::Forms::Cursors::Hand;
            this->textBox10->Font = (gcnew System::Drawing::Font(L"Cambria", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox10->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->textBox10->Location = System::Drawing::Point(229, 188);
            this->textBox10->Margin = System::Windows::Forms::Padding(4);
            this->textBox10->Multiline = true;
            this->textBox10->Name = L"textBox10";
            this->textBox10->ReadOnly = true;
            this->textBox10->Size = System::Drawing::Size(1755, 70);
            this->textBox10->TabIndex = 1;
            this->textBox10->Text = L"dddd\r\nddd";
            // 
            // tbOptnA4
            // 
            this->tbOptnA4->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->tbOptnA4->BackColor = System::Drawing::Color::Gray;
            this->tbOptnA4->Cursor = System::Windows::Forms::Cursors::Hand;
            this->tbOptnA4->Font = (gcnew System::Drawing::Font(L"Cambria", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tbOptnA4->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->tbOptnA4->Location = System::Drawing::Point(229, 32);
            this->tbOptnA4->Margin = System::Windows::Forms::Padding(4);
            this->tbOptnA4->Multiline = true;
            this->tbOptnA4->Name = L"tbOptnA4";
            this->tbOptnA4->ReadOnly = true;
            this->tbOptnA4->Size = System::Drawing::Size(1755, 70);
            this->tbOptnA4->TabIndex = 1;
            this->tbOptnA4->Text = L"dddd\r\nddd";
            // 
            // textBox12
            // 
            this->textBox12->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->textBox12->BackColor = System::Drawing::Color::Gray;
            this->textBox12->Cursor = System::Windows::Forms::Cursors::Hand;
            this->textBox12->Font = (gcnew System::Drawing::Font(L"Cambria", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox12->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->textBox12->Location = System::Drawing::Point(229, 110);
            this->textBox12->Margin = System::Windows::Forms::Padding(4);
            this->textBox12->Multiline = true;
            this->textBox12->Name = L"textBox12";
            this->textBox12->ReadOnly = true;
            this->textBox12->Size = System::Drawing::Size(1755, 70);
            this->textBox12->TabIndex = 1;
            this->textBox12->Text = L"dddd\r\nddd";
            // 
            // radioButton13
            // 
            this->radioButton13->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->radioButton13->AutoSize = true;
            this->radioButton13->BackColor = System::Drawing::Color::Transparent;
            this->radioButton13->Cursor = System::Windows::Forms::Cursors::Hand;
            this->radioButton13->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->radioButton13->ForeColor = System::Drawing::Color::Gold;
            this->radioButton13->Location = System::Drawing::Point(175, 283);
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
            this->radioButton14->BackColor = System::Drawing::Color::Transparent;
            this->radioButton14->Cursor = System::Windows::Forms::Cursors::Hand;
            this->radioButton14->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->radioButton14->ForeColor = System::Drawing::Color::Gold;
            this->radioButton14->Location = System::Drawing::Point(175, 54);
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
            this->radioButton15->BackColor = System::Drawing::Color::Transparent;
            this->radioButton15->Cursor = System::Windows::Forms::Cursors::Hand;
            this->radioButton15->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->radioButton15->ForeColor = System::Drawing::Color::Gold;
            this->radioButton15->Location = System::Drawing::Point(174, 129);
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
            this->radioButton16->BackColor = System::Drawing::Color::Transparent;
            this->radioButton16->Cursor = System::Windows::Forms::Cursors::Hand;
            this->radioButton16->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->radioButton16->ForeColor = System::Drawing::Color::Gold;
            this->radioButton16->Location = System::Drawing::Point(174, 205);
            this->radioButton16->Margin = System::Windows::Forms::Padding(4);
            this->radioButton16->Name = L"radioButton16";
            this->radioButton16->Size = System::Drawing::Size(45, 31);
            this->radioButton16->TabIndex = 2;
            this->radioButton16->TabStop = true;
            this->radioButton16->Text = L"c";
            this->radioButton16->UseVisualStyleBackColor = false;
            // 
            // rtbQuestionDisplay5
            // 
            this->rtbQuestionDisplay5->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->rtbQuestionDisplay5->BackColor = System::Drawing::Color::DimGray;
            this->rtbQuestionDisplay5->Cursor = System::Windows::Forms::Cursors::Default;
            this->rtbQuestionDisplay5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 25.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->rtbQuestionDisplay5->ForeColor = System::Drawing::SystemColors::InfoText;
            this->rtbQuestionDisplay5->Location = System::Drawing::Point(39, 2629);
            this->rtbQuestionDisplay5->Margin = System::Windows::Forms::Padding(4);
            this->rtbQuestionDisplay5->Name = L"rtbQuestionDisplay5";
            this->rtbQuestionDisplay5->ReadOnly = true;
            this->rtbQuestionDisplay5->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::None;
            this->rtbQuestionDisplay5->Size = System::Drawing::Size(1869, 223);
            this->rtbQuestionDisplay5->TabIndex = 69;
            this->rtbQuestionDisplay5->Text = L"ddddd";
            // 
            // panel5
            // 
            this->panel5->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->panel5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
                static_cast<System::Int32>(static_cast<System::Byte>(54)));
            this->panel5->Controls->Add(this->textBox13);
            this->panel5->Controls->Add(this->textBox14);
            this->panel5->Controls->Add(this->tbOptnA5);
            this->panel5->Controls->Add(this->textBox16);
            this->panel5->Controls->Add(this->radioButton17);
            this->panel5->Controls->Add(this->radioButton18);
            this->panel5->Controls->Add(this->radioButton19);
            this->panel5->Controls->Add(this->radioButton20);
            this->panel5->ForeColor = System::Drawing::SystemColors::Desktop;
            this->panel5->Location = System::Drawing::Point(-86, 2852);
            this->panel5->Margin = System::Windows::Forms::Padding(4);
            this->panel5->Name = L"panel5";
            this->panel5->Size = System::Drawing::Size(1994, 390);
            this->panel5->TabIndex = 70;
            // 
            // textBox13
            // 
            this->textBox13->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->textBox13->BackColor = System::Drawing::Color::Gray;
            this->textBox13->Cursor = System::Windows::Forms::Cursors::Hand;
            this->textBox13->Font = (gcnew System::Drawing::Font(L"Cambria", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox13->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->textBox13->Location = System::Drawing::Point(229, 267);
            this->textBox13->Margin = System::Windows::Forms::Padding(4);
            this->textBox13->Multiline = true;
            this->textBox13->Name = L"textBox13";
            this->textBox13->ReadOnly = true;
            this->textBox13->Size = System::Drawing::Size(1755, 70);
            this->textBox13->TabIndex = 1;
            this->textBox13->Text = L"dddd\r\nddd";
            // 
            // textBox14
            // 
            this->textBox14->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->textBox14->BackColor = System::Drawing::Color::Gray;
            this->textBox14->Cursor = System::Windows::Forms::Cursors::Hand;
            this->textBox14->Font = (gcnew System::Drawing::Font(L"Cambria", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox14->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->textBox14->Location = System::Drawing::Point(229, 188);
            this->textBox14->Margin = System::Windows::Forms::Padding(4);
            this->textBox14->Multiline = true;
            this->textBox14->Name = L"textBox14";
            this->textBox14->ReadOnly = true;
            this->textBox14->Size = System::Drawing::Size(1755, 70);
            this->textBox14->TabIndex = 1;
            this->textBox14->Text = L"dddd\r\nddd";
            // 
            // tbOptnA5
            // 
            this->tbOptnA5->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->tbOptnA5->BackColor = System::Drawing::Color::Gray;
            this->tbOptnA5->Cursor = System::Windows::Forms::Cursors::Hand;
            this->tbOptnA5->Font = (gcnew System::Drawing::Font(L"Cambria", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tbOptnA5->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->tbOptnA5->Location = System::Drawing::Point(229, 32);
            this->tbOptnA5->Margin = System::Windows::Forms::Padding(4);
            this->tbOptnA5->Multiline = true;
            this->tbOptnA5->Name = L"tbOptnA5";
            this->tbOptnA5->ReadOnly = true;
            this->tbOptnA5->Size = System::Drawing::Size(1755, 70);
            this->tbOptnA5->TabIndex = 1;
            this->tbOptnA5->Text = L"dddd\r\nddd";
            // 
            // textBox16
            // 
            this->textBox16->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->textBox16->BackColor = System::Drawing::Color::Gray;
            this->textBox16->Cursor = System::Windows::Forms::Cursors::Hand;
            this->textBox16->Font = (gcnew System::Drawing::Font(L"Cambria", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox16->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->textBox16->Location = System::Drawing::Point(229, 110);
            this->textBox16->Margin = System::Windows::Forms::Padding(4);
            this->textBox16->Multiline = true;
            this->textBox16->Name = L"textBox16";
            this->textBox16->ReadOnly = true;
            this->textBox16->Size = System::Drawing::Size(1755, 70);
            this->textBox16->TabIndex = 1;
            this->textBox16->Text = L"dddd\r\nddd";
            // 
            // radioButton17
            // 
            this->radioButton17->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->radioButton17->AutoSize = true;
            this->radioButton17->BackColor = System::Drawing::Color::Transparent;
            this->radioButton17->Cursor = System::Windows::Forms::Cursors::Hand;
            this->radioButton17->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->radioButton17->ForeColor = System::Drawing::Color::Gold;
            this->radioButton17->Location = System::Drawing::Point(175, 283);
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
            this->radioButton18->BackColor = System::Drawing::Color::Transparent;
            this->radioButton18->Cursor = System::Windows::Forms::Cursors::Hand;
            this->radioButton18->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->radioButton18->ForeColor = System::Drawing::Color::Gold;
            this->radioButton18->Location = System::Drawing::Point(175, 54);
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
            this->radioButton19->BackColor = System::Drawing::Color::Transparent;
            this->radioButton19->Cursor = System::Windows::Forms::Cursors::Hand;
            this->radioButton19->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->radioButton19->ForeColor = System::Drawing::Color::Gold;
            this->radioButton19->Location = System::Drawing::Point(174, 129);
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
            this->radioButton20->BackColor = System::Drawing::Color::Transparent;
            this->radioButton20->Cursor = System::Windows::Forms::Cursors::Hand;
            this->radioButton20->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->radioButton20->ForeColor = System::Drawing::Color::Gold;
            this->radioButton20->Location = System::Drawing::Point(174, 205);
            this->radioButton20->Margin = System::Windows::Forms::Padding(4);
            this->radioButton20->Name = L"radioButton20";
            this->radioButton20->Size = System::Drawing::Size(45, 31);
            this->radioButton20->TabIndex = 2;
            this->radioButton20->TabStop = true;
            this->radioButton20->Text = L"c";
            this->radioButton20->UseVisualStyleBackColor = false;
            // 
            // rtbQuestionDisplay6
            // 
            this->rtbQuestionDisplay6->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->rtbQuestionDisplay6->BackColor = System::Drawing::Color::DimGray;
            this->rtbQuestionDisplay6->Cursor = System::Windows::Forms::Cursors::Default;
            this->rtbQuestionDisplay6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 25.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->rtbQuestionDisplay6->ForeColor = System::Drawing::SystemColors::InfoText;
            this->rtbQuestionDisplay6->Location = System::Drawing::Point(39, 3232);
            this->rtbQuestionDisplay6->Margin = System::Windows::Forms::Padding(4);
            this->rtbQuestionDisplay6->Name = L"rtbQuestionDisplay6";
            this->rtbQuestionDisplay6->ReadOnly = true;
            this->rtbQuestionDisplay6->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::None;
            this->rtbQuestionDisplay6->Size = System::Drawing::Size(1869, 223);
            this->rtbQuestionDisplay6->TabIndex = 71;
            this->rtbQuestionDisplay6->Text = L"ddddd";
            // 
            // panel6
            // 
            this->panel6->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->panel6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
                static_cast<System::Int32>(static_cast<System::Byte>(54)));
            this->panel6->Controls->Add(this->textBox17);
            this->panel6->Controls->Add(this->textBox18);
            this->panel6->Controls->Add(this->tbOptnA6);
            this->panel6->Controls->Add(this->textBox20);
            this->panel6->Controls->Add(this->radioButton21);
            this->panel6->Controls->Add(this->radioButton22);
            this->panel6->Controls->Add(this->radioButton23);
            this->panel6->Controls->Add(this->radioButton24);
            this->panel6->ForeColor = System::Drawing::SystemColors::Desktop;
            this->panel6->Location = System::Drawing::Point(-86, 3451);
            this->panel6->Margin = System::Windows::Forms::Padding(4);
            this->panel6->Name = L"panel6";
            this->panel6->Size = System::Drawing::Size(1994, 390);
            this->panel6->TabIndex = 72;
            // 
            // textBox17
            // 
            this->textBox17->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->textBox17->BackColor = System::Drawing::Color::Gray;
            this->textBox17->Cursor = System::Windows::Forms::Cursors::Hand;
            this->textBox17->Font = (gcnew System::Drawing::Font(L"Cambria", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox17->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->textBox17->Location = System::Drawing::Point(229, 267);
            this->textBox17->Margin = System::Windows::Forms::Padding(4);
            this->textBox17->Multiline = true;
            this->textBox17->Name = L"textBox17";
            this->textBox17->ReadOnly = true;
            this->textBox17->Size = System::Drawing::Size(1755, 70);
            this->textBox17->TabIndex = 1;
            this->textBox17->Text = L"dddd\r\nddd";
            // 
            // textBox18
            // 
            this->textBox18->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->textBox18->BackColor = System::Drawing::Color::Gray;
            this->textBox18->Cursor = System::Windows::Forms::Cursors::Hand;
            this->textBox18->Font = (gcnew System::Drawing::Font(L"Cambria", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox18->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->textBox18->Location = System::Drawing::Point(229, 188);
            this->textBox18->Margin = System::Windows::Forms::Padding(4);
            this->textBox18->Multiline = true;
            this->textBox18->Name = L"textBox18";
            this->textBox18->ReadOnly = true;
            this->textBox18->Size = System::Drawing::Size(1755, 70);
            this->textBox18->TabIndex = 1;
            this->textBox18->Text = L"dddd\r\nddd";
            // 
            // tbOptnA6
            // 
            this->tbOptnA6->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->tbOptnA6->BackColor = System::Drawing::Color::Gray;
            this->tbOptnA6->Cursor = System::Windows::Forms::Cursors::Hand;
            this->tbOptnA6->Font = (gcnew System::Drawing::Font(L"Cambria", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tbOptnA6->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->tbOptnA6->Location = System::Drawing::Point(229, 32);
            this->tbOptnA6->Margin = System::Windows::Forms::Padding(4);
            this->tbOptnA6->Multiline = true;
            this->tbOptnA6->Name = L"tbOptnA6";
            this->tbOptnA6->ReadOnly = true;
            this->tbOptnA6->Size = System::Drawing::Size(1755, 70);
            this->tbOptnA6->TabIndex = 1;
            this->tbOptnA6->Text = L"dddd\r\nddd";
            // 
            // textBox20
            // 
            this->textBox20->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->textBox20->BackColor = System::Drawing::Color::Gray;
            this->textBox20->Cursor = System::Windows::Forms::Cursors::Hand;
            this->textBox20->Font = (gcnew System::Drawing::Font(L"Cambria", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox20->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->textBox20->Location = System::Drawing::Point(229, 110);
            this->textBox20->Margin = System::Windows::Forms::Padding(4);
            this->textBox20->Multiline = true;
            this->textBox20->Name = L"textBox20";
            this->textBox20->ReadOnly = true;
            this->textBox20->Size = System::Drawing::Size(1755, 70);
            this->textBox20->TabIndex = 1;
            this->textBox20->Text = L"dddd\r\nddd";
            // 
            // radioButton21
            // 
            this->radioButton21->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->radioButton21->AutoSize = true;
            this->radioButton21->BackColor = System::Drawing::Color::Transparent;
            this->radioButton21->Cursor = System::Windows::Forms::Cursors::Hand;
            this->radioButton21->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->radioButton21->ForeColor = System::Drawing::Color::Gold;
            this->radioButton21->Location = System::Drawing::Point(175, 283);
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
            this->radioButton22->BackColor = System::Drawing::Color::Transparent;
            this->radioButton22->Cursor = System::Windows::Forms::Cursors::Hand;
            this->radioButton22->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->radioButton22->ForeColor = System::Drawing::Color::Gold;
            this->radioButton22->Location = System::Drawing::Point(175, 54);
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
            this->radioButton23->BackColor = System::Drawing::Color::Transparent;
            this->radioButton23->Cursor = System::Windows::Forms::Cursors::Hand;
            this->radioButton23->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->radioButton23->ForeColor = System::Drawing::Color::Gold;
            this->radioButton23->Location = System::Drawing::Point(174, 129);
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
            this->radioButton24->BackColor = System::Drawing::Color::Transparent;
            this->radioButton24->Cursor = System::Windows::Forms::Cursors::Hand;
            this->radioButton24->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->radioButton24->ForeColor = System::Drawing::Color::Gold;
            this->radioButton24->Location = System::Drawing::Point(174, 205);
            this->radioButton24->Margin = System::Windows::Forms::Padding(4);
            this->radioButton24->Name = L"radioButton24";
            this->radioButton24->Size = System::Drawing::Size(45, 31);
            this->radioButton24->TabIndex = 2;
            this->radioButton24->TabStop = true;
            this->radioButton24->Text = L"c";
            this->radioButton24->UseVisualStyleBackColor = false;
            // 
            // tbOptnA8
            // 
            this->tbOptnA8->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->tbOptnA8->BackColor = System::Drawing::Color::DimGray;
            this->tbOptnA8->Cursor = System::Windows::Forms::Cursors::Default;
            this->tbOptnA8->Font = (gcnew System::Drawing::Font(L"Times New Roman", 25.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tbOptnA8->ForeColor = System::Drawing::SystemColors::InfoText;
            this->tbOptnA8->Location = System::Drawing::Point(39, 3834);
            this->tbOptnA8->Margin = System::Windows::Forms::Padding(4);
            this->tbOptnA8->Name = L"tbOptnA8";
            this->tbOptnA8->ReadOnly = true;
            this->tbOptnA8->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::None;
            this->tbOptnA8->Size = System::Drawing::Size(1869, 223);
            this->tbOptnA8->TabIndex = 73;
            this->tbOptnA8->Text = L"ddddd";
            // 
            // panel7
            // 
            this->panel7->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->panel7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
                static_cast<System::Int32>(static_cast<System::Byte>(54)));
            this->panel7->Controls->Add(this->textBox21);
            this->panel7->Controls->Add(this->textBox22);
            this->panel7->Controls->Add(this->textBox23);
            this->panel7->Controls->Add(this->textBox24);
            this->panel7->Controls->Add(this->radioButton25);
            this->panel7->Controls->Add(this->radioButton26);
            this->panel7->Controls->Add(this->radioButton27);
            this->panel7->Controls->Add(this->radioButton28);
            this->panel7->ForeColor = System::Drawing::SystemColors::Desktop;
            this->panel7->Location = System::Drawing::Point(-86, 4054);
            this->panel7->Margin = System::Windows::Forms::Padding(4);
            this->panel7->Name = L"panel7";
            this->panel7->Size = System::Drawing::Size(1994, 390);
            this->panel7->TabIndex = 74;
            // 
            // textBox21
            // 
            this->textBox21->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->textBox21->BackColor = System::Drawing::Color::Gray;
            this->textBox21->Cursor = System::Windows::Forms::Cursors::Hand;
            this->textBox21->Font = (gcnew System::Drawing::Font(L"Cambria", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox21->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->textBox21->Location = System::Drawing::Point(229, 267);
            this->textBox21->Margin = System::Windows::Forms::Padding(4);
            this->textBox21->Multiline = true;
            this->textBox21->Name = L"textBox21";
            this->textBox21->ReadOnly = true;
            this->textBox21->Size = System::Drawing::Size(1755, 70);
            this->textBox21->TabIndex = 1;
            this->textBox21->Text = L"dddd\r\nddd";
            // 
            // textBox22
            // 
            this->textBox22->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->textBox22->BackColor = System::Drawing::Color::Gray;
            this->textBox22->Cursor = System::Windows::Forms::Cursors::Hand;
            this->textBox22->Font = (gcnew System::Drawing::Font(L"Cambria", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox22->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->textBox22->Location = System::Drawing::Point(229, 188);
            this->textBox22->Margin = System::Windows::Forms::Padding(4);
            this->textBox22->Multiline = true;
            this->textBox22->Name = L"textBox22";
            this->textBox22->ReadOnly = true;
            this->textBox22->Size = System::Drawing::Size(1755, 70);
            this->textBox22->TabIndex = 1;
            this->textBox22->Text = L"dddd\r\nddd";
            // 
            // textBox23
            // 
            this->textBox23->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->textBox23->BackColor = System::Drawing::Color::Gray;
            this->textBox23->Cursor = System::Windows::Forms::Cursors::Hand;
            this->textBox23->Font = (gcnew System::Drawing::Font(L"Cambria", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox23->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->textBox23->Location = System::Drawing::Point(229, 32);
            this->textBox23->Margin = System::Windows::Forms::Padding(4);
            this->textBox23->Multiline = true;
            this->textBox23->Name = L"textBox23";
            this->textBox23->ReadOnly = true;
            this->textBox23->Size = System::Drawing::Size(1755, 70);
            this->textBox23->TabIndex = 1;
            this->textBox23->Text = L"dddd\r\nddd";
            // 
            // textBox24
            // 
            this->textBox24->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->textBox24->BackColor = System::Drawing::Color::Gray;
            this->textBox24->Cursor = System::Windows::Forms::Cursors::Hand;
            this->textBox24->Font = (gcnew System::Drawing::Font(L"Cambria", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox24->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->textBox24->Location = System::Drawing::Point(229, 110);
            this->textBox24->Margin = System::Windows::Forms::Padding(4);
            this->textBox24->Multiline = true;
            this->textBox24->Name = L"textBox24";
            this->textBox24->ReadOnly = true;
            this->textBox24->Size = System::Drawing::Size(1755, 70);
            this->textBox24->TabIndex = 1;
            this->textBox24->Text = L"dddd\r\nddd";
            // 
            // radioButton25
            // 
            this->radioButton25->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->radioButton25->AutoSize = true;
            this->radioButton25->BackColor = System::Drawing::Color::Transparent;
            this->radioButton25->Cursor = System::Windows::Forms::Cursors::Hand;
            this->radioButton25->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->radioButton25->ForeColor = System::Drawing::Color::Gold;
            this->radioButton25->Location = System::Drawing::Point(175, 283);
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
            this->radioButton26->BackColor = System::Drawing::Color::Transparent;
            this->radioButton26->Cursor = System::Windows::Forms::Cursors::Hand;
            this->radioButton26->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->radioButton26->ForeColor = System::Drawing::Color::Gold;
            this->radioButton26->Location = System::Drawing::Point(175, 54);
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
            this->radioButton27->BackColor = System::Drawing::Color::Transparent;
            this->radioButton27->Cursor = System::Windows::Forms::Cursors::Hand;
            this->radioButton27->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->radioButton27->ForeColor = System::Drawing::Color::Gold;
            this->radioButton27->Location = System::Drawing::Point(174, 129);
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
            this->radioButton28->BackColor = System::Drawing::Color::Transparent;
            this->radioButton28->Cursor = System::Windows::Forms::Cursors::Hand;
            this->radioButton28->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->radioButton28->ForeColor = System::Drawing::Color::Gold;
            this->radioButton28->Location = System::Drawing::Point(174, 205);
            this->radioButton28->Margin = System::Windows::Forms::Padding(4);
            this->radioButton28->Name = L"radioButton28";
            this->radioButton28->Size = System::Drawing::Size(45, 31);
            this->radioButton28->TabIndex = 2;
            this->radioButton28->TabStop = true;
            this->radioButton28->Text = L"c";
            this->radioButton28->UseVisualStyleBackColor = false;
            // 
            // rtbQuestionDisplay8
            // 
            this->rtbQuestionDisplay8->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->rtbQuestionDisplay8->BackColor = System::Drawing::Color::DimGray;
            this->rtbQuestionDisplay8->Cursor = System::Windows::Forms::Cursors::Default;
            this->rtbQuestionDisplay8->Font = (gcnew System::Drawing::Font(L"Times New Roman", 25.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->rtbQuestionDisplay8->ForeColor = System::Drawing::SystemColors::InfoText;
            this->rtbQuestionDisplay8->Location = System::Drawing::Point(39, 4439);
            this->rtbQuestionDisplay8->Margin = System::Windows::Forms::Padding(4);
            this->rtbQuestionDisplay8->Name = L"rtbQuestionDisplay8";
            this->rtbQuestionDisplay8->ReadOnly = true;
            this->rtbQuestionDisplay8->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::None;
            this->rtbQuestionDisplay8->Size = System::Drawing::Size(1869, 223);
            this->rtbQuestionDisplay8->TabIndex = 75;
            this->rtbQuestionDisplay8->Text = L"ddddd";
            // 
            // radioButton32
            // 
            this->radioButton32->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->radioButton32->AutoSize = true;
            this->radioButton32->BackColor = System::Drawing::Color::Transparent;
            this->radioButton32->Cursor = System::Windows::Forms::Cursors::Hand;
            this->radioButton32->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->radioButton32->ForeColor = System::Drawing::Color::Gold;
            this->radioButton32->Location = System::Drawing::Point(174, 205);
            this->radioButton32->Margin = System::Windows::Forms::Padding(4);
            this->radioButton32->Name = L"radioButton32";
            this->radioButton32->Size = System::Drawing::Size(45, 31);
            this->radioButton32->TabIndex = 2;
            this->radioButton32->TabStop = true;
            this->radioButton32->Text = L"c";
            this->radioButton32->UseVisualStyleBackColor = false;
            // 
            // radioButton31
            // 
            this->radioButton31->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->radioButton31->AutoSize = true;
            this->radioButton31->BackColor = System::Drawing::Color::Transparent;
            this->radioButton31->Cursor = System::Windows::Forms::Cursors::Hand;
            this->radioButton31->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->radioButton31->ForeColor = System::Drawing::Color::Gold;
            this->radioButton31->Location = System::Drawing::Point(174, 129);
            this->radioButton31->Margin = System::Windows::Forms::Padding(4);
            this->radioButton31->Name = L"radioButton31";
            this->radioButton31->Size = System::Drawing::Size(46, 31);
            this->radioButton31->TabIndex = 2;
            this->radioButton31->TabStop = true;
            this->radioButton31->Text = L"b";
            this->radioButton31->UseVisualStyleBackColor = false;
            // 
            // radioButton30
            // 
            this->radioButton30->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->radioButton30->AutoSize = true;
            this->radioButton30->BackColor = System::Drawing::Color::Transparent;
            this->radioButton30->Cursor = System::Windows::Forms::Cursors::Hand;
            this->radioButton30->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->radioButton30->ForeColor = System::Drawing::Color::Gold;
            this->radioButton30->Location = System::Drawing::Point(175, 54);
            this->radioButton30->Margin = System::Windows::Forms::Padding(4);
            this->radioButton30->Name = L"radioButton30";
            this->radioButton30->Size = System::Drawing::Size(46, 31);
            this->radioButton30->TabIndex = 2;
            this->radioButton30->TabStop = true;
            this->radioButton30->Text = L"a";
            this->radioButton30->UseVisualStyleBackColor = false;
            // 
            // radioButton29
            // 
            this->radioButton29->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->radioButton29->AutoSize = true;
            this->radioButton29->BackColor = System::Drawing::Color::Transparent;
            this->radioButton29->Cursor = System::Windows::Forms::Cursors::Hand;
            this->radioButton29->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->radioButton29->ForeColor = System::Drawing::Color::Gold;
            this->radioButton29->Location = System::Drawing::Point(175, 283);
            this->radioButton29->Margin = System::Windows::Forms::Padding(4);
            this->radioButton29->Name = L"radioButton29";
            this->radioButton29->Size = System::Drawing::Size(46, 31);
            this->radioButton29->TabIndex = 2;
            this->radioButton29->TabStop = true;
            this->radioButton29->Text = L"d";
            this->radioButton29->UseVisualStyleBackColor = false;
            // 
            // textBox28
            // 
            this->textBox28->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->textBox28->BackColor = System::Drawing::Color::Gray;
            this->textBox28->Cursor = System::Windows::Forms::Cursors::Hand;
            this->textBox28->Font = (gcnew System::Drawing::Font(L"Cambria", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox28->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->textBox28->Location = System::Drawing::Point(229, 110);
            this->textBox28->Margin = System::Windows::Forms::Padding(4);
            this->textBox28->Multiline = true;
            this->textBox28->Name = L"textBox28";
            this->textBox28->ReadOnly = true;
            this->textBox28->Size = System::Drawing::Size(1755, 70);
            this->textBox28->TabIndex = 1;
            this->textBox28->Text = L"dddd\r\nddd";
            // 
            // textBox27
            // 
            this->textBox27->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->textBox27->BackColor = System::Drawing::Color::Gray;
            this->textBox27->Cursor = System::Windows::Forms::Cursors::Hand;
            this->textBox27->Font = (gcnew System::Drawing::Font(L"Cambria", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox27->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->textBox27->Location = System::Drawing::Point(229, 32);
            this->textBox27->Margin = System::Windows::Forms::Padding(4);
            this->textBox27->Multiline = true;
            this->textBox27->Name = L"textBox27";
            this->textBox27->ReadOnly = true;
            this->textBox27->Size = System::Drawing::Size(1755, 70);
            this->textBox27->TabIndex = 1;
            this->textBox27->Text = L"dddd\r\nddd";
            // 
            // textBox26
            // 
            this->textBox26->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->textBox26->BackColor = System::Drawing::Color::Gray;
            this->textBox26->Cursor = System::Windows::Forms::Cursors::Hand;
            this->textBox26->Font = (gcnew System::Drawing::Font(L"Cambria", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox26->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->textBox26->Location = System::Drawing::Point(229, 188);
            this->textBox26->Margin = System::Windows::Forms::Padding(4);
            this->textBox26->Multiline = true;
            this->textBox26->Name = L"textBox26";
            this->textBox26->ReadOnly = true;
            this->textBox26->Size = System::Drawing::Size(1755, 70);
            this->textBox26->TabIndex = 1;
            this->textBox26->Text = L"dddd\r\nddd";
            // 
            // textBox25
            // 
            this->textBox25->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->textBox25->BackColor = System::Drawing::Color::Gray;
            this->textBox25->Cursor = System::Windows::Forms::Cursors::Hand;
            this->textBox25->Font = (gcnew System::Drawing::Font(L"Cambria", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox25->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->textBox25->Location = System::Drawing::Point(229, 267);
            this->textBox25->Margin = System::Windows::Forms::Padding(4);
            this->textBox25->Multiline = true;
            this->textBox25->Name = L"textBox25";
            this->textBox25->ReadOnly = true;
            this->textBox25->Size = System::Drawing::Size(1755, 70);
            this->textBox25->TabIndex = 1;
            this->textBox25->Text = L"dddd\r\nddd";
            // 
            // panel8
            // 
            this->panel8->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->panel8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
                static_cast<System::Int32>(static_cast<System::Byte>(54)));
            this->panel8->Controls->Add(this->textBox25);
            this->panel8->Controls->Add(this->textBox26);
            this->panel8->Controls->Add(this->textBox27);
            this->panel8->Controls->Add(this->textBox28);
            this->panel8->Controls->Add(this->radioButton29);
            this->panel8->Controls->Add(this->radioButton30);
            this->panel8->Controls->Add(this->radioButton31);
            this->panel8->Controls->Add(this->radioButton32);
            this->panel8->ForeColor = System::Drawing::SystemColors::Desktop;
            this->panel8->Location = System::Drawing::Point(-86, 4663);
            this->panel8->Margin = System::Windows::Forms::Padding(4);
            this->panel8->Name = L"panel8";
            this->panel8->Size = System::Drawing::Size(1994, 390);
            this->panel8->TabIndex = 76;
            this->panel8->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Startpage::panel8_Paint);
            // 
            // rtbQuestionDisplay9
            // 
            this->rtbQuestionDisplay9->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->rtbQuestionDisplay9->BackColor = System::Drawing::Color::DimGray;
            this->rtbQuestionDisplay9->Cursor = System::Windows::Forms::Cursors::Default;
            this->rtbQuestionDisplay9->Font = (gcnew System::Drawing::Font(L"Times New Roman", 25.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->rtbQuestionDisplay9->ForeColor = System::Drawing::SystemColors::InfoText;
            this->rtbQuestionDisplay9->Location = System::Drawing::Point(39, 5052);
            this->rtbQuestionDisplay9->Margin = System::Windows::Forms::Padding(4);
            this->rtbQuestionDisplay9->Name = L"rtbQuestionDisplay9";
            this->rtbQuestionDisplay9->ReadOnly = true;
            this->rtbQuestionDisplay9->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::None;
            this->rtbQuestionDisplay9->Size = System::Drawing::Size(1869, 223);
            this->rtbQuestionDisplay9->TabIndex = 78;
            this->rtbQuestionDisplay9->Text = L"ddddd";
            // 
            // panel10
            // 
            this->panel10->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->panel10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
                static_cast<System::Int32>(static_cast<System::Byte>(54)));
            this->panel10->Controls->Add(this->textBox1);
            this->panel10->Controls->Add(this->textBox2);
            this->panel10->Controls->Add(this->textBox3);
            this->panel10->Controls->Add(this->textBox4);
            this->panel10->Controls->Add(this->radioButton33);
            this->panel10->Controls->Add(this->radioButton34);
            this->panel10->Controls->Add(this->radioButton35);
            this->panel10->Controls->Add(this->radioButton36);
            this->panel10->ForeColor = System::Drawing::SystemColors::Desktop;
            this->panel10->Location = System::Drawing::Point(-86, 5278);
            this->panel10->Margin = System::Windows::Forms::Padding(4);
            this->panel10->Name = L"panel10";
            this->panel10->Size = System::Drawing::Size(1994, 390);
            this->panel10->TabIndex = 79;
            // 
            // textBox1
            // 
            this->textBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->textBox1->BackColor = System::Drawing::Color::Gray;
            this->textBox1->Cursor = System::Windows::Forms::Cursors::Hand;
            this->textBox1->Font = (gcnew System::Drawing::Font(L"Cambria", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->textBox1->Location = System::Drawing::Point(229, 267);
            this->textBox1->Margin = System::Windows::Forms::Padding(4);
            this->textBox1->Multiline = true;
            this->textBox1->Name = L"textBox1";
            this->textBox1->ReadOnly = true;
            this->textBox1->Size = System::Drawing::Size(1755, 70);
            this->textBox1->TabIndex = 1;
            this->textBox1->Text = L"dddd\r\nddd";
            // 
            // textBox2
            // 
            this->textBox2->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->textBox2->BackColor = System::Drawing::Color::Gray;
            this->textBox2->Cursor = System::Windows::Forms::Cursors::Hand;
            this->textBox2->Font = (gcnew System::Drawing::Font(L"Cambria", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->textBox2->Location = System::Drawing::Point(229, 188);
            this->textBox2->Margin = System::Windows::Forms::Padding(4);
            this->textBox2->Multiline = true;
            this->textBox2->Name = L"textBox2";
            this->textBox2->ReadOnly = true;
            this->textBox2->Size = System::Drawing::Size(1755, 70);
            this->textBox2->TabIndex = 1;
            this->textBox2->Text = L"dddd\r\nddd";
            // 
            // textBox3
            // 
            this->textBox3->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->textBox3->BackColor = System::Drawing::Color::Gray;
            this->textBox3->Cursor = System::Windows::Forms::Cursors::Hand;
            this->textBox3->Font = (gcnew System::Drawing::Font(L"Cambria", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox3->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->textBox3->Location = System::Drawing::Point(229, 32);
            this->textBox3->Margin = System::Windows::Forms::Padding(4);
            this->textBox3->Multiline = true;
            this->textBox3->Name = L"textBox3";
            this->textBox3->ReadOnly = true;
            this->textBox3->Size = System::Drawing::Size(1755, 70);
            this->textBox3->TabIndex = 1;
            this->textBox3->Text = L"dddd\r\nddd";
            // 
            // textBox4
            // 
            this->textBox4->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->textBox4->BackColor = System::Drawing::Color::Gray;
            this->textBox4->Cursor = System::Windows::Forms::Cursors::Hand;
            this->textBox4->Font = (gcnew System::Drawing::Font(L"Cambria", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox4->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->textBox4->Location = System::Drawing::Point(229, 110);
            this->textBox4->Margin = System::Windows::Forms::Padding(4);
            this->textBox4->Multiline = true;
            this->textBox4->Name = L"textBox4";
            this->textBox4->ReadOnly = true;
            this->textBox4->Size = System::Drawing::Size(1755, 70);
            this->textBox4->TabIndex = 1;
            this->textBox4->Text = L"dddd\r\nddd";
            // 
            // radioButton33
            // 
            this->radioButton33->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->radioButton33->AutoSize = true;
            this->radioButton33->BackColor = System::Drawing::Color::Transparent;
            this->radioButton33->Cursor = System::Windows::Forms::Cursors::Hand;
            this->radioButton33->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->radioButton33->ForeColor = System::Drawing::Color::Gold;
            this->radioButton33->Location = System::Drawing::Point(175, 283);
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
            this->radioButton34->BackColor = System::Drawing::Color::Transparent;
            this->radioButton34->Cursor = System::Windows::Forms::Cursors::Hand;
            this->radioButton34->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->radioButton34->ForeColor = System::Drawing::Color::Gold;
            this->radioButton34->Location = System::Drawing::Point(175, 54);
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
            this->radioButton35->BackColor = System::Drawing::Color::Transparent;
            this->radioButton35->Cursor = System::Windows::Forms::Cursors::Hand;
            this->radioButton35->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->radioButton35->ForeColor = System::Drawing::Color::Gold;
            this->radioButton35->Location = System::Drawing::Point(174, 129);
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
            this->radioButton36->BackColor = System::Drawing::Color::Transparent;
            this->radioButton36->Cursor = System::Windows::Forms::Cursors::Hand;
            this->radioButton36->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->radioButton36->ForeColor = System::Drawing::Color::Gold;
            this->radioButton36->Location = System::Drawing::Point(174, 205);
            this->radioButton36->Margin = System::Windows::Forms::Padding(4);
            this->radioButton36->Name = L"radioButton36";
            this->radioButton36->Size = System::Drawing::Size(45, 31);
            this->radioButton36->TabIndex = 2;
            this->radioButton36->TabStop = true;
            this->radioButton36->Text = L"c";
            this->radioButton36->UseVisualStyleBackColor = false;
            // 
            // richTextBox2
            // 
            this->richTextBox2->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->richTextBox2->BackColor = System::Drawing::Color::DimGray;
            this->richTextBox2->Cursor = System::Windows::Forms::Cursors::Default;
            this->richTextBox2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 25.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->richTextBox2->ForeColor = System::Drawing::SystemColors::InfoText;
            this->richTextBox2->Location = System::Drawing::Point(39, 5667);
            this->richTextBox2->Margin = System::Windows::Forms::Padding(4);
            this->richTextBox2->Name = L"richTextBox2";
            this->richTextBox2->ReadOnly = true;
            this->richTextBox2->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::None;
            this->richTextBox2->Size = System::Drawing::Size(1869, 223);
            this->richTextBox2->TabIndex = 80;
            this->richTextBox2->Text = L"ddddd";
            // 
            // panel11
            // 
            this->panel11->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->panel11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
                static_cast<System::Int32>(static_cast<System::Byte>(54)));
            this->panel11->Controls->Add(this->textBox7);
            this->panel11->Controls->Add(this->textBox11);
            this->panel11->Controls->Add(this->textBox15);
            this->panel11->Controls->Add(this->textBox19);
            this->panel11->Controls->Add(this->radioButton37);
            this->panel11->Controls->Add(this->radioButton38);
            this->panel11->Controls->Add(this->radioButton39);
            this->panel11->Controls->Add(this->radioButton40);
            this->panel11->ForeColor = System::Drawing::SystemColors::Desktop;
            this->panel11->Location = System::Drawing::Point(-86, 5891);
            this->panel11->Margin = System::Windows::Forms::Padding(4);
            this->panel11->Name = L"panel11";
            this->panel11->Size = System::Drawing::Size(1994, 390);
            this->panel11->TabIndex = 81;
            // 
            // textBox7
            // 
            this->textBox7->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->textBox7->BackColor = System::Drawing::Color::Gray;
            this->textBox7->Cursor = System::Windows::Forms::Cursors::Hand;
            this->textBox7->Font = (gcnew System::Drawing::Font(L"Cambria", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox7->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->textBox7->Location = System::Drawing::Point(229, 267);
            this->textBox7->Margin = System::Windows::Forms::Padding(4);
            this->textBox7->Multiline = true;
            this->textBox7->Name = L"textBox7";
            this->textBox7->ReadOnly = true;
            this->textBox7->Size = System::Drawing::Size(1755, 70);
            this->textBox7->TabIndex = 1;
            this->textBox7->Text = L"dddd\r\nddd";
            // 
            // textBox11
            // 
            this->textBox11->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->textBox11->BackColor = System::Drawing::Color::Gray;
            this->textBox11->Cursor = System::Windows::Forms::Cursors::Hand;
            this->textBox11->Font = (gcnew System::Drawing::Font(L"Cambria", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox11->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->textBox11->Location = System::Drawing::Point(229, 188);
            this->textBox11->Margin = System::Windows::Forms::Padding(4);
            this->textBox11->Multiline = true;
            this->textBox11->Name = L"textBox11";
            this->textBox11->ReadOnly = true;
            this->textBox11->Size = System::Drawing::Size(1755, 70);
            this->textBox11->TabIndex = 1;
            this->textBox11->Text = L"dddd\r\nddd";
            // 
            // textBox15
            // 
            this->textBox15->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->textBox15->BackColor = System::Drawing::Color::Gray;
            this->textBox15->Cursor = System::Windows::Forms::Cursors::Hand;
            this->textBox15->Font = (gcnew System::Drawing::Font(L"Cambria", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox15->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->textBox15->Location = System::Drawing::Point(229, 32);
            this->textBox15->Margin = System::Windows::Forms::Padding(4);
            this->textBox15->Multiline = true;
            this->textBox15->Name = L"textBox15";
            this->textBox15->ReadOnly = true;
            this->textBox15->Size = System::Drawing::Size(1755, 70);
            this->textBox15->TabIndex = 1;
            this->textBox15->Text = L"dddd\r\nddd";
            // 
            // textBox19
            // 
            this->textBox19->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->textBox19->BackColor = System::Drawing::Color::Gray;
            this->textBox19->Cursor = System::Windows::Forms::Cursors::Hand;
            this->textBox19->Font = (gcnew System::Drawing::Font(L"Cambria", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox19->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->textBox19->Location = System::Drawing::Point(229, 110);
            this->textBox19->Margin = System::Windows::Forms::Padding(4);
            this->textBox19->Multiline = true;
            this->textBox19->Name = L"textBox19";
            this->textBox19->ReadOnly = true;
            this->textBox19->Size = System::Drawing::Size(1755, 70);
            this->textBox19->TabIndex = 1;
            this->textBox19->Text = L"dddd\r\nddd";
            // 
            // radioButton37
            // 
            this->radioButton37->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->radioButton37->AutoSize = true;
            this->radioButton37->BackColor = System::Drawing::Color::Transparent;
            this->radioButton37->Cursor = System::Windows::Forms::Cursors::Hand;
            this->radioButton37->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->radioButton37->ForeColor = System::Drawing::Color::Gold;
            this->radioButton37->Location = System::Drawing::Point(175, 283);
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
            this->radioButton38->BackColor = System::Drawing::Color::Transparent;
            this->radioButton38->Cursor = System::Windows::Forms::Cursors::Hand;
            this->radioButton38->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->radioButton38->ForeColor = System::Drawing::Color::Gold;
            this->radioButton38->Location = System::Drawing::Point(175, 54);
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
            this->radioButton39->BackColor = System::Drawing::Color::Transparent;
            this->radioButton39->Cursor = System::Windows::Forms::Cursors::Hand;
            this->radioButton39->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->radioButton39->ForeColor = System::Drawing::Color::Gold;
            this->radioButton39->Location = System::Drawing::Point(174, 129);
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
            this->radioButton40->BackColor = System::Drawing::Color::Transparent;
            this->radioButton40->Cursor = System::Windows::Forms::Cursors::Hand;
            this->radioButton40->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->radioButton40->ForeColor = System::Drawing::Color::Gold;
            this->radioButton40->Location = System::Drawing::Point(174, 205);
            this->radioButton40->Margin = System::Windows::Forms::Padding(4);
            this->radioButton40->Name = L"radioButton40";
            this->radioButton40->Size = System::Drawing::Size(45, 31);
            this->radioButton40->TabIndex = 2;
            this->radioButton40->TabStop = true;
            this->radioButton40->Text = L"c";
            this->radioButton40->UseVisualStyleBackColor = false;
            // 
            // panel12
            // 
            this->panel12->Location = System::Drawing::Point(606, 5546);
            this->panel12->Name = L"panel12";
            this->panel12->Size = System::Drawing::Size(1273, 953);
            this->panel12->TabIndex = 82;
            // 
            // Startpage
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->AutoScroll = true;
            this->AutoScrollMinSize = System::Drawing::Size(665, 4900);
            this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
                static_cast<System::Int32>(static_cast<System::Byte>(54)));
            this->ClientSize = System::Drawing::Size(1942, 453);
            this->Controls->Add(this->richTextBox2);
            this->Controls->Add(this->panel11);
            this->Controls->Add(this->rtbQuestionDisplay9);
            this->Controls->Add(this->panel10);
            this->Controls->Add(this->rtbQuestionDisplay8);
            this->Controls->Add(this->panel8);
            this->Controls->Add(this->tbOptnA8);
            this->Controls->Add(this->panel7);
            this->Controls->Add(this->rtbQuestionDisplay6);
            this->Controls->Add(this->panel6);
            this->Controls->Add(this->rtbQuestionDisplay5);
            this->Controls->Add(this->panel5);
            this->Controls->Add(this->rtbQuestionDisplay4);
            this->Controls->Add(this->panel4);
            this->Controls->Add(this->rtbQuestionDisplay3);
            this->Controls->Add(this->panel3);
            this->Controls->Add(this->rtbQuestionDisplay2);
            this->Controls->Add(this->panel2);
            this->Controls->Add(this->lb3);
            this->Controls->Add(this->button2);
            this->Controls->Add(this->button1);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->label1);
            this->Controls->Add(this->rtbQuestionDisplay);
            this->Controls->Add(this->label3);
            this->Controls->Add(this->panel1);
            this->Controls->Add(this->panel12);
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
            this->panel10->ResumeLayout(false);
            this->panel10->PerformLayout();
            this->panel11->ResumeLayout(false);
            this->panel11->PerformLayout();
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

            }
            else {
                this->label2->ForeColor = System::Drawing::Color::Turquoise;
                this->label1->ForeColor = System::Drawing::Color::Turquoise;
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


    public: void Startpage::connectSQL(Question^ question_list) {
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

}
private: System::Void rtbQuestionDisplay_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void rtbQuestionDisplay2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void tbOptnA_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    radioButton2->CheckedChanged += gcnew System::EventHandler(this, &Startpage::radioButton2_CheckedChanged);
}
private: System::Void tbOptnA_Click(System::Object^ sender, System::EventArgs^ e) {
           radioButton2->CheckedChanged += gcnew System::EventHandler(this, &Startpage::radioButton2_CheckedChanged);
}
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
    radioButton2->CheckedChanged += gcnew System::EventHandler(this, &Startpage::radioButton2_CheckedChanged);
    //Refresh();
}
private: System::Void panel3_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void rtbQuestionDisplay2_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void tbOptnC_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel8_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
