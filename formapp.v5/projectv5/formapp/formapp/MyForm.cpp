#include "Welcome.h"
#include "iostream"
#include "opencv2/highgui/highgui.hpp"
#include <iostream>


using namespace cv;
using namespace System;
using namespace System::Windows::Forms;


[STAThread]
void Main(array<System::String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	formapp::Welcome form;
	//formapp::MyForm form2;
	
	Application::Run(%form);
	
} 

