#pragma once
#include "Questions.h"
#include <string.h>



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
                    int i = 1;
                    String^ connString = "Data Source=tcp:uec.database.windows.net;Initial Catalog=uecdb;Persist Security Info=True;User ID=sqluec;Password=L12@sqd3";
                    //Data Source=tcp:uec.database.windows.net;Initial Catalog=uecdb;Persist Security Info=True;User ID=sqluec;Password=***********
                    SqlConnection sqlConn(connString);
                    sqlConn.Open();
                    String^ sqlQuery = "SELECT * FROM english1;";
                    SqlCommand command(sqlQuery, % sqlConn);
                    SqlDataReader^ reader = command.ExecuteReader();

                    Question^ question_list = gcnew Question;
                    //1
                    readdb(reader, question_list);

                    rtbQuestionDisplay->Text = i + ".\t" + question_list->question;
                    tbOptnA->Text = question_list->Option_a;
                    tbOptnB->Text = question_list->Option_b;
                    tbOptnC->Text = question_list->Option_c;
                    tbOptnD->Text = question_list->Option_d;
                    char ANS = 'a';
                    if (ANS == ans1) {
                        score1++;
                    }
                    //2
                    i++;
                    readdb(reader, question_list);

                    rtbQuestionDisplay2->Text = i + ".\t" + question_list->question;
                    tbOptnA2->Text = question_list->Option_a;
                    tbOptnB2->Text = question_list->Option_b;
                    tbOptnC2->Text = question_list->Option_c;
                    tbOptnD2->Text = question_list->Option_d;
                    //ANS = question_list->Correct_optn;
                    if (ANS == ans2) {
                        score2++;
                    }
                    //3
                    i++;
                    readdb(reader, question_list);

                    rtbQuestionDisplay3->Text = i + ".\t" + question_list->question;
                    tbOptnA3->Text = question_list->Option_a;
                    tbOptnB3->Text = question_list->Option_b;
                    tbOptnC3->Text = question_list->Option_c;
                    tbOptnD3->Text = question_list->Option_d;
                    //ANS = question_list->Correct_optn;
                    if (ANS == ans3) {
                        score3++;
                    }
                    //4
                    i++;
                    readdb(reader, question_list);

                    rtbQuestionDisplay4->Text = i + ".\t" + question_list->question;
                    tbOptnA4->Text = question_list->Option_a;
                    tbOptnB4->Text = question_list->Option_b;
                    tbOptnC4->Text = question_list->Option_c;
                    tbOptnD4->Text = question_list->Option_d;
                    //ANS = question_list->Correct_optn;
                    if (ANS == ans4) {
                        score4++;
                    }
                    //5
                    i++;
                    readdb(reader, question_list);

                    rtbQuestionDisplay5->Text = i + ".\t" + question_list->question;
                    tbOptnA5->Text = question_list->Option_a;
                    tbOptnB5->Text = question_list->Option_b;
                    tbOptnC5->Text = question_list->Option_c;
                    tbOptnD5->Text = question_list->Option_d;
                    //ANS = question_list->Correct_optn;
                    if (ANS == ans5) {
                        score5++;
                    }
                    //6
                    i++;
                    readdb(reader, question_list);

                    rtbQuestionDisplay6->Text = i + ".\t" + question_list->question;
                    tbOptnA6->Text = question_list->Option_a;
                    tbOptnB6->Text = question_list->Option_b;
                    tbOptnC6->Text = question_list->Option_c;
                    tbOptnD6->Text = question_list->Option_d;
                    //ANS = question_list->Correct_optn;
                    if (ANS == ans6) {
                        score6++;
                    }
                    //7
                    i++;
                    readdb(reader, question_list);

                    rtbQuestionDisplay7->Text = i + ".\t" + question_list->question;
                    tbOptnA7->Text = question_list->Option_a;
                    tbOptnB7->Text = question_list->Option_b;
                    tbOptnC7->Text = question_list->Option_c;
                    tbOptnD7->Text = question_list->Option_d;
                    //ANS = question_list->Correct_optn;
                    if (ANS == ans7) {
                        score7++;
                    }
                    //8
                    i++;
                    readdb(reader, question_list);

                    rtbQuestionDisplay8->Text = i + ".\t" + question_list->question;
                    tbOptnA8->Text = question_list->Option_a;
                    tbOptnB8->Text = question_list->Option_b;
                    tbOptnC8->Text = question_list->Option_c;
                    tbOptnD8->Text = question_list->Option_d;
                    //ANS = question_list->Correct_optn;
                    if (ANS == ans8) {
                        score8++;
                    }
                    //9
                    i++;
                    readdb(reader, question_list);

                    rtbQuestionDisplay9->Text = i + ".\t" + question_list->question;
                    tbOptnA9->Text = question_list->Option_a;
                    tbOptnB9->Text = question_list->Option_b;
                    tbOptnC9->Text = question_list->Option_c;
                    tbOptnD9->Text = question_list->Option_d;
                    // ANS = question_list->Correct_optn;
                    if (ANS == ans9) {
                        score9++;
                    }
                    //10
                    i++;
                    readdb(reader, question_list);

                    rtbQuestionDisplay10->Text = i + ".\t" + question_list->question;
                    tbOptnA10->Text = question_list->Option_a;
                    tbOptnB10->Text = question_list->Option_b;
                    tbOptnC10->Text = question_list->Option_c;
                    tbOptnD10->Text = question_list->Option_d;
                    // ANS = question_list->Correct_optn;
                    if (ANS == ans10) {
                        score10++;
                    }

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
private: System::Windows::Forms::RadioButton^ rb1C;



private: System::Windows::Forms::RadioButton^ rb1B;

private: System::Windows::Forms::RadioButton^ rb1A;
private: System::Windows::Forms::RadioButton^ rb1D;


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
private: System::Windows::Forms::RadioButton^ rb2D;

private: System::Windows::Forms::RadioButton^ rb2A;
private: System::Windows::Forms::RadioButton^ rb2B;
private: System::Windows::Forms::RadioButton^ rb2C;



private: System::Windows::Forms::RichTextBox^ rtbQuestionDisplay3;
private: System::Windows::Forms::Panel^ panel3;
private: System::Windows::Forms::TextBox^ tbOptnD3;

private: System::Windows::Forms::TextBox^ tbOptnC3;

private: System::Windows::Forms::TextBox^ tbOptnA3;
private: System::Windows::Forms::TextBox^ tbOptnB3;
private: System::Windows::Forms::RadioButton^ rb3D;


private: System::Windows::Forms::RadioButton^ rb3A;
private: System::Windows::Forms::RadioButton^ rb3B;
private: System::Windows::Forms::RadioButton^ rb3C;




private: System::Windows::Forms::RichTextBox^ rtbQuestionDisplay4;
private: System::Windows::Forms::Panel^ panel4;
private: System::Windows::Forms::TextBox^ tbOptnD4;

private: System::Windows::Forms::TextBox^ tbOptnC4;

private: System::Windows::Forms::TextBox^ tbOptnA4;
private: System::Windows::Forms::TextBox^ tbOptnB4;
private: System::Windows::Forms::RadioButton^ rb4D;


private: System::Windows::Forms::RadioButton^ rb4A;
private: System::Windows::Forms::RadioButton^ rb4B;
private: System::Windows::Forms::RadioButton^ rb4C;



private: System::Windows::Forms::RichTextBox^ rtbQuestionDisplay5;
private: System::Windows::Forms::Panel^ panel5;
private: System::Windows::Forms::TextBox^ tbOptnD5;

private: System::Windows::Forms::TextBox^ tbOptnC5;

private: System::Windows::Forms::TextBox^ tbOptnA5;
private: System::Windows::Forms::TextBox^ tbOptnB5;
private: System::Windows::Forms::RadioButton^ rb5D;


private: System::Windows::Forms::RadioButton^ rb5A;
private: System::Windows::Forms::RadioButton^ rb5B;
private: System::Windows::Forms::RadioButton^ rb5C;




private: System::Windows::Forms::RichTextBox^ rtbQuestionDisplay6;
private: System::Windows::Forms::Panel^ panel6;
private: System::Windows::Forms::TextBox^ tbOptnD6;

private: System::Windows::Forms::TextBox^ tbOptnC6;

private: System::Windows::Forms::TextBox^ tbOptnA6;
private: System::Windows::Forms::TextBox^ tbOptnB6;
private: System::Windows::Forms::RadioButton^ rb6D;


private: System::Windows::Forms::RadioButton^ rb6A;
private: System::Windows::Forms::RadioButton^ rb6B;
private: System::Windows::Forms::RadioButton^ rb6C;



private: System::Windows::Forms::RichTextBox^ rtbQuestionDisplay7;

private: System::Windows::Forms::Panel^ panel7;
private: System::Windows::Forms::TextBox^ tbOptnD7;

private: System::Windows::Forms::TextBox^ tbOptnC7;

private: System::Windows::Forms::TextBox^ tbOptnA7;
private: System::Windows::Forms::TextBox^ tbOptnB7;
private: System::Windows::Forms::RadioButton^ rb7D;



private: System::Windows::Forms::RadioButton^ rb7A;
private: System::Windows::Forms::RadioButton^ rb7B;
private: System::Windows::Forms::RadioButton^ rb7C;



private: System::Windows::Forms::RichTextBox^ rtbQuestionDisplay8;
private: System::Windows::Forms::RadioButton^ rb8C;

private: System::Windows::Forms::RadioButton^ rb8B;

private: System::Windows::Forms::RadioButton^ rb8A;
private: System::Windows::Forms::RadioButton^ rb8D;


private: System::Windows::Forms::TextBox^ tbOptnB8;
private: System::Windows::Forms::TextBox^ tbOptnA8;


private: System::Windows::Forms::TextBox^ tbOptnC8;
private: System::Windows::Forms::TextBox^ tbOptnD8;


private: System::Windows::Forms::Panel^ panel8;

private: System::Windows::Forms::RichTextBox^ rtbQuestionDisplay9;

private: System::Windows::Forms::Panel^ panel10;
private: System::Windows::Forms::TextBox^ tbOptnD9;

private: System::Windows::Forms::TextBox^ tbOptnC9;

private: System::Windows::Forms::TextBox^ tbOptnA9;
private: System::Windows::Forms::TextBox^ tbOptnB9;
private: System::Windows::Forms::RadioButton^ rb9D;



private: System::Windows::Forms::RadioButton^ rb9A;
private: System::Windows::Forms::RadioButton^ rb9B;
private: System::Windows::Forms::RadioButton^ rb9C;



private: System::Windows::Forms::RichTextBox^ rtbQuestionDisplay10;

private: System::Windows::Forms::Panel^ panel11;
private: System::Windows::Forms::TextBox^ tbOptnD10;

private: System::Windows::Forms::TextBox^ tbOptnC10;

private: System::Windows::Forms::TextBox^ tbOptnA10;
private: System::Windows::Forms::TextBox^ tbOptnB10;
private: System::Windows::Forms::RadioButton^ rb10D;



