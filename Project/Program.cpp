#include "LoginForm.h"
#include "Registerpage.h"
#include "Adminloginpage.h"
#include "Developer.h"
#include "Startpage.h"
#include "Helppage.h"
#include "Leaderboardpage.h"
#include "Homepage.h"
#include "User.h"


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
		Project::Developer developerPage;
		Project::Homepage hpage;
		Project::Startpage spage;
		Project::Registerpage registerPage;
		Project::Helppage hepage;
		Project::Leaderboardpage lpage;
		Project::Developer dpage;

		loginForm.ShowDialog();

		while (true)
		{
			////////////////////first login page///////////
			if (loginForm.switchToRegister)
			{
				registerPage.ShowDialog();
				if (registerPage.switchToLogin) {
					loginForm.ShowDialog();
				}
			}


			//////////////////////////
			if (loginForm.switchtohomepage)
			{
				user = registerPage.user;
				break;
			}
			//////////////////
			/////////////////////////adminlogin/////////////
			if (loginForm.switchToAdminLogin)
			{
				adminPage.ShowDialog();
				while (true) {

					if (adminPage.switchToLogin = true) {
						loginForm.ShowDialog();
						admin = adminPage.admin;
						break;
					}
					if (developerPage.switchTologout) {
						loginForm.ShowDialog();
						break;
					}

				}
			}

		}
		//-----------------------Homepage--------------------//	
		while (true) {
			if (loginForm.switchtohomepage)
			{
				user = loginForm.user;
				if (user != nullptr) {
					Project::Homepage hpage(user);
					hpage.ShowDialog();
					if (hpage.switchtostartpage) {
						spage.ShowDialog();


					}
					if (hpage.switchtohelppage) {
						hepage.ShowDialog();
						if (hepage.switchtomainmenufromhelppage) {
							hpage.ShowDialog();
						}

					}
					if (hpage.switchtoleaderboradpage) {
						lpage.ShowDialog();
						if (lpage.switchtomainmenufromleaderboard) {
							hpage.ShowDialog();
							continue;
						}
						else
						{
							MessageBox::Show("Error",
								"Program.cpp", MessageBoxButtons::OK);
						}
					}
					if (hpage.switchToLogin)
					{
						break;
					}

				}
			}

		}
		continue;
	}
}