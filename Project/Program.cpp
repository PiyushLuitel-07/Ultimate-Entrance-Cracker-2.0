#include "Loginform.h"
#include "Registerpage.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThread]

int main(array<String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Project::Loginform form;
    Application::Run(% form);

    return 0;
}