#include "pch.h"
#include "MyForm.h"
#include <windows.h>


using namespace System;
using namespace System::Windows::Forms;


int main(array<System::String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    // Crea una instancia del formulario
    RefugioAnimales::MyForm^ form = gcnew RefugioAnimales::MyForm();

    // Ejecuta la aplicación
    Application::Run(form);

    return 0;
}
