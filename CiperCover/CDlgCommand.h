#pragma once
#include <string>
#include "CWorkspace.h"
// typedef void (*myfunc)()
// myfunc f те ж що (*f)()
typedef void (*ptDlgCommandFunc)(CWorkspace& ws);

class CDlgCommand
{
public:
 CDlgCommand(const char* sName, ptDlgCommandFunc pFunc = NULL);
 ~CDlgCommand(void);
 //Отримуємо назву команди
 const char* GetName() { return m_sName.c_str(); }
 //Виклик зв"язаної функції
 void Run(CWorkspace& ws);
private:
 //Назва команди
 std::string m_sName;
 ptDlgCommandFunc m_pFunc;
};
