#include "LoginForm.h"
#include "Registerpage.h"
#include "Adminloginpage.h"


using namespace System;
using namespace System::Windows::Forms;

void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	User^ user = nullptr;
	Admin^ admin = nullptr;
	while (true)
	{
		Project::Loginform loginForm;
		Project::Adminloginpage adminPage;
		
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
		else if (loginForm.switchToAdminLogin)
		{
			adminPage.ShowDialog();
			if (adminPage.switchToLogin) {
				continue;
			}
			else {
				admin = adminPage.admin;
				break;
			}
		}

		else if (loginForm.switchToRegister==false) {
		user = loginForm.user;
		break;
		}
		else if(loginForm.switchToAdminLogin==false) {
			admin = adminPage.admin;
			break;
		}
	}
	
	/*while (true)
	{
		Project::Adminloginpage adminPage;
		Project::Loginform loginForm;
		loginForm.ShowDialog();
		
		if (loginForm.switchToAdminLogin)
		{
			adminPage.ShowDialog();
			if (adminPage.switchToLogin) {
				continue;
			}
			else {
				admin = adminPage.admin;
				break;
			}
		}

		else {
			admin = adminPage.admin;
			break;
		}
	}*/
	if (user != nullptr) {
		MessageBox::Show("Successful Authentication of " + user -> name,
			"Program.cpp", MessageBoxButtons::OK);
	}
	
	else if (admin != nullptr) {
		MessageBox::Show("Successful Authentication of admin  " + admin->username,
			"Program.cpp", MessageBoxButtons::OK);
	}
	else  
	{
		MessageBox::Show("Authentication Canceled",
			"Program.cpp", MessageBoxButtons::OK);
	}

		
}
