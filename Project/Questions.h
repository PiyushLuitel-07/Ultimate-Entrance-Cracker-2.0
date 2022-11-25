#pragma once


using namespace System;

public ref class Question {
public:
	int Id;
	String^ question;
	String^ Option_a;
	String^ Option_b;
	String^ Option_c;
	String^ Option_d;
	char Correct_optn;
};