private: System::Windows::Forms::RadioButton^ rb10A;
private: System::Windows::Forms::RadioButton^ rb10B;
private: System::Windows::Forms::RadioButton^ rb10C;



































































































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
            this->rb1C = (gcnew System::Windows::Forms::RadioButton());
            this->rb1B = (gcnew System::Windows::Forms::RadioButton());
            this->rb1A = (gcnew System::Windows::Forms::RadioButton());
            this->rb1D = (gcnew System::Windows::Forms::RadioButton());
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
            this->rb2D = (gcnew System::Windows::Forms::RadioButton());
            this->rb2A = (gcnew System::Windows::Forms::RadioButton());
            this->rb2B = (gcnew System::Windows::Forms::RadioButton());
            this->rb2C = (gcnew System::Windows::Forms::RadioButton());
            this->rtbQuestionDisplay3 = (gcnew System::Windows::Forms::RichTextBox());
            this->panel3 = (gcnew System::Windows::Forms::Panel());
            this->tbOptnD3 = (gcnew System::Windows::Forms::TextBox());
            this->tbOptnC3 = (gcnew System::Windows::Forms::TextBox());
            this->tbOptnA3 = (gcnew System::Windows::Forms::TextBox());
            this->tbOptnB3 = (gcnew System::Windows::Forms::TextBox());
            this->rb3D = (gcnew System::Windows::Forms::RadioButton());
            this->rb3A = (gcnew System::Windows::Forms::RadioButton());
            this->rb3B = (gcnew System::Windows::Forms::RadioButton());
            this->rb3C = (gcnew System::Windows::Forms::RadioButton());
            this->rtbQuestionDisplay4 = (gcnew System::Windows::Forms::RichTextBox());
            this->panel4 = (gcnew System::Windows::Forms::Panel());
            this->tbOptnD4 = (gcnew System::Windows::Forms::TextBox());
            this->tbOptnC4 = (gcnew System::Windows::Forms::TextBox());
            this->tbOptnA4 = (gcnew System::Windows::Forms::TextBox());
            this->tbOptnB4 = (gcnew System::Windows::Forms::TextBox());
            this->rb4D = (gcnew System::Windows::Forms::RadioButton());
            this->rb4A = (gcnew System::Windows::Forms::RadioButton());
            this->rb4B = (gcnew System::Windows::Forms::RadioButton());
            this->rb4C = (gcnew System::Windows::Forms::RadioButton());
            this->rtbQuestionDisplay5 = (gcnew System::Windows::Forms::RichTextBox());
            this->panel5 = (gcnew System::Windows::Forms::Panel());
            this->tbOptnD5 = (gcnew System::Windows::Forms::TextBox());
            this->tbOptnC5 = (gcnew System::Windows::Forms::TextBox());
            this->tbOptnA5 = (gcnew System::Windows::Forms::TextBox());
            this->tbOptnB5 = (gcnew System::Windows::Forms::TextBox());
            this->rb5D = (gcnew System::Windows::Forms::RadioButton());
            this->rb5A = (gcnew System::Windows::Forms::RadioButton());
            this->rb5B = (gcnew System::Windows::Forms::RadioButton());
            this->rb5C = (gcnew System::Windows::Forms::RadioButton());
            this->rtbQuestionDisplay6 = (gcnew System::Windows::Forms::RichTextBox());
            this->panel6 = (gcnew System::Windows::Forms::Panel());
            this->tbOptnD6 = (gcnew System::Windows::Forms::TextBox());
            this->tbOptnC6 = (gcnew System::Windows::Forms::TextBox());
            this->tbOptnA6 = (gcnew System::Windows::Forms::TextBox());
            this->tbOptnB6 = (gcnew System::Windows::Forms::TextBox());
            this->rb6D = (gcnew System::Windows::Forms::RadioButton());
            this->rb6A = (gcnew System::Windows::Forms::RadioButton());
            this->rb6B = (gcnew System::Windows::Forms::RadioButton());
            this->rb6C = (gcnew System::Windows::Forms::RadioButton());
            this->rtbQuestionDisplay7 = (gcnew System::Windows::Forms::RichTextBox());
            this->panel7 = (gcnew System::Windows::Forms::Panel());
            this->tbOptnD7 = (gcnew System::Windows::Forms::TextBox());
            this->tbOptnC7 = (gcnew System::Windows::Forms::TextBox());
            this->tbOptnA7 = (gcnew System::Windows::Forms::TextBox());
            this->tbOptnB7 = (gcnew System::Windows::Forms::TextBox());
            this->rb7D = (gcnew System::Windows::Forms::RadioButton());
            this->rb7A = (gcnew System::Windows::Forms::RadioButton());
            this->rb7B = (gcnew System::Windows::Forms::RadioButton());
            this->rb7C = (gcnew System::Windows::Forms::RadioButton());
            this->rtbQuestionDisplay8 = (gcnew System::Windows::Forms::RichTextBox());
            this->rb8C = (gcnew System::Windows::Forms::RadioButton());
            this->rb8B = (gcnew System::Windows::Forms::RadioButton());
            this->rb8A = (gcnew System::Windows::Forms::RadioButton());
            this->rb8D = (gcnew System::Windows::Forms::RadioButton());
            this->tbOptnB8 = (gcnew System::Windows::Forms::TextBox());
            this->tbOptnA8 = (gcnew System::Windows::Forms::TextBox());
            this->tbOptnC8 = (gcnew System::Windows::Forms::TextBox());
            this->tbOptnD8 = (gcnew System::Windows::Forms::TextBox());
            this->panel8 = (gcnew System::Windows::Forms::Panel());
            this->rtbQuestionDisplay9 = (gcnew System::Windows::Forms::RichTextBox());
            this->panel10 = (gcnew System::Windows::Forms::Panel());
            this->tbOptnD9 = (gcnew System::Windows::Forms::TextBox());
            this->tbOptnC9 = (gcnew System::Windows::Forms::TextBox());
            this->tbOptnA9 = (gcnew System::Windows::Forms::TextBox());
            this->tbOptnB9 = (gcnew System::Windows::Forms::TextBox());
            this->rb9D = (gcnew System::Windows::Forms::RadioButton());
            this->rb9A = (gcnew System::Windows::Forms::RadioButton());
            this->rb9B = (gcnew System::Windows::Forms::RadioButton());
            this->rb9C = (gcnew System::Windows::Forms::RadioButton());
            this->rtbQuestionDisplay10 = (gcnew System::Windows::Forms::RichTextBox());
            this->panel11 = (gcnew System::Windows::Forms::Panel());
            this->tbOptnD10 = (gcnew System::Windows::Forms::TextBox());
            this->tbOptnC10 = (gcnew System::Windows::Forms::TextBox());
            this->tbOptnA10 = (gcnew System::Windows::Forms::TextBox());
            this->tbOptnB10 = (gcnew System::Windows::Forms::TextBox());
            this->rb10D = (gcnew System::Windows::Forms::RadioButton());
            this->rb10A = (gcnew System::Windows::Forms::RadioButton());
            this->rb10B = (gcnew System::Windows::Forms::RadioButton());
            this->rb10C = (gcnew System::Windows::Forms::RadioButton());
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
            this->label1->Location = System::Drawing::Point(1511, 93);
            this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(248, 41);
            this->label1->TabIndex = 4;
            this->label1->Text = L"Time Remaining:";
            this->label1->Click += gcnew System::EventHandler(this, &Startpage::label1_Click);
            // 
            // label2
            // 
            this->label2->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label2->AutoSize = true;
            this->label2->BackColor = System::Drawing::Color::Transparent;
            this->label2->Font = (gcnew System::Drawing::Font(L"Calibri Light", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label2->ForeColor = System::Drawing::Color::Gold;
            this->label2->Location = System::Drawing::Point(1751, 93);
            this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(121, 41);
            this->label2->TabIndex = 4;
            this->label2->Text = L"2:00:00";
            this->label2->Click += gcnew System::EventHandler(this, &Startpage::label2_Click);
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
            this->button2->Location = System::Drawing::Point(1174, 6328);
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
            this->button1->Location = System::Drawing::Point(826, 6328);
            this->button1->Margin = System::Windows::Forms::Padding(4);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(340, 85);
            this->button1->TabIndex = 58;
            this->button1->Text = L"Next";
            this->button1->UseVisualStyleBackColor = false;
            this->button1->Click += gcnew System::EventHandler(this, &Startpage::button1_Click);
            // 
            // rb1C
            // 
            this->rb1C->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->rb1C->AutoSize = true;
            this->rb1C->BackColor = System::Drawing::Color::Transparent;
            this->rb1C->Cursor = System::Windows::Forms::Cursors::Hand;
            this->rb1C->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->rb1C->ForeColor = System::Drawing::Color::Gold;
            this->rb1C->Location = System::Drawing::Point(174, 205);
            this->rb1C->Margin = System::Windows::Forms::Padding(4);
            this->rb1C->Name = L"rb1C";
            this->rb1C->Size = System::Drawing::Size(45, 31);
            this->rb1C->TabIndex = 2;
            this->rb1C->TabStop = true;
            this->rb1C->Text = L"c";
            this->rb1C->UseVisualStyleBackColor = false;
            this->rb1C->CheckedChanged += gcnew System::EventHandler(this, &Startpage::radioButton4_CheckedChanged);
            // 
            // rb1B
            // 
            this->rb1B->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->rb1B->AutoSize = true;
            this->rb1B->BackColor = System::Drawing::Color::Transparent;
            this->rb1B->Cursor = System::Windows::Forms::Cursors::Hand;
            this->rb1B->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->rb1B->ForeColor = System::Drawing::Color::Gold;
            this->rb1B->Location = System::Drawing::Point(174, 129);
            this->rb1B->Margin = System::Windows::Forms::Padding(4);
            this->rb1B->Name = L"rb1B";
            this->rb1B->Size = System::Drawing::Size(46, 31);
            this->rb1B->TabIndex = 2;
            this->rb1B->TabStop = true;
            this->rb1B->Text = L"b";
            this->rb1B->UseVisualStyleBackColor = false;
            this->rb1B->CheckedChanged += gcnew System::EventHandler(this, &Startpage::radioButton3_CheckedChanged);
            // 
            // rb1A
            // 
            this->rb1A->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->rb1A->AutoSize = true;
            this->rb1A->BackColor = System::Drawing::Color::Transparent;
            this->rb1A->Cursor = System::Windows::Forms::Cursors::Hand;
            this->rb1A->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->rb1A->ForeColor = System::Drawing::Color::Gold;
            this->rb1A->Location = System::Drawing::Point(175, 54);
            this->rb1A->Margin = System::Windows::Forms::Padding(4);
            this->rb1A->Name = L"rb1A";
            this->rb1A->Size = System::Drawing::Size(46, 31);
            this->rb1A->TabIndex = 2;
            this->rb1A->TabStop = true;
            this->rb1A->Text = L"a";
            this->rb1A->UseVisualStyleBackColor = false;
            this->rb1A->CheckedChanged += gcnew System::EventHandler(this, &Startpage::rb1A_CheckedChanged);
            // 
            // rb1D
            // 
            this->rb1D->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->rb1D->AutoSize = true;
            this->rb1D->BackColor = System::Drawing::Color::Transparent;
            this->rb1D->Cursor = System::Windows::Forms::Cursors::Hand;
            this->rb1D->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->rb1D->ForeColor = System::Drawing::Color::Gold;
            this->rb1D->Location = System::Drawing::Point(175, 283);
            this->rb1D->Margin = System::Windows::Forms::Padding(4);
            this->rb1D->Name = L"rb1D";
            this->rb1D->Size = System::Drawing::Size(46, 31);
            this->rb1D->TabIndex = 2;
            this->rb1D->TabStop = true;
            this->rb1D->Text = L"d";
            this->rb1D->UseVisualStyleBackColor = false;
            this->rb1D->CheckedChanged += gcnew System::EventHandler(this, &Startpage::radioButton1_CheckedChanged);
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
            this->tbOptnB->TextChanged += gcnew System::EventHandler(this, &Startpage::tbOptnB_TextChanged);
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
            this->panel1->Controls->Add(this->rb1D);
            this->panel1->Controls->Add(this->rb1A);
            this->panel1->Controls->Add(this->rb1B);
            this->panel1->Controls->Add(this->rb1C);
            this->panel1->ForeColor = System::Drawing::SystemColors::Desktop;
            this->panel1->Location = System::Drawing::Point(-118, 376);
            this->panel1->Margin = System::Windows::Forms::Padding(4);
            this->panel1->Name = L"panel1";
            this->panel1->Size = System::Drawing::Size(1994, 390);
            this->panel1->TabIndex = 41;
            this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Startpage::panel1_Paint);
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
            this->tbOptnD->TextChanged += gcnew System::EventHandler(this, &Startpage::tbOptnD_TextChanged);
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
            this->rtbQuestionDisplay->Location = System::Drawing::Point(7, 152);
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
            this->lb3->Location = System::Drawing::Point(1923, -4294);
            this->lb3->Name = L"lb3";
            this->lb3->Size = System::Drawing::Size(0, 16);
            this->lb3->TabIndex = 59;
            this->lb3->Click += gcnew System::EventHandler(this, &Startpage::lb3_Click);
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 72, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label3->Location = System::Drawing::Point(208, 3);
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
            this->rtbQuestionDisplay2->Location = System::Drawing::Point(7, 754);
            this->rtbQuestionDisplay2->Margin = System::Windows::Forms::Padding(4);
            this->rtbQuestionDisplay2->Name = L"rtbQuestionDisplay2";
            this->rtbQuestionDisplay2->ReadOnly = true;
            this->rtbQuestionDisplay2->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::None;
            this->rtbQuestionDisplay2->Size = System::Drawing::Size(1869, 223);
            this->rtbQuestionDisplay2->TabIndex = 63;
            this->rtbQuestionDisplay2->Text = L"ddddd";
            this->rtbQuestionDisplay2->TextChanged += gcnew System::EventHandler(this, &Startpage::rtbQuestionDisplay2_TextChanged_2);
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
            this->panel2->Controls->Add(this->rb2D);
            this->panel2->Controls->Add(this->rb2A);
            this->panel2->Controls->Add(this->rb2B);
            this->panel2->Controls->Add(this->rb2C);
            this->panel2->ForeColor = System::Drawing::SystemColors::Desktop;
            this->panel2->Location = System::Drawing::Point(-118, 981);
            this->panel2->Margin = System::Windows::Forms::Padding(4);
            this->panel2->Name = L"panel2";
            this->panel2->Size = System::Drawing::Size(1994, 390);
            this->panel2->TabIndex = 64;
            this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Startpage::panel2_Paint_1);
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
            this->tbOptnD2->TextChanged += gcnew System::EventHandler(this, &Startpage::tbOptnD2_TextChanged);
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
            this->tbOptnC2->TextChanged += gcnew System::EventHandler(this, &Startpage::tbOptnC2_TextChanged);
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
            this->tbOptnA2->TextChanged += gcnew System::EventHandler(this, &Startpage::tbOptnA2_TextChanged);
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
            this->tbOptnB2->TextChanged += gcnew System::EventHandler(this, &Startpage::tbOptnB2_TextChanged);
            // 
            // rb2D
            // 
            this->rb2D->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->rb2D->AutoSize = true;
            this->rb2D->BackColor = System::Drawing::Color::Transparent;
            this->rb2D->Cursor = System::Windows::Forms::Cursors::Hand;
            this->rb2D->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->rb2D->ForeColor = System::Drawing::Color::Gold;
            this->rb2D->Location = System::Drawing::Point(175, 283);
            this->rb2D->Margin = System::Windows::Forms::Padding(4);
            this->rb2D->Name = L"rb2D";
            this->rb2D->Size = System::Drawing::Size(46, 31);
            this->rb2D->TabIndex = 2;
            this->rb2D->TabStop = true;
            this->rb2D->Text = L"d";
            this->rb2D->UseVisualStyleBackColor = false;
            this->rb2D->CheckedChanged += gcnew System::EventHandler(this, &Startpage::radioButton5_CheckedChanged);
            // 
            // rb2A
            // 
            this->rb2A->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->rb2A->AutoSize = true;
            this->rb2A->BackColor = System::Drawing::Color::Transparent;
            this->rb2A->Cursor = System::Windows::Forms::Cursors::Hand;
            this->rb2A->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->rb2A->ForeColor = System::Drawing::Color::Gold;
            this->rb2A->Location = System::Drawing::Point(175, 54);
            this->rb2A->Margin = System::Windows::Forms::Padding(4);
            this->rb2A->Name = L"rb2A";
            this->rb2A->Size = System::Drawing::Size(46, 31);
            this->rb2A->TabIndex = 2;
            this->rb2A->TabStop = true;
            this->rb2A->Text = L"a";
            this->rb2A->UseVisualStyleBackColor = false;
            this->rb2A->CheckedChanged += gcnew System::EventHandler(this, &Startpage::rb2A_CheckedChanged);
            // 
            // rb2B
            // 
            this->rb2B->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->rb2B->AutoSize = true;
            this->rb2B->BackColor = System::Drawing::Color::Transparent;
            this->rb2B->Cursor = System::Windows::Forms::Cursors::Hand;
            this->rb2B->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->rb2B->ForeColor = System::Drawing::Color::Gold;
            this->rb2B->Location = System::Drawing::Point(174, 129);
            this->rb2B->Margin = System::Windows::Forms::Padding(4);
            this->rb2B->Name = L"rb2B";
            this->rb2B->Size = System::Drawing::Size(46, 31);
            this->rb2B->TabIndex = 2;
            this->rb2B->TabStop = true;
            this->rb2B->Text = L"b";
            this->rb2B->UseVisualStyleBackColor = false;
            this->rb2B->CheckedChanged += gcnew System::EventHandler(this, &Startpage::radioButton7_CheckedChanged);
            // 
            // rb2C
            // 
            this->rb2C->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->rb2C->AutoSize = true;
            this->rb2C->BackColor = System::Drawing::Color::Transparent;
            this->rb2C->Cursor = System::Windows::Forms::Cursors::Hand;
            this->rb2C->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->rb2C->ForeColor = System::Drawing::Color::Gold;
            this->rb2C->Location = System::Drawing::Point(174, 205);
            this->rb2C->Margin = System::Windows::Forms::Padding(4);
            this->rb2C->Name = L"rb2C";
            this->rb2C->Size = System::Drawing::Size(45, 31);
            this->rb2C->TabIndex = 2;
            this->rb2C->TabStop = true;
            this->rb2C->Text = L"c";
            this->rb2C->UseVisualStyleBackColor = false;
            this->rb2C->CheckedChanged += gcnew System::EventHandler(this, &Startpage::radioButton8_CheckedChanged);
            // 
            // rtbQuestionDisplay3
            // 
            this->rtbQuestionDisplay3->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->rtbQuestionDisplay3->BackColor = System::Drawing::Color::DimGray;
            this->rtbQuestionDisplay3->Cursor = System::Windows::Forms::Cursors::Default;
            this->rtbQuestionDisplay3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 25.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->rtbQuestionDisplay3->ForeColor = System::Drawing::SystemColors::InfoText;
            this->rtbQuestionDisplay3->Location = System::Drawing::Point(7, 1360);
            this->rtbQuestionDisplay3->Margin = System::Windows::Forms::Padding(4);
            this->rtbQuestionDisplay3->Name = L"rtbQuestionDisplay3";
            this->rtbQuestionDisplay3->ReadOnly = true;
            this->rtbQuestionDisplay3->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::None;
            this->rtbQuestionDisplay3->Size = System::Drawing::Size(1869, 223);
            this->rtbQuestionDisplay3->TabIndex = 65;
            this->rtbQuestionDisplay3->Text = L"ddddd";
            this->rtbQuestionDisplay3->TextChanged += gcnew System::EventHandler(this, &Startpage::rtbQuestionDisplay3_TextChanged);
            // 
            // panel3
            // 
            this->panel3->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
                static_cast<System::Int32>(static_cast<System::Byte>(54)));
            this->panel3->Controls->Add(this->tbOptnD3);
            this->panel3->Controls->Add(this->tbOptnC3);
            this->panel3->Controls->Add(this->tbOptnA3);
            this->panel3->Controls->Add(this->tbOptnB3);
            this->panel3->Controls->Add(this->rb3D);
            this->panel3->Controls->Add(this->rb3A);
            this->panel3->Controls->Add(this->rb3B);
            this->panel3->Controls->Add(this->rb3C);
            this->panel3->ForeColor = System::Drawing::SystemColors::Desktop;
            this->panel3->Location = System::Drawing::Point(-118, 1587);
            this->panel3->Margin = System::Windows::Forms::Padding(4);
            this->panel3->Name = L"panel3";
            this->panel3->Size = System::Drawing::Size(1994, 390);
            this->panel3->TabIndex = 66;
            this->panel3->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Startpage::panel3_Paint_1);
            // 
            // tbOptnD3
            // 
            this->tbOptnD3->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->tbOptnD3->BackColor = System::Drawing::Color::Gray;
            this->tbOptnD3->Cursor = System::Windows::Forms::Cursors::Hand;
            this->tbOptnD3->Font = (gcnew System::Drawing::Font(L"Cambria", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tbOptnD3->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->tbOptnD3->Location = System::Drawing::Point(229, 267);
            this->tbOptnD3->Margin = System::Windows::Forms::Padding(4);
            this->tbOptnD3->Multiline = true;
            this->tbOptnD3->Name = L"tbOptnD3";
            this->tbOptnD3->ReadOnly = true;
            this->tbOptnD3->Size = System::Drawing::Size(1755, 70);
            this->tbOptnD3->TabIndex = 1;
            this->tbOptnD3->Text = L"dddd\r\nddd";
            this->tbOptnD3->TextChanged += gcnew System::EventHandler(this, &Startpage::textBox5_TextChanged);
            // 
            // tbOptnC3
            // 
            this->tbOptnC3->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->tbOptnC3->BackColor = System::Drawing::Color::Gray;
            this->tbOptnC3->Cursor = System::Windows::Forms::Cursors::Hand;
            this->tbOptnC3->Font = (gcnew System::Drawing::Font(L"Cambria", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tbOptnC3->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->tbOptnC3->Location = System::Drawing::Point(229, 188);
            this->tbOptnC3->Margin = System::Windows::Forms::Padding(4);
            this->tbOptnC3->Multiline = true;
            this->tbOptnC3->Name = L"tbOptnC3";
            this->tbOptnC3->ReadOnly = true;
            this->tbOptnC3->Size = System::Drawing::Size(1755, 70);
            this->tbOptnC3->TabIndex = 1;
            this->tbOptnC3->Text = L"dddd\r\nddd";
            this->tbOptnC3->TextChanged += gcnew System::EventHandler(this, &Startpage::textBox6_TextChanged);
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
            this->tbOptnA3->TextChanged += gcnew System::EventHandler(this, &Startpage::tbOptnA3_TextChanged);
            // 
            // tbOptnB3
            // 
            this->tbOptnB3->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->tbOptnB3->BackColor = System::Drawing::Color::Gray;
            this->tbOptnB3->Cursor = System::Windows::Forms::Cursors::Hand;
            this->tbOptnB3->Font = (gcnew System::Drawing::Font(L"Cambria", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tbOptnB3->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->tbOptnB3->Location = System::Drawing::Point(229, 110);
            this->tbOptnB3->Margin = System::Windows::Forms::Padding(4);
            this->tbOptnB3->Multiline = true;
            this->tbOptnB3->Name = L"tbOptnB3";
            this->tbOptnB3->ReadOnly = true;
            this->tbOptnB3->Size = System::Drawing::Size(1755, 70);
            this->tbOptnB3->TabIndex = 1;
            this->tbOptnB3->Text = L"dddd\r\nddd";
            this->tbOptnB3->TextChanged += gcnew System::EventHandler(this, &Startpage::textBox8_TextChanged);
            // 
            // rb3D
            // 
            this->rb3D->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->rb3D->AutoSize = true;
            this->rb3D->BackColor = System::Drawing::Color::Transparent;
            this->rb3D->Cursor = System::Windows::Forms::Cursors::Hand;
            this->rb3D->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->rb3D->ForeColor = System::Drawing::Color::Gold;
            this->rb3D->Location = System::Drawing::Point(175, 283);
            this->rb3D->Margin = System::Windows::Forms::Padding(4);
            this->rb3D->Name = L"rb3D";
            this->rb3D->Size = System::Drawing::Size(46, 31);
            this->rb3D->TabIndex = 2;
            this->rb3D->TabStop = true;
            this->rb3D->Text = L"d";
            this->rb3D->UseVisualStyleBackColor = false;
            this->rb3D->CheckedChanged += gcnew System::EventHandler(this, &Startpage::radioButton9_CheckedChanged);
            // 
            // rb3A
            // 
            this->rb3A->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->rb3A->AutoSize = true;
            this->rb3A->BackColor = System::Drawing::Color::Transparent;
            this->rb3A->Cursor = System::Windows::Forms::Cursors::Hand;
            this->rb3A->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->rb3A->ForeColor = System::Drawing::Color::Gold;
            this->rb3A->Location = System::Drawing::Point(175, 54);
            this->rb3A->Margin = System::Windows::Forms::Padding(4);
            this->rb3A->Name = L"rb3A";
            this->rb3A->Size = System::Drawing::Size(46, 31);
            this->rb3A->TabIndex = 2;
            this->rb3A->TabStop = true;
            this->rb3A->Text = L"a";
            this->rb3A->UseVisualStyleBackColor = false;
            this->rb3A->CheckedChanged += gcnew System::EventHandler(this, &Startpage::radioButton10_CheckedChanged);
            // 
            // rb3B
            // 
            this->rb3B->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->rb3B->AutoSize = true;
            this->rb3B->BackColor = System::Drawing::Color::Transparent;
            this->rb3B->Cursor = System::Windows::Forms::Cursors::Hand;
            this->rb3B->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->rb3B->ForeColor = System::Drawing::Color::Gold;
            this->rb3B->Location = System::Drawing::Point(173, 140);
            this->rb3B->Margin = System::Windows::Forms::Padding(4);
            this->rb3B->Name = L"rb3B";
            this->rb3B->Size = System::Drawing::Size(46, 31);
            this->rb3B->TabIndex = 2;
            this->rb3B->TabStop = true;
            this->rb3B->Text = L"b";
            this->rb3B->UseVisualStyleBackColor = false;
            this->rb3B->CheckedChanged += gcnew System::EventHandler(this, &Startpage::radioButton11_CheckedChanged);
            // 
            // rb3C
            // 
            this->rb3C->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->rb3C->AutoSize = true;
            this->rb3C->BackColor = System::Drawing::Color::Transparent;
            this->rb3C->Cursor = System::Windows::Forms::Cursors::Hand;
            this->rb3C->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->rb3C->ForeColor = System::Drawing::Color::Gold;
            this->rb3C->Location = System::Drawing::Point(174, 205);
            this->rb3C->Margin = System::Windows::Forms::Padding(4);
            this->rb3C->Name = L"rb3C";
            this->rb3C->Size = System::Drawing::Size(45, 31);
            this->rb3C->TabIndex = 2;
            this->rb3C->TabStop = true;
            this->rb3C->Text = L"c";
            this->rb3C->UseVisualStyleBackColor = false;
            this->rb3C->CheckedChanged += gcnew System::EventHandler(this, &Startpage::radioButton12_CheckedChanged);
            // 
            // rtbQuestionDisplay4
            // 
            this->rtbQuestionDisplay4->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->rtbQuestionDisplay4->BackColor = System::Drawing::Color::DimGray;
            this->rtbQuestionDisplay4->Cursor = System::Windows::Forms::Cursors::Default;
            this->rtbQuestionDisplay4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 25.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->rtbQuestionDisplay4->ForeColor = System::Drawing::SystemColors::InfoText;
            this->rtbQuestionDisplay4->Location = System::Drawing::Point(7, 1965);
            this->rtbQuestionDisplay4->Margin = System::Windows::Forms::Padding(4);
            this->rtbQuestionDisplay4->Name = L"rtbQuestionDisplay4";
            this->rtbQuestionDisplay4->ReadOnly = true;
            this->rtbQuestionDisplay4->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::None;
            this->rtbQuestionDisplay4->Size = System::Drawing::Size(1869, 223);
            this->rtbQuestionDisplay4->TabIndex = 67;
            this->rtbQuestionDisplay4->Text = L"ddddd";
            this->rtbQuestionDisplay4->TextChanged += gcnew System::EventHandler(this, &Startpage::rtbQuestionDisplay4_TextChanged);
            // 
            // panel4
            // 
            this->panel4->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->panel4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
                static_cast<System::Int32>(static_cast<System::Byte>(54)));
            this->panel4->Controls->Add(this->tbOptnD4);
            this->panel4->Controls->Add(this->tbOptnC4);
            this->panel4->Controls->Add(this->tbOptnA4);
            this->panel4->Controls->Add(this->tbOptnB4);
            this->panel4->Controls->Add(this->rb4D);
            this->panel4->Controls->Add(this->rb4A);
            this->panel4->Controls->Add(this->rb4B);
            this->panel4->Controls->Add(this->rb4C);
            this->panel4->ForeColor = System::Drawing::SystemColors::Desktop;
            this->panel4->Location = System::Drawing::Point(-118, 2186);
            this->panel4->Margin = System::Windows::Forms::Padding(4);
            this->panel4->Name = L"panel4";
            this->panel4->Size = System::Drawing::Size(1994, 390);
            this->panel4->TabIndex = 68;
            this->panel4->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Startpage::panel4_Paint);
            // 
            // tbOptnD4
            // 
            this->tbOptnD4->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->tbOptnD4->BackColor = System::Drawing::Color::Gray;
            this->tbOptnD4->Cursor = System::Windows::Forms::Cursors::Hand;
            this->tbOptnD4->Font = (gcnew System::Drawing::Font(L"Cambria", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tbOptnD4->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->tbOptnD4->Location = System::Drawing::Point(229, 267);
            this->tbOptnD4->Margin = System::Windows::Forms::Padding(4);
            this->tbOptnD4->Multiline = true;
            this->tbOptnD4->Name = L"tbOptnD4";
            this->tbOptnD4->ReadOnly = true;
            this->tbOptnD4->Size = System::Drawing::Size(1755, 70);
            this->tbOptnD4->TabIndex = 1;
            this->tbOptnD4->Text = L"dddd\r\nddd";
            this->tbOptnD4->TextChanged += gcnew System::EventHandler(this, &Startpage::textBox9_TextChanged);
            // 
            // tbOptnC4
            // 
            this->tbOptnC4->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->tbOptnC4->BackColor = System::Drawing::Color::Gray;
            this->tbOptnC4->Cursor = System::Windows::Forms::Cursors::Hand;
            this->tbOptnC4->Font = (gcnew System::Drawing::Font(L"Cambria", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tbOptnC4->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->tbOptnC4->Location = System::Drawing::Point(229, 188);
            this->tbOptnC4->Margin = System::Windows::Forms::Padding(4);
            this->tbOptnC4->Multiline = true;
            this->tbOptnC4->Name = L"tbOptnC4";
            this->tbOptnC4->ReadOnly = true;
            this->tbOptnC4->Size = System::Drawing::Size(1755, 70);
            this->tbOptnC4->TabIndex = 1;
            this->tbOptnC4->Text = L"dddd\r\nddd";
            this->tbOptnC4->TextChanged += gcnew System::EventHandler(this, &Startpage::textBox10_TextChanged);
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
            this->tbOptnA4->TextChanged += gcnew System::EventHandler(this, &Startpage::tbOptnA4_TextChanged);
            // 
            // tbOptnB4
            // 
            this->tbOptnB4->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->tbOptnB4->BackColor = System::Drawing::Color::Gray;
            this->tbOptnB4->Cursor = System::Windows::Forms::Cursors::Hand;
            this->tbOptnB4->Font = (gcnew System::Drawing::Font(L"Cambria", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tbOptnB4->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->tbOptnB4->Location = System::Drawing::Point(229, 110);
            this->tbOptnB4->Margin = System::Windows::Forms::Padding(4);
            this->tbOptnB4->Multiline = true;
            this->tbOptnB4->Name = L"tbOptnB4";
            this->tbOptnB4->ReadOnly = true;
            this->tbOptnB4->Size = System::Drawing::Size(1755, 70);
            this->tbOptnB4->TabIndex = 1;
            this->tbOptnB4->Text = L"dddd\r\nddd";
            this->tbOptnB4->TextChanged += gcnew System::EventHandler(this, &Startpage::textBox12_TextChanged);
            // 
            // rb4D
            // 
            this->rb4D->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->rb4D->AutoSize = true;
            this->rb4D->BackColor = System::Drawing::Color::Transparent;
            this->rb4D->Cursor = System::Windows::Forms::Cursors::Hand;
            this->rb4D->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->rb4D->ForeColor = System::Drawing::Color::Gold;
            this->rb4D->Location = System::Drawing::Point(175, 283);
            this->rb4D->Margin = System::Windows::Forms::Padding(4);
            this->rb4D->Name = L"rb4D";
            this->rb4D->Size = System::Drawing::Size(46, 31);
            this->rb4D->TabIndex = 2;
            this->rb4D->TabStop = true;
            this->rb4D->Text = L"d";
            this->rb4D->UseVisualStyleBackColor = false;
            this->rb4D->CheckedChanged += gcnew System::EventHandler(this, &Startpage::radioButton13_CheckedChanged);
            // 
            // rb4A
            // 
            this->rb4A->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->rb4A->AutoSize = true;
            this->rb4A->BackColor = System::Drawing::Color::Transparent;
            this->rb4A->Cursor = System::Windows::Forms::Cursors::Hand;
            this->rb4A->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->rb4A->ForeColor = System::Drawing::Color::Gold;
            this->rb4A->Location = System::Drawing::Point(175, 54);
            this->rb4A->Margin = System::Windows::Forms::Padding(4);
            this->rb4A->Name = L"rb4A";
            this->rb4A->Size = System::Drawing::Size(46, 31);
            this->rb4A->TabIndex = 2;
            this->rb4A->TabStop = true;
            this->rb4A->Text = L"a";
            this->rb4A->UseVisualStyleBackColor = false;
            this->rb4A->CheckedChanged += gcnew System::EventHandler(this, &Startpage::radioButton14_CheckedChanged);
            // 
            // rb4B
            // 
            this->rb4B->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->rb4B->AutoSize = true;
            this->rb4B->BackColor = System::Drawing::Color::Transparent;
            this->rb4B->Cursor = System::Windows::Forms::Cursors::Hand;
            this->rb4B->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->rb4B->ForeColor = System::Drawing::Color::Gold;
            this->rb4B->Location = System::Drawing::Point(174, 129);
            this->rb4B->Margin = System::Windows::Forms::Padding(4);
            this->rb4B->Name = L"rb4B";
            this->rb4B->Size = System::Drawing::Size(46, 31);
            this->rb4B->TabIndex = 2;
            this->rb4B->TabStop = true;
            this->rb4B->Text = L"b";
            this->rb4B->UseVisualStyleBackColor = false;
            this->rb4B->CheckedChanged += gcnew System::EventHandler(this, &Startpage::radioButton15_CheckedChanged);
            // 
            // rb4C
            // 
            this->rb4C->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->rb4C->AutoSize = true;
            this->rb4C->BackColor = System::Drawing::Color::Transparent;
            this->rb4C->Cursor = System::Windows::Forms::Cursors::Hand;
            this->rb4C->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->rb4C->ForeColor = System::Drawing::Color::Gold;
            this->rb4C->Location = System::Drawing::Point(174, 205);
            this->rb4C->Margin = System::Windows::Forms::Padding(4);
            this->rb4C->Name = L"rb4C";
            this->rb4C->Size = System::Drawing::Size(45, 31);
            this->rb4C->TabIndex = 2;
            this->rb4C->TabStop = true;
            this->rb4C->Text = L"c";
            this->rb4C->UseVisualStyleBackColor = false;
            this->rb4C->CheckedChanged += gcnew System::EventHandler(this, &Startpage::radioButton16_CheckedChanged);
            // 
            // rtbQuestionDisplay5
            // 
            this->rtbQuestionDisplay5->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->rtbQuestionDisplay5->BackColor = System::Drawing::Color::DimGray;
            this->rtbQuestionDisplay5->Cursor = System::Windows::Forms::Cursors::Default;
            this->rtbQuestionDisplay5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 25.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->rtbQuestionDisplay5->ForeColor = System::Drawing::SystemColors::InfoText;
            this->rtbQuestionDisplay5->Location = System::Drawing::Point(7, 2571);
            this->rtbQuestionDisplay5->Margin = System::Windows::Forms::Padding(4);
            this->rtbQuestionDisplay5->Name = L"rtbQuestionDisplay5";
            this->rtbQuestionDisplay5->ReadOnly = true;
            this->rtbQuestionDisplay5->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::None;
            this->rtbQuestionDisplay5->Size = System::Drawing::Size(1869, 223);
            this->rtbQuestionDisplay5->TabIndex = 69;
            this->rtbQuestionDisplay5->Text = L"ddddd";
            this->rtbQuestionDisplay5->TextChanged += gcnew System::EventHandler(this, &Startpage::rtbQuestionDisplay5_TextChanged);
            // 
            // panel5
            // 
            this->panel5->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->panel5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
                static_cast<System::Int32>(static_cast<System::Byte>(54)));
            this->panel5->Controls->Add(this->tbOptnD5);
            this->panel5->Controls->Add(this->tbOptnC5);
            this->panel5->Controls->Add(this->tbOptnA5);
            this->panel5->Controls->Add(this->tbOptnB5);
            this->panel5->Controls->Add(this->rb5D);
            this->panel5->Controls->Add(this->rb5A);
            this->panel5->Controls->Add(this->rb5B);
            this->panel5->Controls->Add(this->rb5C);
            this->panel5->ForeColor = System::Drawing::SystemColors::Desktop;
            this->panel5->Location = System::Drawing::Point(-118, 2794);
            this->panel5->Margin = System::Windows::Forms::Padding(4);
            this->panel5->Name = L"panel5";
            this->panel5->Size = System::Drawing::Size(1994, 390);
            this->panel5->TabIndex = 70;
            this->panel5->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Startpage::panel5_Paint);
            // 
            // tbOptnD5
            // 
            this->tbOptnD5->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->tbOptnD5->BackColor = System::Drawing::Color::Gray;
            this->tbOptnD5->Cursor = System::Windows::Forms::Cursors::Hand;
            this->tbOptnD5->Font = (gcnew System::Drawing::Font(L"Cambria", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tbOptnD5->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->tbOptnD5->Location = System::Drawing::Point(229, 267);
            this->tbOptnD5->Margin = System::Windows::Forms::Padding(4);
            this->tbOptnD5->Multiline = true;
            this->tbOptnD5->Name = L"tbOptnD5";
            this->tbOptnD5->ReadOnly = true;
            this->tbOptnD5->Size = System::Drawing::Size(1755, 70);
            this->tbOptnD5->TabIndex = 1;
            this->tbOptnD5->Text = L"dddd\r\nddd";
            this->tbOptnD5->TextChanged += gcnew System::EventHandler(this, &Startpage::textBox13_TextChanged);
            // 
            // tbOptnC5
            // 
            this->tbOptnC5->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->tbOptnC5->BackColor = System::Drawing::Color::Gray;
            this->tbOptnC5->Cursor = System::Windows::Forms::Cursors::Hand;
            this->tbOptnC5->Font = (gcnew System::Drawing::Font(L"Cambria", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tbOptnC5->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->tbOptnC5->Location = System::Drawing::Point(229, 188);
            this->tbOptnC5->Margin = System::Windows::Forms::Padding(4);
            this->tbOptnC5->Multiline = true;
            this->tbOptnC5->Name = L"tbOptnC5";
            this->tbOptnC5->ReadOnly = true;
            this->tbOptnC5->Size = System::Drawing::Size(1755, 70);
            this->tbOptnC5->TabIndex = 1;
            this->tbOptnC5->Text = L"dddd\r\nddd";
            this->tbOptnC5->TextChanged += gcnew System::EventHandler(this, &Startpage::textBox14_TextChanged);
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
            this->tbOptnA5->TextChanged += gcnew System::EventHandler(this, &Startpage::tbOptnA5_TextChanged);
            // 
            // tbOptnB5
            // 
            this->tbOptnB5->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->tbOptnB5->BackColor = System::Drawing::Color::Gray;
            this->tbOptnB5->Cursor = System::Windows::Forms::Cursors::Hand;
            this->tbOptnB5->Font = (gcnew System::Drawing::Font(L"Cambria", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tbOptnB5->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->tbOptnB5->Location = System::Drawing::Point(229, 110);
            this->tbOptnB5->Margin = System::Windows::Forms::Padding(4);
            this->tbOptnB5->Multiline = true;
            this->tbOptnB5->Name = L"tbOptnB5";
            this->tbOptnB5->ReadOnly = true;
            this->tbOptnB5->Size = System::Drawing::Size(1755, 70);
            this->tbOptnB5->TabIndex = 1;
            this->tbOptnB5->Text = L"dddd\r\nddd";
            this->tbOptnB5->TextChanged += gcnew System::EventHandler(this, &Startpage::textBox16_TextChanged);
            // 
            // rb5D
            // 
            this->rb5D->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->rb5D->AutoSize = true;
            this->rb5D->BackColor = System::Drawing::Color::Transparent;
            this->rb5D->Cursor = System::Windows::Forms::Cursors::Hand;
            this->rb5D->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->rb5D->ForeColor = System::Drawing::Color::Gold;
            this->rb5D->Location = System::Drawing::Point(175, 283);
            this->rb5D->Margin = System::Windows::Forms::Padding(4);
            this->rb5D->Name = L"rb5D";
            this->rb5D->Size = System::Drawing::Size(46, 31);
            this->rb5D->TabIndex = 2;
            this->rb5D->TabStop = true;
            this->rb5D->Text = L"d";
            this->rb5D->UseVisualStyleBackColor = false;
            this->rb5D->CheckedChanged += gcnew System::EventHandler(this, &Startpage::radioButton17_CheckedChanged);
            // 
            // rb5A
            // 
            this->rb5A->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->rb5A->AutoSize = true;
            this->rb5A->BackColor = System::Drawing::Color::Transparent;
            this->rb5A->Cursor = System::Windows::Forms::Cursors::Hand;
            this->rb5A->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->rb5A->ForeColor = System::Drawing::Color::Gold;
            this->rb5A->Location = System::Drawing::Point(175, 54);
            this->rb5A->Margin = System::Windows::Forms::Padding(4);
            this->rb5A->Name = L"rb5A";
            this->rb5A->Size = System::Drawing::Size(46, 31);
            this->rb5A->TabIndex = 2;
            this->rb5A->TabStop = true;
            this->rb5A->Text = L"a";
            this->rb5A->UseVisualStyleBackColor = true;
            this->rb5A->CheckedChanged += gcnew System::EventHandler(this, &Startpage::radioButton18_CheckedChanged);
            // 
            // rb5B
            // 
            this->rb5B->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->rb5B->AutoSize = true;
            this->rb5B->BackColor = System::Drawing::Color::Transparent;
            this->rb5B->Cursor = System::Windows::Forms::Cursors::Hand;
            this->rb5B->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->rb5B->ForeColor = System::Drawing::Color::Gold;
            this->rb5B->Location = System::Drawing::Point(174, 129);
            this->rb5B->Margin = System::Windows::Forms::Padding(4);
            this->rb5B->Name = L"rb5B";
            this->rb5B->Size = System::Drawing::Size(46, 31);
            this->rb5B->TabIndex = 2;
            this->rb5B->TabStop = true;
            this->rb5B->Text = L"b";
            this->rb5B->UseVisualStyleBackColor = false;
            this->rb5B->CheckedChanged += gcnew System::EventHandler(this, &Startpage::radioButton19_CheckedChanged);
            // 
            // rb5C
            // 
            this->rb5C->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->rb5C->AutoSize = true;
            this->rb5C->BackColor = System::Drawing::Color::Transparent;
            this->rb5C->Cursor = System::Windows::Forms::Cursors::Hand;
            this->rb5C->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->rb5C->ForeColor = System::Drawing::Color::Gold;
            this->rb5C->Location = System::Drawing::Point(174, 205);
            this->rb5C->Margin = System::Windows::Forms::Padding(4);
            this->rb5C->Name = L"rb5C";
            this->rb5C->Size = System::Drawing::Size(45, 31);
            this->rb5C->TabIndex = 2;
            this->rb5C->TabStop = true;
            this->rb5C->Text = L"c";
            this->rb5C->UseVisualStyleBackColor = false;
            this->rb5C->CheckedChanged += gcnew System::EventHandler(this, &Startpage::radioButton20_CheckedChanged);
            // 
            // rtbQuestionDisplay6
            // 
            this->rtbQuestionDisplay6->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->rtbQuestionDisplay6->BackColor = System::Drawing::Color::DimGray;
            this->rtbQuestionDisplay6->Cursor = System::Windows::Forms::Cursors::Default;
            this->rtbQuestionDisplay6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 25.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->rtbQuestionDisplay6->ForeColor = System::Drawing::SystemColors::InfoText;
            this->rtbQuestionDisplay6->Location = System::Drawing::Point(7, 3174);
            this->rtbQuestionDisplay6->Margin = System::Windows::Forms::Padding(4);
            this->rtbQuestionDisplay6->Name = L"rtbQuestionDisplay6";
            this->rtbQuestionDisplay6->ReadOnly = true;
            this->rtbQuestionDisplay6->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::None;
            this->rtbQuestionDisplay6->Size = System::Drawing::Size(1869, 223);
            this->rtbQuestionDisplay6->TabIndex = 71;
            this->rtbQuestionDisplay6->Text = L"ddddd";
            this->rtbQuestionDisplay6->TextChanged += gcnew System::EventHandler(this, &Startpage::rtbQuestionDisplay6_TextChanged);
            // 
            // panel6
            // 
            this->panel6->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->panel6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
                static_cast<System::Int32>(static_cast<System::Byte>(54)));
            this->panel6->Controls->Add(this->tbOptnD6);
            this->panel6->Controls->Add(this->tbOptnC6);
            this->panel6->Controls->Add(this->tbOptnA6);
            this->panel6->Controls->Add(this->tbOptnB6);
            this->panel6->Controls->Add(this->rb6D);
            this->panel6->Controls->Add(this->rb6A);
            this->panel6->Controls->Add(this->rb6B);
            this->panel6->Controls->Add(this->rb6C);
            this->panel6->ForeColor = System::Drawing::SystemColors::Desktop;
            this->panel6->Location = System::Drawing::Point(-118, 3393);
            this->panel6->Margin = System::Windows::Forms::Padding(4);
            this->panel6->Name = L"panel6";
            this->panel6->Size = System::Drawing::Size(1994, 390);
            this->panel6->TabIndex = 72;
            this->panel6->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Startpage::panel6_Paint);
            // 
            // tbOptnD6
            // 
            this->tbOptnD6->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->tbOptnD6->BackColor = System::Drawing::Color::Gray;
            this->tbOptnD6->Cursor = System::Windows::Forms::Cursors::Hand;
            this->tbOptnD6->Font = (gcnew System::Drawing::Font(L"Cambria", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tbOptnD6->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->tbOptnD6->Location = System::Drawing::Point(229, 267);
            this->tbOptnD6->Margin = System::Windows::Forms::Padding(4);
            this->tbOptnD6->Multiline = true;
            this->tbOptnD6->Name = L"tbOptnD6";
            this->tbOptnD6->ReadOnly = true;
            this->tbOptnD6->Size = System::Drawing::Size(1755, 70);
            this->tbOptnD6->TabIndex = 1;
            this->tbOptnD6->Text = L"dddd\r\nddd";
            this->tbOptnD6->TextChanged += gcnew System::EventHandler(this, &Startpage::textBox17_TextChanged);
            // 
            // tbOptnC6
            // 
            this->tbOptnC6->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->tbOptnC6->BackColor = System::Drawing::Color::Gray;
            this->tbOptnC6->Cursor = System::Windows::Forms::Cursors::Hand;
            this->tbOptnC6->Font = (gcnew System::Drawing::Font(L"Cambria", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tbOptnC6->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->tbOptnC6->Location = System::Drawing::Point(229, 188);
            this->tbOptnC6->Margin = System::Windows::Forms::Padding(4);
            this->tbOptnC6->Multiline = true;
            this->tbOptnC6->Name = L"tbOptnC6";
            this->tbOptnC6->ReadOnly = true;
            this->tbOptnC6->Size = System::Drawing::Size(1755, 70);
            this->tbOptnC6->TabIndex = 1;
            this->tbOptnC6->Text = L"dddd\r\nddd";
            this->tbOptnC6->TextChanged += gcnew System::EventHandler(this, &Startpage::textBox18_TextChanged);
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
            this->tbOptnA6->TextChanged += gcnew System::EventHandler(this, &Startpage::tbOptnA6_TextChanged);
            // 
            // tbOptnB6
            // 
            this->tbOptnB6->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->tbOptnB6->BackColor = System::Drawing::Color::Gray;
            this->tbOptnB6->Cursor = System::Windows::Forms::Cursors::Hand;
            this->tbOptnB6->Font = (gcnew System::Drawing::Font(L"Cambria", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tbOptnB6->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->tbOptnB6->Location = System::Drawing::Point(229, 110);
            this->tbOptnB6->Margin = System::Windows::Forms::Padding(4);
            this->tbOptnB6->Multiline = true;
            this->tbOptnB6->Name = L"tbOptnB6";
            this->tbOptnB6->ReadOnly = true;
            this->tbOptnB6->Size = System::Drawing::Size(1755, 70);
            this->tbOptnB6->TabIndex = 1;
            this->tbOptnB6->Text = L"dddd\r\nddd";
            this->tbOptnB6->TextChanged += gcnew System::EventHandler(this, &Startpage::textBox20_TextChanged);
            // 
            // rb6D
            // 
            this->rb6D->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->rb6D->AutoSize = true;
            this->rb6D->BackColor = System::Drawing::Color::Transparent;
            this->rb6D->Cursor = System::Windows::Forms::Cursors::Hand;
            this->rb6D->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->rb6D->ForeColor = System::Drawing::Color::Gold;
            this->rb6D->Location = System::Drawing::Point(175, 283);
            this->rb6D->Margin = System::Windows::Forms::Padding(4);
            this->rb6D->Name = L"rb6D";
            this->rb6D->Size = System::Drawing::Size(46, 31);
            this->rb6D->TabIndex = 2;
            this->rb6D->TabStop = true;
            this->rb6D->Text = L"d";
            this->rb6D->UseVisualStyleBackColor = false;
            this->rb6D->CheckedChanged += gcnew System::EventHandler(this, &Startpage::radioButton21_CheckedChanged);
            // 
            // rb6A
            // 
            this->rb6A->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->rb6A->AutoSize = true;
            this->rb6A->BackColor = System::Drawing::Color::Transparent;
            this->rb6A->Cursor = System::Windows::Forms::Cursors::Hand;
            this->rb6A->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->rb6A->ForeColor = System::Drawing::Color::Gold;
            this->rb6A->Location = System::Drawing::Point(175, 54);
            this->rb6A->Margin = System::Windows::Forms::Padding(4);
            this->rb6A->Name = L"rb6A";
            this->rb6A->Size = System::Drawing::Size(46, 31);
            this->rb6A->TabIndex = 2;
            this->rb6A->TabStop = true;
            this->rb6A->Text = L"a";
            this->rb6A->UseVisualStyleBackColor = false;
            this->rb6A->CheckedChanged += gcnew System::EventHandler(this, &Startpage::radioButton22_CheckedChanged);
            // 
            // rb6B
            // 
            this->rb6B->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->rb6B->AutoSize = true;
            this->rb6B->BackColor = System::Drawing::Color::Transparent;
            this->rb6B->Cursor = System::Windows::Forms::Cursors::Hand;
            this->rb6B->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->rb6B->ForeColor = System::Drawing::Color::Gold;
            this->rb6B->Location = System::Drawing::Point(174, 129);
            this->rb6B->Margin = System::Windows::Forms::Padding(4);
            this->rb6B->Name = L"rb6B";
            this->rb6B->Size = System::Drawing::Size(46, 31);
            this->rb6B->TabIndex = 2;
            this->rb6B->TabStop = true;
            this->rb6B->Text = L"b";
            this->rb6B->UseVisualStyleBackColor = false;
            this->rb6B->CheckedChanged += gcnew System::EventHandler(this, &Startpage::radioButton23_CheckedChanged);
            // 
            // rb6C
            // 
            this->rb6C->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->rb6C->AutoSize = true;
            this->rb6C->BackColor = System::Drawing::Color::Transparent;
            this->rb6C->Cursor = System::Windows::Forms::Cursors::Hand;
            this->rb6C->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->rb6C->ForeColor = System::Drawing::Color::Gold;
            this->rb6C->Location = System::Drawing::Point(174, 205);
            this->rb6C->Margin = System::Windows::Forms::Padding(4);
            this->rb6C->Name = L"rb6C";
            this->rb6C->Size = System::Drawing::Size(45, 31);
            this->rb6C->TabIndex = 2;
            this->rb6C->TabStop = true;
            this->rb6C->Text = L"c";
            this->rb6C->UseVisualStyleBackColor = false;
            this->rb6C->CheckedChanged += gcnew System::EventHandler(this, &Startpage::radioButton24_CheckedChanged);
            // 
            // rtbQuestionDisplay7
            // 
            this->rtbQuestionDisplay7->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->rtbQuestionDisplay7->BackColor = System::Drawing::Color::DimGray;
            this->rtbQuestionDisplay7->Cursor = System::Windows::Forms::Cursors::Default;
            this->rtbQuestionDisplay7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 25.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->rtbQuestionDisplay7->ForeColor = System::Drawing::SystemColors::InfoText;
            this->rtbQuestionDisplay7->Location = System::Drawing::Point(7, 3776);
            this->rtbQuestionDisplay7->Margin = System::Windows::Forms::Padding(4);
            this->rtbQuestionDisplay7->Name = L"rtbQuestionDisplay7";
            this->rtbQuestionDisplay7->ReadOnly = true;
            this->rtbQuestionDisplay7->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::None;
            this->rtbQuestionDisplay7->Size = System::Drawing::Size(1869, 223);
            this->rtbQuestionDisplay7->TabIndex = 73;
            this->rtbQuestionDisplay7->Text = L"ddddd";
            this->rtbQuestionDisplay7->TextChanged += gcnew System::EventHandler(this, &Startpage::tbOptnA8_TextChanged);
            // 
            // panel7
            // 
            this->panel7->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->panel7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
                static_cast<System::Int32>(static_cast<System::Byte>(54)));
            this->panel7->Controls->Add(this->tbOptnD7);
            this->panel7->Controls->Add(this->tbOptnC7);
            this->panel7->Controls->Add(this->tbOptnA7);
            this->panel7->Controls->Add(this->tbOptnB7);
            this->panel7->Controls->Add(this->rb7D);
            this->panel7->Controls->Add(this->rb7A);
            this->panel7->Controls->Add(this->rb7B);
            this->panel7->Controls->Add(this->rb7C);
            this->panel7->ForeColor = System::Drawing::SystemColors::Desktop;
            this->panel7->Location = System::Drawing::Point(-118, 3996);
            this->panel7->Margin = System::Windows::Forms::Padding(4);
            this->panel7->Name = L"panel7";
            this->panel7->Size = System::Drawing::Size(1994, 390);
            this->panel7->TabIndex = 74;
            this->panel7->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Startpage::panel7_Paint);
            // 
            // tbOptnD7
            // 
            this->tbOptnD7->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->tbOptnD7->BackColor = System::Drawing::Color::Gray;
            this->tbOptnD7->Cursor = System::Windows::Forms::Cursors::Hand;
            this->tbOptnD7->Font = (gcnew System::Drawing::Font(L"Cambria", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tbOptnD7->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->tbOptnD7->Location = System::Drawing::Point(229, 267);
            this->tbOptnD7->Margin = System::Windows::Forms::Padding(4);
            this->tbOptnD7->Multiline = true;
            this->tbOptnD7->Name = L"tbOptnD7";
            this->tbOptnD7->ReadOnly = true;
            this->tbOptnD7->Size = System::Drawing::Size(1755, 70);
            this->tbOptnD7->TabIndex = 1;
            this->tbOptnD7->Text = L"dddd\r\nddd";
            this->tbOptnD7->TextChanged += gcnew System::EventHandler(this, &Startpage::textBox21_TextChanged);
            // 
            // tbOptnC7
            // 
            this->tbOptnC7->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->tbOptnC7->BackColor = System::Drawing::Color::Gray;
            this->tbOptnC7->Cursor = System::Windows::Forms::Cursors::Hand;
            this->tbOptnC7->Font = (gcnew System::Drawing::Font(L"Cambria", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tbOptnC7->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->tbOptnC7->Location = System::Drawing::Point(229, 188);
            this->tbOptnC7->Margin = System::Windows::Forms::Padding(4);
            this->tbOptnC7->Multiline = true;
            this->tbOptnC7->Name = L"tbOptnC7";
            this->tbOptnC7->ReadOnly = true;
            this->tbOptnC7->Size = System::Drawing::Size(1755, 70);
            this->tbOptnC7->TabIndex = 1;
            this->tbOptnC7->Text = L"dddd\r\nddd";
            this->tbOptnC7->TextChanged += gcnew System::EventHandler(this, &Startpage::textBox22_TextChanged);
            // 
            // tbOptnA7
            // 
            this->tbOptnA7->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->tbOptnA7->BackColor = System::Drawing::Color::Gray;
            this->tbOptnA7->Cursor = System::Windows::Forms::Cursors::Hand;
            this->tbOptnA7->Font = (gcnew System::Drawing::Font(L"Cambria", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tbOptnA7->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->tbOptnA7->Location = System::Drawing::Point(229, 32);
            this->tbOptnA7->Margin = System::Windows::Forms::Padding(4);
            this->tbOptnA7->Multiline = true;
            this->tbOptnA7->Name = L"tbOptnA7";
            this->tbOptnA7->ReadOnly = true;
            this->tbOptnA7->Size = System::Drawing::Size(1755, 70);
            this->tbOptnA7->TabIndex = 1;
            this->tbOptnA7->Text = L"dddd\r\nddd";
            this->tbOptnA7->TextChanged += gcnew System::EventHandler(this, &Startpage::textBox23_TextChanged);
            // 
            // tbOptnB7
            // 
            this->tbOptnB7->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->tbOptnB7->BackColor = System::Drawing::Color::Gray;
            this->tbOptnB7->Cursor = System::Windows::Forms::Cursors::Hand;
            this->tbOptnB7->Font = (gcnew System::Drawing::Font(L"Cambria", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tbOptnB7->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->tbOptnB7->Location = System::Drawing::Point(229, 110);
            this->tbOptnB7->Margin = System::Windows::Forms::Padding(4);
            this->tbOptnB7->Multiline = true;
            this->tbOptnB7->Name = L"tbOptnB7";
            this->tbOptnB7->ReadOnly = true;
            this->tbOptnB7->Size = System::Drawing::Size(1755, 70);
            this->tbOptnB7->TabIndex = 1;
            this->tbOptnB7->Text = L"dddd\r\nddd";
            this->tbOptnB7->TextChanged += gcnew System::EventHandler(this, &Startpage::textBox24_TextChanged);
            // 
            // rb7D
            // 
            this->rb7D->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->rb7D->AutoSize = true;
            this->rb7D->BackColor = System::Drawing::Color::Transparent;
            this->rb7D->Cursor = System::Windows::Forms::Cursors::Hand;
            this->rb7D->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->rb7D->ForeColor = System::Drawing::Color::Gold;
            this->rb7D->Location = System::Drawing::Point(175, 283);
            this->rb7D->Margin = System::Windows::Forms::Padding(4);
            this->rb7D->Name = L"rb7D";
            this->rb7D->Size = System::Drawing::Size(46, 31);
            this->rb7D->TabIndex = 2;
            this->rb7D->TabStop = true;
            this->rb7D->Text = L"d";
            this->rb7D->UseVisualStyleBackColor = false;
            this->rb7D->CheckedChanged += gcnew System::EventHandler(this, &Startpage::radioButton25_CheckedChanged);
            // 
            // rb7A
            // 
            this->rb7A->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->rb7A->AutoSize = true;
            this->rb7A->BackColor = System::Drawing::Color::Transparent;
            this->rb7A->Cursor = System::Windows::Forms::Cursors::Hand;
            this->rb7A->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->rb7A->ForeColor = System::Drawing::Color::Gold;
            this->rb7A->Location = System::Drawing::Point(175, 54);
            this->rb7A->Margin = System::Windows::Forms::Padding(4);
            this->rb7A->Name = L"rb7A";
            this->rb7A->Size = System::Drawing::Size(46, 31);
            this->rb7A->TabIndex = 2;
            this->rb7A->TabStop = true;
            this->rb7A->Text = L"a";
            this->rb7A->UseVisualStyleBackColor = false;
            this->rb7A->CheckedChanged += gcnew System::EventHandler(this, &Startpage::radioButton26_CheckedChanged);
            // 
            // rb7B
            // 
            this->rb7B->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->rb7B->AutoSize = true;
            this->rb7B->BackColor = System::Drawing::Color::Transparent;
            this->rb7B->Cursor = System::Windows::Forms::Cursors::Hand;
            this->rb7B->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->rb7B->ForeColor = System::Drawing::Color::Gold;
            this->rb7B->Location = System::Drawing::Point(174, 129);
            this->rb7B->Margin = System::Windows::Forms::Padding(4);
            this->rb7B->Name = L"rb7B";
            this->rb7B->Size = System::Drawing::Size(46, 31);
            this->rb7B->TabIndex = 2;
            this->rb7B->TabStop = true;
            this->rb7B->Text = L"b";
            this->rb7B->UseVisualStyleBackColor = false;
            this->rb7B->CheckedChanged += gcnew System::EventHandler(this, &Startpage::radioButton27_CheckedChanged);
            // 
            // rb7C
            // 
            this->rb7C->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->rb7C->AutoSize = true;
            this->rb7C->BackColor = System::Drawing::Color::Transparent;
            this->rb7C->Cursor = System::Windows::Forms::Cursors::Hand;
            this->rb7C->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->rb7C->ForeColor = System::Drawing::Color::Gold;
            this->rb7C->Location = System::Drawing::Point(174, 205);
            this->rb7C->Margin = System::Windows::Forms::Padding(4);
            this->rb7C->Name = L"rb7C";
            this->rb7C->Size = System::Drawing::Size(45, 31);
            this->rb7C->TabIndex = 2;
            this->rb7C->TabStop = true;
            this->rb7C->Text = L"c";
            this->rb7C->UseVisualStyleBackColor = false;
            this->rb7C->CheckedChanged += gcnew System::EventHandler(this, &Startpage::radioButton28_CheckedChanged);
            // 
            // rtbQuestionDisplay8
            // 
            this->rtbQuestionDisplay8->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->rtbQuestionDisplay8->BackColor = System::Drawing::Color::DimGray;
            this->rtbQuestionDisplay8->Cursor = System::Windows::Forms::Cursors::Default;
            this->rtbQuestionDisplay8->Font = (gcnew System::Drawing::Font(L"Times New Roman", 25.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->rtbQuestionDisplay8->ForeColor = System::Drawing::SystemColors::InfoText;
            this->rtbQuestionDisplay8->Location = System::Drawing::Point(7, 4381);
            this->rtbQuestionDisplay8->Margin = System::Windows::Forms::Padding(4);
            this->rtbQuestionDisplay8->Name = L"rtbQuestionDisplay8";
            this->rtbQuestionDisplay8->ReadOnly = true;
            this->rtbQuestionDisplay8->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::None;
            this->rtbQuestionDisplay8->Size = System::Drawing::Size(1869, 223);
            this->rtbQuestionDisplay8->TabIndex = 75;
            this->rtbQuestionDisplay8->Text = L"ddddd";
            this->rtbQuestionDisplay8->TextChanged += gcnew System::EventHandler(this, &Startpage::rtbQuestionDisplay8_TextChanged);
            // 
            // rb8C
            // 
            this->rb8C->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->rb8C->AutoSize = true;
            this->rb8C->BackColor = System::Drawing::Color::Transparent;
            this->rb8C->Cursor = System::Windows::Forms::Cursors::Hand;
            this->rb8C->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->rb8C->ForeColor = System::Drawing::Color::Gold;
            this->rb8C->Location = System::Drawing::Point(174, 205);
            this->rb8C->Margin = System::Windows::Forms::Padding(4);
            this->rb8C->Name = L"rb8C";
            this->rb8C->Size = System::Drawing::Size(45, 31);
            this->rb8C->TabIndex = 2;
            this->rb8C->TabStop = true;
            this->rb8C->Text = L"c";
            this->rb8C->UseVisualStyleBackColor = false;
            this->rb8C->CheckedChanged += gcnew System::EventHandler(this, &Startpage::radioButton32_CheckedChanged);
            // 
            // rb8B
            // 
            this->rb8B->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->rb8B->AutoSize = true;
            this->rb8B->BackColor = System::Drawing::Color::Transparent;
            this->rb8B->Cursor = System::Windows::Forms::Cursors::Hand;
            this->rb8B->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->rb8B->ForeColor = System::Drawing::Color::Gold;
            this->rb8B->Location = System::Drawing::Point(174, 129);
            this->rb8B->Margin = System::Windows::Forms::Padding(4);
            this->rb8B->Name = L"rb8B";
            this->rb8B->Size = System::Drawing::Size(46, 31);
            this->rb8B->TabIndex = 2;
            this->rb8B->TabStop = true;
            this->rb8B->Text = L"b";
            this->rb8B->UseVisualStyleBackColor = false;
            this->rb8B->CheckedChanged += gcnew System::EventHandler(this, &Startpage::radioButton31_CheckedChanged);
            // 
            // rb8A
            // 
            this->rb8A->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->rb8A->AutoSize = true;
            this->rb8A->BackColor = System::Drawing::Color::Transparent;
            this->rb8A->Cursor = System::Windows::Forms::Cursors::Hand;
            this->rb8A->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->rb8A->ForeColor = System::Drawing::Color::Gold;
            this->rb8A->Location = System::Drawing::Point(175, 54);
            this->rb8A->Margin = System::Windows::Forms::Padding(4);
            this->rb8A->Name = L"rb8A";
            this->rb8A->Size = System::Drawing::Size(46, 31);
            this->rb8A->TabIndex = 2;
            this->rb8A->TabStop = true;
            this->rb8A->Text = L"a";
            this->rb8A->UseVisualStyleBackColor = false;
            this->rb8A->CheckedChanged += gcnew System::EventHandler(this, &Startpage::radioButton30_CheckedChanged);
            // 
            // rb8D
            // 
            this->rb8D->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->rb8D->AutoSize = true;
            this->rb8D->BackColor = System::Drawing::Color::Transparent;
            this->rb8D->Cursor = System::Windows::Forms::Cursors::Hand;
            this->rb8D->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->rb8D->ForeColor = System::Drawing::Color::Gold;
            this->rb8D->Location = System::Drawing::Point(175, 283);
            this->rb8D->Margin = System::Windows::Forms::Padding(4);
            this->rb8D->Name = L"rb8D";
            this->rb8D->Size = System::Drawing::Size(46, 31);
            this->rb8D->TabIndex = 2;
            this->rb8D->TabStop = true;
            this->rb8D->Text = L"d";
            this->rb8D->UseVisualStyleBackColor = false;
            this->rb8D->CheckedChanged += gcnew System::EventHandler(this, &Startpage::radioButton29_CheckedChanged);
            // 
            // tbOptnB8
            // 
            this->tbOptnB8->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->tbOptnB8->BackColor = System::Drawing::Color::Gray;
            this->tbOptnB8->Cursor = System::Windows::Forms::Cursors::Hand;
            this->tbOptnB8->Font = (gcnew System::Drawing::Font(L"Cambria", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tbOptnB8->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->tbOptnB8->Location = System::Drawing::Point(229, 110);
            this->tbOptnB8->Margin = System::Windows::Forms::Padding(4);
            this->tbOptnB8->Multiline = true;
            this->tbOptnB8->Name = L"tbOptnB8";
            this->tbOptnB8->ReadOnly = true;
            this->tbOptnB8->Size = System::Drawing::Size(1755, 70);
            this->tbOptnB8->TabIndex = 1;
            this->tbOptnB8->Text = L"dddd\r\nddd";
            this->tbOptnB8->TextChanged += gcnew System::EventHandler(this, &Startpage::textBox28_TextChanged);
            // 
            // tbOptnA8
            // 
            this->tbOptnA8->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->tbOptnA8->BackColor = System::Drawing::Color::Gray;
            this->tbOptnA8->Cursor = System::Windows::Forms::Cursors::Hand;
            this->tbOptnA8->Font = (gcnew System::Drawing::Font(L"Cambria", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tbOptnA8->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->tbOptnA8->Location = System::Drawing::Point(229, 32);
            this->tbOptnA8->Margin = System::Windows::Forms::Padding(4);
            this->tbOptnA8->Multiline = true;
            this->tbOptnA8->Name = L"tbOptnA8";
            this->tbOptnA8->ReadOnly = true;
            this->tbOptnA8->Size = System::Drawing::Size(1755, 70);
            this->tbOptnA8->TabIndex = 1;
            this->tbOptnA8->Text = L"dddd\r\nddd";
            this->tbOptnA8->TextChanged += gcnew System::EventHandler(this, &Startpage::textBox27_TextChanged);
            // 
            // tbOptnC8
            // 
            this->tbOptnC8->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->tbOptnC8->BackColor = System::Drawing::Color::Gray;
            this->tbOptnC8->Cursor = System::Windows::Forms::Cursors::Hand;
            this->tbOptnC8->Font = (gcnew System::Drawing::Font(L"Cambria", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tbOptnC8->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->tbOptnC8->Location = System::Drawing::Point(229, 188);
            this->tbOptnC8->Margin = System::Windows::Forms::Padding(4);
            this->tbOptnC8->Multiline = true;
            this->tbOptnC8->Name = L"tbOptnC8";
            this->tbOptnC8->ReadOnly = true;
            this->tbOptnC8->Size = System::Drawing::Size(1755, 70);
            this->tbOptnC8->TabIndex = 1;
            this->tbOptnC8->Text = L"dddd\r\nddd";
            this->tbOptnC8->TextChanged += gcnew System::EventHandler(this, &Startpage::textBox26_TextChanged);
            // 
            // tbOptnD8
            // 
            this->tbOptnD8->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->tbOptnD8->BackColor = System::Drawing::Color::Gray;
            this->tbOptnD8->Cursor = System::Windows::Forms::Cursors::Hand;
            this->tbOptnD8->Font = (gcnew System::Drawing::Font(L"Cambria", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tbOptnD8->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->tbOptnD8->Location = System::Drawing::Point(229, 267);
            this->tbOptnD8->Margin = System::Windows::Forms::Padding(4);
            this->tbOptnD8->Multiline = true;
            this->tbOptnD8->Name = L"tbOptnD8";
            this->tbOptnD8->ReadOnly = true;
            this->tbOptnD8->Size = System::Drawing::Size(1755, 70);
            this->tbOptnD8->TabIndex = 1;
            this->tbOptnD8->Text = L"dddd\r\nddd";
            this->tbOptnD8->TextChanged += gcnew System::EventHandler(this, &Startpage::textBox25_TextChanged);
            // 
            // panel8
            // 
            this->panel8->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->panel8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
                static_cast<System::Int32>(static_cast<System::Byte>(54)));
            this->panel8->Controls->Add(this->tbOptnD8);
            this->panel8->Controls->Add(this->tbOptnC8);
            this->panel8->Controls->Add(this->tbOptnA8);
            this->panel8->Controls->Add(this->tbOptnB8);
            this->panel8->Controls->Add(this->rb8D);
            this->panel8->Controls->Add(this->rb8A);
            this->panel8->Controls->Add(this->rb8B);
            this->panel8->Controls->Add(this->rb8C);
            this->panel8->ForeColor = System::Drawing::SystemColors::Desktop;
            this->panel8->Location = System::Drawing::Point(-118, 4605);
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
            this->rtbQuestionDisplay9->Location = System::Drawing::Point(7, 4994);
            this->rtbQuestionDisplay9->Margin = System::Windows::Forms::Padding(4);
            this->rtbQuestionDisplay9->Name = L"rtbQuestionDisplay9";
            this->rtbQuestionDisplay9->ReadOnly = true;
            this->rtbQuestionDisplay9->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::None;
            this->rtbQuestionDisplay9->Size = System::Drawing::Size(1869, 223);
            this->rtbQuestionDisplay9->TabIndex = 78;
            this->rtbQuestionDisplay9->Text = L"ddddd";
            this->rtbQuestionDisplay9->TextChanged += gcnew System::EventHandler(this, &Startpage::rtbQuestionDisplay9_TextChanged);
            // 
            // panel10
            // 
            this->panel10->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->panel10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
                static_cast<System::Int32>(static_cast<System::Byte>(54)));
            this->panel10->Controls->Add(this->tbOptnD9);
            this->panel10->Controls->Add(this->tbOptnC9);
            this->panel10->Controls->Add(this->tbOptnA9);
            this->panel10->Controls->Add(this->tbOptnB9);
            this->panel10->Controls->Add(this->rb9D);
            this->panel10->Controls->Add(this->rb9A);
            this->panel10->Controls->Add(this->rb9B);
            this->panel10->Controls->Add(this->rb9C);
            this->panel10->ForeColor = System::Drawing::SystemColors::Desktop;
            this->panel10->Location = System::Drawing::Point(-118, 5220);
            this->panel10->Margin = System::Windows::Forms::Padding(4);
            this->panel10->Name = L"panel10";
            this->panel10->Size = System::Drawing::Size(1994, 390);
            this->panel10->TabIndex = 79;
            this->panel10->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Startpage::panel10_Paint);
            // 
            // tbOptnD9
            // 
            this->tbOptnD9->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->tbOptnD9->BackColor = System::Drawing::Color::Gray;
            this->tbOptnD9->Cursor = System::Windows::Forms::Cursors::Hand;
            this->tbOptnD9->Font = (gcnew System::Drawing::Font(L"Cambria", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tbOptnD9->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->tbOptnD9->Location = System::Drawing::Point(229, 267);
            this->tbOptnD9->Margin = System::Windows::Forms::Padding(4);
            this->tbOptnD9->Multiline = true;
            this->tbOptnD9->Name = L"tbOptnD9";
            this->tbOptnD9->ReadOnly = true;
            this->tbOptnD9->Size = System::Drawing::Size(1755, 70);
            this->tbOptnD9->TabIndex = 1;
            this->tbOptnD9->Text = L"dddd\r\nddd";
            this->tbOptnD9->TextChanged += gcnew System::EventHandler(this, &Startpage::textBox1_TextChanged);
            // 
            // tbOptnC9
            // 
            this->tbOptnC9->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->tbOptnC9->BackColor = System::Drawing::Color::Gray;
            this->tbOptnC9->Cursor = System::Windows::Forms::Cursors::Hand;
            this->tbOptnC9->Font = (gcnew System::Drawing::Font(L"Cambria", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tbOptnC9->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->tbOptnC9->Location = System::Drawing::Point(229, 188);
            this->tbOptnC9->Margin = System::Windows::Forms::Padding(4);
            this->tbOptnC9->Multiline = true;
            this->tbOptnC9->Name = L"tbOptnC9";
            this->tbOptnC9->ReadOnly = true;
            this->tbOptnC9->Size = System::Drawing::Size(1755, 70);
            this->tbOptnC9->TabIndex = 1;
            this->tbOptnC9->Text = L"dddd\r\nddd";
            this->tbOptnC9->TextChanged += gcnew System::EventHandler(this, &Startpage::textBox2_TextChanged);
            // 
            // tbOptnA9
            // 
            this->tbOptnA9->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->tbOptnA9->BackColor = System::Drawing::Color::Gray;
            this->tbOptnA9->Cursor = System::Windows::Forms::Cursors::Hand;
            this->tbOptnA9->Font = (gcnew System::Drawing::Font(L"Cambria", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tbOptnA9->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->tbOptnA9->Location = System::Drawing::Point(229, 32);
            this->tbOptnA9->Margin = System::Windows::Forms::Padding(4);
            this->tbOptnA9->Multiline = true;
            this->tbOptnA9->Name = L"tbOptnA9";
            this->tbOptnA9->ReadOnly = true;
            this->tbOptnA9->Size = System::Drawing::Size(1755, 70);
            this->tbOptnA9->TabIndex = 1;
            this->tbOptnA9->Text = L"dddd\r\nddd";
            this->tbOptnA9->TextChanged += gcnew System::EventHandler(this, &Startpage::textBox3_TextChanged_1);
            // 
            // tbOptnB9
            // 
            this->tbOptnB9->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->tbOptnB9->BackColor = System::Drawing::Color::Gray;
            this->tbOptnB9->Cursor = System::Windows::Forms::Cursors::Hand;
            this->tbOptnB9->Font = (gcnew System::Drawing::Font(L"Cambria", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tbOptnB9->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->tbOptnB9->Location = System::Drawing::Point(229, 110);
            this->tbOptnB9->Margin = System::Windows::Forms::Padding(4);
            this->tbOptnB9->Multiline = true;
            this->tbOptnB9->Name = L"tbOptnB9";
            this->tbOptnB9->ReadOnly = true;
            this->tbOptnB9->Size = System::Drawing::Size(1755, 70);
            this->tbOptnB9->TabIndex = 1;
            this->tbOptnB9->Text = L"dddd\r\nddd";
            //this->tbOptnB9->TextChanged += gcnew System::EventHandler(this, &Startpage::textBox4_TextChanged);
            // 
            // rb9D
            // 
            this->rb9D->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->rb9D->AutoSize = true;
            this->rb9D->BackColor = System::Drawing::Color::Transparent;
            this->rb9D->Cursor = System::Windows::Forms::Cursors::Hand;
            this->rb9D->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->rb9D->ForeColor = System::Drawing::Color::Gold;
            this->rb9D->Location = System::Drawing::Point(175, 283);
            this->rb9D->Margin = System::Windows::Forms::Padding(4);
            this->rb9D->Name = L"rb9D";
            this->rb9D->Size = System::Drawing::Size(46, 31);
            this->rb9D->TabIndex = 2;
            this->rb9D->TabStop = true;
            this->rb9D->Text = L"d";
            this->rb9D->UseVisualStyleBackColor = false;
            this->rb9D->CheckedChanged += gcnew System::EventHandler(this, &Startpage::radioButton33_CheckedChanged);
            // 
            // rb9A
            // 
            this->rb9A->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->rb9A->AutoSize = true;
            this->rb9A->BackColor = System::Drawing::Color::Transparent;
            this->rb9A->Cursor = System::Windows::Forms::Cursors::Hand;
            this->rb9A->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->rb9A->ForeColor = System::Drawing::Color::Gold;
            this->rb9A->Location = System::Drawing::Point(175, 54);
            this->rb9A->Margin = System::Windows::Forms::Padding(4);
            this->rb9A->Name = L"rb9A";
            this->rb9A->Size = System::Drawing::Size(46, 31);
            this->rb9A->TabIndex = 2;
            this->rb9A->TabStop = true;
            this->rb9A->Text = L"a";
            this->rb9A->UseVisualStyleBackColor = false;
            this->rb9A->CheckedChanged += gcnew System::EventHandler(this, &Startpage::radioButton34_CheckedChanged);
            // 
            // rb9B
            // 
            this->rb9B->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->rb9B->AutoSize = true;
            this->rb9B->BackColor = System::Drawing::Color::Transparent;
            this->rb9B->Cursor = System::Windows::Forms::Cursors::Hand;
            this->rb9B->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->rb9B->ForeColor = System::Drawing::Color::Gold;
            this->rb9B->Location = System::Drawing::Point(174, 129);
            this->rb9B->Margin = System::Windows::Forms::Padding(4);
            this->rb9B->Name = L"rb9B";
            this->rb9B->Size = System::Drawing::Size(46, 31);
            this->rb9B->TabIndex = 2;
            this->rb9B->TabStop = true;
            this->rb9B->Text = L"b";
            this->rb9B->UseVisualStyleBackColor = false;
            this->rb9B->CheckedChanged += gcnew System::EventHandler(this, &Startpage::radioButton35_CheckedChanged);
            // 
            // rb9C
            // 
            this->rb9C->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->rb9C->AutoSize = true;
            this->rb9C->BackColor = System::Drawing::Color::Transparent;
            this->rb9C->Cursor = System::Windows::Forms::Cursors::Hand;
            this->rb9C->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->rb9C->ForeColor = System::Drawing::Color::Gold;
            this->rb9C->Location = System::Drawing::Point(174, 205);
            this->rb9C->Margin = System::Windows::Forms::Padding(4);
            this->rb9C->Name = L"rb9C";
            this->rb9C->Size = System::Drawing::Size(45, 31);
            this->rb9C->TabIndex = 2;
            this->rb9C->TabStop = true;
            this->rb9C->Text = L"c";
            this->rb9C->UseVisualStyleBackColor = false;
            this->rb9C->CheckedChanged += gcnew System::EventHandler(this, &Startpage::radioButton36_CheckedChanged);
            // 
            // rtbQuestionDisplay10
            // 
            this->rtbQuestionDisplay10->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->rtbQuestionDisplay10->BackColor = System::Drawing::Color::DimGray;
            this->rtbQuestionDisplay10->Cursor = System::Windows::Forms::Cursors::Default;
            this->rtbQuestionDisplay10->Font = (gcnew System::Drawing::Font(L"Times New Roman", 25.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->rtbQuestionDisplay10->ForeColor = System::Drawing::SystemColors::InfoText;
            this->rtbQuestionDisplay10->Location = System::Drawing::Point(31, 5609);
            this->rtbQuestionDisplay10->Margin = System::Windows::Forms::Padding(4);
            this->rtbQuestionDisplay10->Name = L"rtbQuestionDisplay10";
            this->rtbQuestionDisplay10->ReadOnly = true;
            this->rtbQuestionDisplay10->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::None;
            this->rtbQuestionDisplay10->Size = System::Drawing::Size(1869, 223);
            this->rtbQuestionDisplay10->TabIndex = 80;
            this->rtbQuestionDisplay10->Text = L"ddddd";
            this->rtbQuestionDisplay10->TextChanged += gcnew System::EventHandler(this, &Startpage::richTextBox2_TextChanged);
            // 
            // panel11
            // 
            this->panel11->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->panel11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
                static_cast<System::Int32>(static_cast<System::Byte>(54)));
            this->panel11->Controls->Add(this->tbOptnD10);
            this->panel11->Controls->Add(this->tbOptnC10);
            this->panel11->Controls->Add(this->tbOptnA10);
            this->panel11->Controls->Add(this->tbOptnB10);
            this->panel11->Controls->Add(this->rb10D);
            this->panel11->Controls->Add(this->rb10A);
            this->panel11->Controls->Add(this->rb10B);
            this->panel11->Controls->Add(this->rb10C);
            this->panel11->ForeColor = System::Drawing::SystemColors::Desktop;
            this->panel11->Location = System::Drawing::Point(-118, 5833);
            this->panel11->Margin = System::Windows::Forms::Padding(4);
            this->panel11->Name = L"panel11";
            this->panel11->Size = System::Drawing::Size(1994, 390);
            this->panel11->TabIndex = 81;
            this->panel11->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Startpage::panel11_Paint);
            // 
            // tbOptnD10
            // 
            this->tbOptnD10->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->tbOptnD10->BackColor = System::Drawing::Color::Gray;
            this->tbOptnD10->Cursor = System::Windows::Forms::Cursors::Hand;
            this->tbOptnD10->Font = (gcnew System::Drawing::Font(L"Cambria", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tbOptnD10->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->tbOptnD10->Location = System::Drawing::Point(229, 267);
            this->tbOptnD10->Margin = System::Windows::Forms::Padding(4);
            this->tbOptnD10->Multiline = true;
            this->tbOptnD10->Name = L"tbOptnD10";
            this->tbOptnD10->ReadOnly = true;
            this->tbOptnD10->Size = System::Drawing::Size(1755, 70);
            this->tbOptnD10->TabIndex = 1;
            this->tbOptnD10->Text = L"dddd\r\nddd";
            this->tbOptnD10->TextChanged += gcnew System::EventHandler(this, &Startpage::textBox7_TextChanged);
            // 
            // tbOptnC10
            // 
            this->tbOptnC10->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->tbOptnC10->BackColor = System::Drawing::Color::Gray;
            this->tbOptnC10->Cursor = System::Windows::Forms::Cursors::Hand;
            this->tbOptnC10->Font = (gcnew System::Drawing::Font(L"Cambria", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tbOptnC10->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->tbOptnC10->Location = System::Drawing::Point(229, 188);
            this->tbOptnC10->Margin = System::Windows::Forms::Padding(4);
            this->tbOptnC10->Multiline = true;
            this->tbOptnC10->Name = L"tbOptnC10";
            this->tbOptnC10->ReadOnly = true;
            this->tbOptnC10->Size = System::Drawing::Size(1755, 70);
            this->tbOptnC10->TabIndex = 1;
            this->tbOptnC10->Text = L"dddd\r\nddd";
            this->tbOptnC10->TextChanged += gcnew System::EventHandler(this, &Startpage::textBox11_TextChanged);
            // 
            // tbOptnA10
            // 
            this->tbOptnA10->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->tbOptnA10->BackColor = System::Drawing::Color::Gray;
            this->tbOptnA10->Cursor = System::Windows::Forms::Cursors::Hand;
            this->tbOptnA10->Font = (gcnew System::Drawing::Font(L"Cambria", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tbOptnA10->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->tbOptnA10->Location = System::Drawing::Point(229, 32);
            this->tbOptnA10->Margin = System::Windows::Forms::Padding(4);
            this->tbOptnA10->Multiline = true;
            this->tbOptnA10->Name = L"tbOptnA10";
            this->tbOptnA10->ReadOnly = true;
            this->tbOptnA10->Size = System::Drawing::Size(1755, 70);
            this->tbOptnA10->TabIndex = 1;
            this->tbOptnA10->Text = L"dddd\r\nddd";
            this->tbOptnA10->TextChanged += gcnew System::EventHandler(this, &Startpage::textBox15_TextChanged);
            // 
            // tbOptnB10
            // 
            this->tbOptnB10->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->tbOptnB10->BackColor = System::Drawing::Color::Gray;
            this->tbOptnB10->Cursor = System::Windows::Forms::Cursors::Hand;
            this->tbOptnB10->Font = (gcnew System::Drawing::Font(L"Cambria", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tbOptnB10->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->tbOptnB10->Location = System::Drawing::Point(229, 110);
            this->tbOptnB10->Margin = System::Windows::Forms::Padding(4);
            this->tbOptnB10->Multiline = true;
            this->tbOptnB10->Name = L"tbOptnB10";
            this->tbOptnB10->ReadOnly = true;
            this->tbOptnB10->Size = System::Drawing::Size(1755, 70);
            this->tbOptnB10->TabIndex = 1;
            this->tbOptnB10->Text = L"dddd\r\nddd";
            this->tbOptnB10->TextChanged += gcnew System::EventHandler(this, &Startpage::textBox19_TextChanged);
            // 
            // rb10D
            // 
            this->rb10D->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->rb10D->AutoSize = true;
            this->rb10D->BackColor = System::Drawing::Color::Transparent;
            this->rb10D->Cursor = System::Windows::Forms::Cursors::Hand;
            this->rb10D->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->rb10D->ForeColor = System::Drawing::Color::Gold;
            this->rb10D->Location = System::Drawing::Point(175, 283);
            this->rb10D->Margin = System::Windows::Forms::Padding(4);
            this->rb10D->Name = L"rb10D";
            this->rb10D->Size = System::Drawing::Size(46, 31);
            this->rb10D->TabIndex = 2;
            this->rb10D->TabStop = true;
            this->rb10D->Text = L"d";
            this->rb10D->UseVisualStyleBackColor = false;
            this->rb10D->CheckedChanged += gcnew System::EventHandler(this, &Startpage::radioButton37_CheckedChanged);
            // 
            // rb10A
            // 
            this->rb10A->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->rb10A->AutoSize = true;
            this->rb10A->BackColor = System::Drawing::Color::Transparent;
            this->rb10A->Cursor = System::Windows::Forms::Cursors::Hand;
            this->rb10A->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->rb10A->ForeColor = System::Drawing::Color::Gold;
            this->rb10A->Location = System::Drawing::Point(175, 54);
            this->rb10A->Margin = System::Windows::Forms::Padding(4);
            this->rb10A->Name = L"rb10A";
            this->rb10A->Size = System::Drawing::Size(46, 31);
            this->rb10A->TabIndex = 2;
            this->rb10A->TabStop = true;
            this->rb10A->Text = L"a";
            this->rb10A->UseVisualStyleBackColor = false;
            this->rb10A->CheckedChanged += gcnew System::EventHandler(this, &Startpage::radioButton38_CheckedChanged);
            // 
            // rb10B
            // 
            this->rb10B->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->rb10B->AutoSize = true;
            this->rb10B->BackColor = System::Drawing::Color::Transparent;
            this->rb10B->Cursor = System::Windows::Forms::Cursors::Hand;
            this->rb10B->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->rb10B->ForeColor = System::Drawing::Color::Gold;
            this->rb10B->Location = System::Drawing::Point(174, 129);
            this->rb10B->Margin = System::Windows::Forms::Padding(4);
            this->rb10B->Name = L"rb10B";
            this->rb10B->Size = System::Drawing::Size(46, 31);
            this->rb10B->TabIndex = 2;
            this->rb10B->TabStop = true;
            this->rb10B->Text = L"b";
            this->rb10B->UseVisualStyleBackColor = false;
            this->rb10B->CheckedChanged += gcnew System::EventHandler(this, &Startpage::radioButton39_CheckedChanged);
            // 
            // rb10C
            // 
            this->rb10C->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->rb10C->AutoSize = true;
            this->rb10C->BackColor = System::Drawing::Color::Transparent;
            this->rb10C->Cursor = System::Windows::Forms::Cursors::Hand;
            this->rb10C->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->rb10C->ForeColor = System::Drawing::Color::Gold;
            this->rb10C->Location = System::Drawing::Point(174, 205);
            this->rb10C->Margin = System::Windows::Forms::Padding(4);
            this->rb10C->Name = L"rb10C";
            this->rb10C->Size = System::Drawing::Size(45, 31);
            this->rb10C->TabIndex = 2;
            this->rb10C->TabStop = true;
            this->rb10C->Text = L"c";
            this->rb10C->UseVisualStyleBackColor = false;
            this->rb10C->CheckedChanged += gcnew System::EventHandler(this, &Startpage::radioButton40_CheckedChanged);
            // 
            // Startpage
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->AutoScroll = true;
            this->AutoScrollMinSize = System::Drawing::Size(665, 5300);
            this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
                static_cast<System::Int32>(static_cast<System::Byte>(54)));
            this->ClientSize = System::Drawing::Size(1920, 964);
            this->Controls->Add(this->rtbQuestionDisplay10);
            this->Controls->Add(this->panel11);
            this->Controls->Add(this->rtbQuestionDisplay9);
            this->Controls->Add(this->panel10);
            this->Controls->Add(this->rtbQuestionDisplay8);
            this->Controls->Add(this->panel8);
            this->Controls->Add(this->rtbQuestionDisplay7);
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
            this->ForeColor = System::Drawing::Color::Gold;
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
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






    public: int score = 0;
    public: int score1 = 0;
    public: int score2 = 0;
    public: int score3 = 0;
    public: int score4 = 0;
    public: int score5 = 0;
    public: int score6 = 0;
    public: int score7 = 0;
    public: int score8 = 0;
    public: int score9 = 0;
    public: int score10 = 0;
        char ans;
        char ans1;
        char ans2;
        char ans3;
        char ans4;
        char ans5;
        char ans6;
        char ans7;
        char ans8;
        char ans9;
        char ans10;

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


    public: void Startpage::readdb(SqlDataReader^ reader, Question^ question_list) {
        if (reader->Read()) {
            (*question_list).question = reader->GetString(1);
            (*question_list).Option_a = reader->GetString(2);
            (*question_list).Option_b = reader->GetString(3);
            (*question_list).Option_c = reader->GetString(4);
            (*question_list).Option_d = reader->GetString(5);
            (*question_list).Correct_optn = reader->GetString(6);
        }

}
private: System::Void rtbQuestionDisplay_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void rtbQuestionDisplay2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void tbOptnA_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void rb1A_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
    ans1 = 'a';
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel3_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void rtbQuestionDisplay2_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void tbOptnC_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel8_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
       public: bool nextclick = false;
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
    this->nextclick = true;

    score = score1 + score2 + score3 + score4 + score5 + score6 + score7 + score8 + score9 + score10;
    this->Close();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox27_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void radioButton4_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
    ans1 = 'c';
}
private: System::Void radioButton3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
    ans1 = 'b';
}
private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
    ans1 = 'd';
}
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void tbOptnB_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void tbOptnD_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void rtbQuestionDisplay2_TextChanged_2(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void lb3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel2_Paint_1(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void tbOptnD2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void tbOptnC2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void tbOptnA2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void tbOptnB2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void radioButton5_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
    ans2 = 'd';
}
private: System::Void rb2A_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
    ans2 = 'a';
}
private: System::Void radioButton7_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
    ans2 = 'b';
}
private: System::Void radioButton8_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
    ans2 = 'c';
}
private: System::Void rtbQuestionDisplay3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel3_Paint_1(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox6_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void tbOptnA3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox8_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void radioButton9_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
    ans3 = 'd';
}
private: System::Void radioButton10_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
    ans3 = 'a';
}
private: System::Void radioButton11_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
    ans3 = 'b';
}
private: System::Void radioButton12_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
    ans3 = 'c';
}
private: System::Void rtbQuestionDisplay4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel4_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void textBox9_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox10_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void tbOptnA4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox12_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void radioButton13_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
    ans4 = 'd';
}
private: System::Void radioButton14_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
    ans4 = 'a';
}
private: System::Void radioButton15_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
    ans4 = 'b';
}
private: System::Void radioButton16_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
    ans4 = 'c';
}
private: System::Void rtbQuestionDisplay5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel5_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void textBox13_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox14_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void tbOptnA5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox16_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void radioButton17_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
    ans5 = 'd';
}
private: System::Void radioButton18_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
    ans5 = 'a';
}
private: System::Void radioButton19_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
    ans5 = 'b';
}
private: System::Void radioButton20_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
    ans5 = 'c';
}
private: System::Void rtbQuestionDisplay6_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel6_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void textBox17_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox18_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void tbOptnA6_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox20_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void radioButton21_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
    ans6 = 'd';
}
private: System::Void radioButton22_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
    ans6 = 'a';
}
private: System::Void radioButton23_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
    ans6 = 'b';
}
private: System::Void radioButton24_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
    ans6 = 'c';
}
private: System::Void tbOptnA8_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel7_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void textBox21_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox22_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox23_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox24_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void radioButton25_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
    ans7 = 'd';
}
private: System::Void radioButton26_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
    ans7 = 'a';
}
private: System::Void radioButton27_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
    ans7 = 'b';
}
private: System::Void radioButton28_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
    ans7 = 'c';
}
private: System::Void radioButton32_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
    ans8 = 'c';
}
private: System::Void radioButton31_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
    ans8 = 'b';
}
private: System::Void radioButton30_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
    ans8 = 'a';
}
private: System::Void radioButton29_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
    ans8 = 'd';
}
private: System::Void textBox28_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox26_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox25_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void rtbQuestionDisplay8_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void rtbQuestionDisplay9_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel10_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox3_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
}
//private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
//}
private: System::Void radioButton33_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
    ans9 = 'd';
}
private: System::Void radioButton34_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
    ans9 = 'a';
}
private: System::Void radioButton35_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
    ans9 = 'b';
}
private: System::Void radioButton36_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
    ans9 = 'c';
}
private: System::Void richTextBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel11_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void textBox7_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox11_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox15_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox19_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void radioButton37_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
    ans10 = 'd';
}
private: System::Void radioButton38_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
    ans10 = 'a';
}
private: System::Void radioButton39_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
    ans10 = 'b';
}
private: System::Void radioButton40_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
    ans10 = 'c';
}
};
}
