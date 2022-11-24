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

                connectSQL(question_list);
                rtbQuestionDisplay->Text = question_list->question;
                tbOptnA->Text = question_list->Option_a;
                tbOptnB->Text = question_list->Option_b;
                tbOptnC->Text = question_list->Option_c;
                tbOptnD->Text = question_list->Option_d;

                connectSQL(question_list);
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



    private: System::Windows::Forms::Timer^ timer1;




    private: System::Windows::Forms::TextBox^ tbOptnD;





    private: System::Windows::Forms::TextBox^ tbOptnC;

    private: System::Windows::Forms::TextBox^ tbOptnA;
    private: System::Windows::Forms::Label^ lb3;
    private: System::Windows::Forms::Panel^ panel2;
    private: System::Windows::Forms::TextBox^ tbOptnD2;

    private: System::Windows::Forms::TextBox^ tbOptnC2;

    private: System::Windows::Forms::TextBox^ tbOptnA2;
    private: System::Windows::Forms::TextBox^ tbOptnB2;


    private: System::Windows::Forms::RadioButton^ radioButton5;
    private: System::Windows::Forms::RadioButton^ radioButton6;
    private: System::Windows::Forms::RadioButton^ radioButton7;
    private: System::Windows::Forms::RadioButton^ radioButton8;
    private: System::Windows::Forms::RichTextBox^ rtbQuestionDisplay2;









































































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
            this->panel2 = (gcnew System::Windows::Forms::Panel());
            this->tbOptnD2 = (gcnew System::Windows::Forms::TextBox());
            this->tbOptnC2 = (gcnew System::Windows::Forms::TextBox());
            this->tbOptnA2 = (gcnew System::Windows::Forms::TextBox());
            this->tbOptnB2 = (gcnew System::Windows::Forms::TextBox());
            this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
            this->radioButton6 = (gcnew System::Windows::Forms::RadioButton());
            this->radioButton7 = (gcnew System::Windows::Forms::RadioButton());
            this->radioButton8 = (gcnew System::Windows::Forms::RadioButton());
            this->rtbQuestionDisplay2 = (gcnew System::Windows::Forms::RichTextBox());
            this->panel1->SuspendLayout();
            this->panel2->SuspendLayout();
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
            this->label1->Location = System::Drawing::Point(1467, 58);
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
            this->label2->BackColor = System::Drawing::Color::Transparent;
            this->label2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label2->Font = (gcnew System::Drawing::Font(L"Calibri Light", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label2->ForeColor = System::Drawing::Color::Gold;
            this->label2->Location = System::Drawing::Point(1534, 111);
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
            this->button2->Location = System::Drawing::Point(1174, 5931);
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
            this->button1->Location = System::Drawing::Point(826, 5931);
            this->button1->Margin = System::Windows::Forms::Padding(4);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(340, 85);
            this->button1->TabIndex = 58;
            this->button1->Text = L"Next";
            this->button1->UseVisualStyleBackColor = false;
            // 
            // radioButton4
            // 
            this->radioButton4->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->radioButton4->AutoSize = true;
            this->radioButton4->BackColor = System::Drawing::Color::Transparent;
            this->radioButton4->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->radioButton4->ForeColor = System::Drawing::Color::Gold;
            this->radioButton4->Location = System::Drawing::Point(101, 176);
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
            this->radioButton3->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->radioButton3->ForeColor = System::Drawing::Color::Gold;
            this->radioButton3->Location = System::Drawing::Point(101, 101);
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
            this->radioButton2->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->radioButton2->ForeColor = System::Drawing::Color::Gold;
            this->radioButton2->Location = System::Drawing::Point(102, 34);
            this->radioButton2->Margin = System::Windows::Forms::Padding(4);
            this->radioButton2->Name = L"radioButton2";
            this->radioButton2->Size = System::Drawing::Size(46, 31);
            this->radioButton2->TabIndex = 2;
            this->radioButton2->TabStop = true;
            this->radioButton2->Text = L"a";
            this->radioButton2->UseVisualStyleBackColor = false;
            // 
            // radioButton1
            // 
            this->radioButton1->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->radioButton1->AutoSize = true;
            this->radioButton1->BackColor = System::Drawing::Color::Transparent;
            this->radioButton1->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->radioButton1->ForeColor = System::Drawing::Color::Gold;
            this->radioButton1->Location = System::Drawing::Point(102, 248);
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
            this->tbOptnB->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tbOptnB->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->tbOptnB->Location = System::Drawing::Point(161, 82);
            this->tbOptnB->Margin = System::Windows::Forms::Padding(4);
            this->tbOptnB->Multiline = true;
            this->tbOptnB->Name = L"tbOptnB";
            this->tbOptnB->ReadOnly = true;
            this->tbOptnB->Size = System::Drawing::Size(1282, 64);
            this->tbOptnB->TabIndex = 1;
            this->tbOptnB->Text = L"dddd";
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
            this->panel1->Location = System::Drawing::Point(-88, 266);
            this->panel1->Margin = System::Windows::Forms::Padding(4);
            this->panel1->Name = L"panel1";
            this->panel1->Size = System::Drawing::Size(1635, 302);
            this->panel1->TabIndex = 41;
            // 
            // tbOptnD
            // 
            this->tbOptnD->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->tbOptnD->BackColor = System::Drawing::Color::Gray;
            this->tbOptnD->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tbOptnD->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->tbOptnD->Location = System::Drawing::Point(161, 226);
            this->tbOptnD->Margin = System::Windows::Forms::Padding(4);
            this->tbOptnD->Multiline = true;
            this->tbOptnD->Name = L"tbOptnD";
            this->tbOptnD->ReadOnly = true;
            this->tbOptnD->Size = System::Drawing::Size(1282, 64);
            this->tbOptnD->TabIndex = 1;
            this->tbOptnD->Text = L"dddd";
            // 
            // tbOptnC
            // 
            this->tbOptnC->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->tbOptnC->BackColor = System::Drawing::Color::Gray;
            this->tbOptnC->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tbOptnC->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->tbOptnC->Location = System::Drawing::Point(161, 154);
            this->tbOptnC->Margin = System::Windows::Forms::Padding(4);
            this->tbOptnC->Multiline = true;
            this->tbOptnC->Name = L"tbOptnC";
            this->tbOptnC->ReadOnly = true;
            this->tbOptnC->Size = System::Drawing::Size(1282, 64);
            this->tbOptnC->TabIndex = 1;
            this->tbOptnC->Text = L"dddd";
            // 
            // tbOptnA
            // 
            this->tbOptnA->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->tbOptnA->BackColor = System::Drawing::Color::Gray;
            this->tbOptnA->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tbOptnA->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->tbOptnA->Location = System::Drawing::Point(161, 10);
            this->tbOptnA->Margin = System::Windows::Forms::Padding(4);
            this->tbOptnA->Multiline = true;
            this->tbOptnA->Name = L"tbOptnA";
            this->tbOptnA->ReadOnly = true;
            this->tbOptnA->Size = System::Drawing::Size(1282, 64);
            this->tbOptnA->TabIndex = 1;
            this->tbOptnA->Text = L"dddd";
            this->tbOptnA->TextChanged += gcnew System::EventHandler(this, &Startpage::tbOptnA_TextChanged);
            // 
            // rtbQuestionDisplay
            // 
            this->rtbQuestionDisplay->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->rtbQuestionDisplay->BackColor = System::Drawing::Color::DimGray;
            this->rtbQuestionDisplay->Cursor = System::Windows::Forms::Cursors::No;
            this->rtbQuestionDisplay->Font = (gcnew System::Drawing::Font(L"Baskerville Old Face", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->rtbQuestionDisplay->ForeColor = System::Drawing::SystemColors::InfoText;
            this->rtbQuestionDisplay->Location = System::Drawing::Point(-9, 35);
            this->rtbQuestionDisplay->Margin = System::Windows::Forms::Padding(4);
            this->rtbQuestionDisplay->Name = L"rtbQuestionDisplay";
            this->rtbQuestionDisplay->ReadOnly = true;
            this->rtbQuestionDisplay->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::None;
            this->rtbQuestionDisplay->Size = System::Drawing::Size(1443, 223);
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
            this->lb3->Location = System::Drawing::Point(1639, 175);
            this->lb3->Name = L"lb3";
            this->lb3->Size = System::Drawing::Size(0, 16);
            this->lb3->TabIndex = 59;
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
            this->panel2->Location = System::Drawing::Point(-88, 836);
            this->panel2->Margin = System::Windows::Forms::Padding(4);
            this->panel2->Name = L"panel2";
            this->panel2->Size = System::Drawing::Size(1635, 302);
            this->panel2->TabIndex = 61;
            this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Startpage::panel2_Paint);
            // 
            // tbOptnD2
            // 
            this->tbOptnD2->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->tbOptnD2->BackColor = System::Drawing::Color::Gray;
            this->tbOptnD2->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tbOptnD2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->tbOptnD2->Location = System::Drawing::Point(161, 226);
            this->tbOptnD2->Margin = System::Windows::Forms::Padding(4);
            this->tbOptnD2->Multiline = true;
            this->tbOptnD2->Name = L"tbOptnD2";
            this->tbOptnD2->ReadOnly = true;
            this->tbOptnD2->Size = System::Drawing::Size(1282, 64);
            this->tbOptnD2->TabIndex = 1;
            this->tbOptnD2->Text = L"dddd";
            // 
            // tbOptnC2
            // 
            this->tbOptnC2->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->tbOptnC2->BackColor = System::Drawing::Color::Gray;
            this->tbOptnC2->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tbOptnC2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->tbOptnC2->Location = System::Drawing::Point(161, 154);
            this->tbOptnC2->Margin = System::Windows::Forms::Padding(4);
            this->tbOptnC2->Multiline = true;
            this->tbOptnC2->Name = L"tbOptnC2";
            this->tbOptnC2->ReadOnly = true;
            this->tbOptnC2->Size = System::Drawing::Size(1282, 64);
            this->tbOptnC2->TabIndex = 1;
            this->tbOptnC2->Text = L"dddd";
            // 
            // tbOptnA2
            // 
            this->tbOptnA2->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->tbOptnA2->BackColor = System::Drawing::Color::Gray;
            this->tbOptnA2->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tbOptnA2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->tbOptnA2->Location = System::Drawing::Point(161, 10);
            this->tbOptnA2->Margin = System::Windows::Forms::Padding(4);
            this->tbOptnA2->Multiline = true;
            this->tbOptnA2->Name = L"tbOptnA2";
            this->tbOptnA2->ReadOnly = true;
            this->tbOptnA2->Size = System::Drawing::Size(1282, 64);
            this->tbOptnA2->TabIndex = 1;
            this->tbOptnA2->Text = L"dddd";
            this->tbOptnA2->TextChanged += gcnew System::EventHandler(this, &Startpage::textBox3_TextChanged);
            // 
            // tbOptnB2
            // 
            this->tbOptnB2->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->tbOptnB2->BackColor = System::Drawing::Color::Gray;
            this->tbOptnB2->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tbOptnB2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->tbOptnB2->Location = System::Drawing::Point(161, 82);
            this->tbOptnB2->Margin = System::Windows::Forms::Padding(4);
            this->tbOptnB2->Multiline = true;
            this->tbOptnB2->Name = L"tbOptnB2";
            this->tbOptnB2->ReadOnly = true;
            this->tbOptnB2->Size = System::Drawing::Size(1282, 64);
            this->tbOptnB2->TabIndex = 1;
            this->tbOptnB2->Text = L"dddd";
            // 
            // radioButton5
            // 
            this->radioButton5->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->radioButton5->AutoSize = true;
            this->radioButton5->BackColor = System::Drawing::Color::Transparent;
            this->radioButton5->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->radioButton5->ForeColor = System::Drawing::Color::Gold;
            this->radioButton5->Location = System::Drawing::Point(102, 248);
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
            this->radioButton6->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->radioButton6->ForeColor = System::Drawing::Color::Gold;
            this->radioButton6->Location = System::Drawing::Point(102, 34);
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
            this->radioButton7->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->radioButton7->ForeColor = System::Drawing::Color::Gold;
            this->radioButton7->Location = System::Drawing::Point(101, 101);
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
            this->radioButton8->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->radioButton8->ForeColor = System::Drawing::Color::Gold;
            this->radioButton8->Location = System::Drawing::Point(101, 176);
            this->radioButton8->Margin = System::Windows::Forms::Padding(4);
            this->radioButton8->Name = L"radioButton8";
            this->radioButton8->Size = System::Drawing::Size(45, 31);
            this->radioButton8->TabIndex = 2;
            this->radioButton8->TabStop = true;
            this->radioButton8->Text = L"c";
            this->radioButton8->UseVisualStyleBackColor = false;
            // 
            // rtbQuestionDisplay2
            // 
            this->rtbQuestionDisplay2->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->rtbQuestionDisplay2->BackColor = System::Drawing::Color::DimGray;
            this->rtbQuestionDisplay2->Cursor = System::Windows::Forms::Cursors::No;
            this->rtbQuestionDisplay2->Font = (gcnew System::Drawing::Font(L"Baskerville Old Face", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->rtbQuestionDisplay2->ForeColor = System::Drawing::SystemColors::InfoText;
            this->rtbQuestionDisplay2->Location = System::Drawing::Point(-9, 605);
            this->rtbQuestionDisplay2->Margin = System::Windows::Forms::Padding(4);
            this->rtbQuestionDisplay2->Name = L"rtbQuestionDisplay2";
            this->rtbQuestionDisplay2->ReadOnly = true;
            this->rtbQuestionDisplay2->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::None;
            this->rtbQuestionDisplay2->Size = System::Drawing::Size(1443, 223);
            this->rtbQuestionDisplay2->TabIndex = 60;
            this->rtbQuestionDisplay2->Text = L"ddddd";
            this->rtbQuestionDisplay2->TextChanged += gcnew System::EventHandler(this, &Startpage::rtbQuestionDisplay2_TextChanged);
            // 
            // Startpage
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->AutoScroll = true;
            this->AutoScrollMinSize = System::Drawing::Size(665, 4900);
            this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
                static_cast<System::Int32>(static_cast<System::Byte>(54)));
            this->ClientSize = System::Drawing::Size(1890, 964);
            this->Controls->Add(this->panel2);
            this->Controls->Add(this->rtbQuestionDisplay2);
            this->Controls->Add(this->lb3);
            this->Controls->Add(this->button2);
            this->Controls->Add(this->button1);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->label1);
            this->Controls->Add(this->panel1);
            this->Controls->Add(this->rtbQuestionDisplay);
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
                this->lb3->Location = System::Drawing::Point(1141, 29);

            }
            else {
                this->label2->ForeColor = System::Drawing::Color::Turquoise;
                this->label1->ForeColor = System::Drawing::Color::Turquoise;
                this->label1->Location = System::Drawing::Point(1150, 33);
                this->label2->Location = System::Drawing::Point(1167, 72);
                this->lb3->Location = System::Drawing::Point(1141, 29);









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
}
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
