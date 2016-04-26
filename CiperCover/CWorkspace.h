#ifndef _CWorkspace_
#define _CWorkspace_

#include "CDataChain.h"
#include <string>

class CWorkspace
{
public:
	CWorkspace(CDataChain& data);
	~CWorkspace(void);
	//Ініціалізує повну послідовність цифр
	void Init(int nDepth, int nLength);
	//Повертає стрічку із повною послідовністю цифр.
	const char* GetChainString();
	// Зберігає у файл sFileLepath стан CWorkspace
	bool Save(std::string& sFilepath);
	// Відновлює стан Workspace із файлу sFileLepath
	bool Load(std::string& sFilepath);
private:
	//Зсилка на контейнер (породжений від CDataChain) із послідовністю
	CDataChain& m_refChain;
};

#endif