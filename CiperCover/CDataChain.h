//#ifndef _CDataChain_
//#define _CDataChain_
#pragma once

#include <string>

class CDataChain
{
public:
	CDataChain(void);
	virtual ~CDataChain(void);
	//віртуальна функція
	virtual void Generate(int nDepth, int nMaxLength = 0) = 0;
	//повертає довжину згенерованої послідовності цифр.
	size_t GetLength();
	//повертає позицію входження підстрічки sSubStr починаючи із nPos.
	int Find(const char* sSubStr, int nPos = 0);
	//повертає підстрічку починаючи із nPos довжиною nLength. або до кінця послідовності
	std::string GetSubStr(int nPos, int nLength = -1);
	//повертає всю згенеровану послідовність цифр
	const char* GetFullString();
	std::string setString(std::string& str);
protected:
	std::string m_sChain;
};

//#endif
