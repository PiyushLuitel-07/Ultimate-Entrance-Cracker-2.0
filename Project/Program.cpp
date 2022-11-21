#include "LoginForm.h"
#include "Registerpage.h"
#include "Adminloginpage.h"
#include "Developer.h"
#include "Startpage.h"
#include "Helppage.h"
#include "Leaderboardpage.h"
#include "Homepage.h"
#include "User.h"
#include <string.h>


using namespace System;
using namespace System::Windows::Forms;

//char usernameass[20];

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
		Project::Developer developerPage;
		Project::Homepage hpage;
		Project::Startpage spage;
		Project::Registerpage registerPage;
		Project::Helppage hepage;
		Project::Leaderboardpage lpage;
		Project::Developer dpage;
		
		loginForm.ShowDialog();
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
				/*continue;*/
				developerPage.ShowDialog();
			}
			else {
				admin = adminPage.admin;
				break;
			}
		}
		else if (loginForm.switchtohomepage) {
			hpage.ShowDialog();
		}
		if (hpage.switchtostartpage) {
			spage.ShowDialog();
		}
		if (hpage.switchtohelppage) {
			hepage.ShowDialog();
			
		}
		if (hpage.switchtoleaderboradpage) {
			lpage.ShowDialog();
		}
		if (hepage.switchtomainmenufromhelppage) {
			hpage.ShowDialog();
		}
		if (lpage.switchtomainmenufromleaderboard) {
			hpage.ShowDialog();
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
