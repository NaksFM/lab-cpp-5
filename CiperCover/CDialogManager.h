#pragma once
#include <vector>
#include "CDlgCommand.h"

class CDialogManager
{
public:
 CDialogManager(CWorkspace& ws);
 ~CDialogManager(void);
 //Реєструє нову команду 
 void RegisterCommand(const char* sName, ptDlgCommandFunc pFunc);
 //Виконує цикл обробки команд користувача
 void Run();
private:
 std::vector<CDlgCommand*> m_aCommands;
 CWorkspace& m_refWorkspace;
};
