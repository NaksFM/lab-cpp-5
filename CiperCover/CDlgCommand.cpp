#include "CDlgCommand.h"
#include "CWorkspace.h"

#include "CDlgCommand.h"

CDlgCommand::CDlgCommand(const char* sName, ptDlgCommandFunc pFunc):m_sName(sName), m_pFunc(pFunc){};
CDlgCommand::~CDlgCommand(){
	// delete m_pFunc;
};

// Реалізуємо збереження стану
void CDlgCommand::Run(CWorkspace& ws){
	// виклик зарезервованої ф-ції
	(*m_pFunc)(ws);
}
