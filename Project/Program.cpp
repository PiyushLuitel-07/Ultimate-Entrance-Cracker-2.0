
#include "LoginForm.h"
#include "Registerpage.h"


using namespace System;
using namespace System::Windows::Forms;

void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	User^ user = nullptr;
	while (true)
	{
		Project::Loginform loginForm;
		loginForm.ShowDialog();
		Project::Registerpage registerPage;
		if(loginForm.switchToRegister)
		{
			registerPage.ShowDialog();
			if (registerPage.switchToLogin) {
			continue;
			}
			else {
				user = registerPage.user;
				break;
			}
		}

		else {
		user = loginForm.user;
		break;
		}
	}
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
