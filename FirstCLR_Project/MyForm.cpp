#include "MyForm.h"
#include <Windows.h>

using namespace System;
using namespace System::Windows::Forms; // �������� ����������� ��� �������� �������

[STAThreadAttribute] int main(array<String^>^ args) { // ^ - �������������� ������� ������
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	FirstCLRProject::MyForm form;
	Application::Run(% form);
	return 0;
}
