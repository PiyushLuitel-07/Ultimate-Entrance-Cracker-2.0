#pragma once


using namespace System;

public ref class Question {
public:
	int Id;
	String^ Questions;
	String^ Option_a;
	String^ Option_b;
	String^ Option_c;
	String^ Option_d;
	String^ Correct_optn;
};