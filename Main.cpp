#include "MainForm.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace FiguresApp; 

[STAThread]
int main() {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Application::Run(gcnew FiguresApp::MainForm()); 
}
