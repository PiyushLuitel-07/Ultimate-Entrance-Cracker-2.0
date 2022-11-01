
#include "LoginForm.h"


using namespace System;
using namespace System::Windows::Forms;

void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Project::Loginform loginForm;
	loginForm.ShowDialog();


	User^ user = loginForm.user;
	if (user != nullptr) {
		MessageBox::Show("Successful Authentication of " + user -> name,
			"Program.cpp", MessageBoxButtons::OK);
	}
	else
	{
		MessageBox::Show("Authentication Canceled",
			"Program.cpp", MessageBoxButtons::OK);
	}

		
}
