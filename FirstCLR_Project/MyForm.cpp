#include "MyForm.h"
#include <Windows.h>

using namespace System;
using namespace System::Windows::Forms; // описание функционала для основной функции

[STAThreadAttribute] int main(array<String^>^ args) { // ^ - автоматическая очистка памяти
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	FirstCLRProject::MyForm form;
	Application::Run(% form);
	return 0;
}
