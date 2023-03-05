#include "L1_MyForm.h"


#include <Windows.h>

using namespace Lab1CG;

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Application::Run(gcnew L1_MyForm);
    return 0;
}
