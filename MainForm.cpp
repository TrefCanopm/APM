#include "MainForm.h"
using namespace System;
using namespace System::Windows::Forms;

int NStrWR = 0;

[STAThreadAttribute]

int main(array<String^>^ args)
{
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	APM::MainForm form;
	Application::Run(% form);

}
