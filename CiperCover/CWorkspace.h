#ifndef _CWorkspace_
#define _CWorkspace_

#include "CDataChain.h"

class CWorkspace
{
public:
	CWorkspace(CDataChain& data);
	~CWorkspace(void);
	//Ініціалізує повну послідовність цифр
	void Init(int nDepth, int nLength);
	//Повертає стрічку із повною послідовністю цифр.
	const char* GetChainString();
private:
	//Зсилка на контейнер (породжений від CDataChain) із послідовністю
	CDataChain& m_refChain;
};

#endif