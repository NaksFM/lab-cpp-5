#pragma once

#include "CDataChain.h"
#include <iostream>
#include <vector>

class CLink
{
public:
	CLink(CDataChain& refChain);
	virtual ~CLink(void);
	//Пробує прив"язати об"єкт у послідовності до підстрічки
	bool Attach(const char* sSubStr);
	//Вручну встановити позицію підстрічки
	bool setPos(int nPos);
	//Вручну встановити дожину підпослідовності 
	bool setSize(int nSize);
	//повертає довжину підстрічки
	int size();
	//повертає позицію початку у повній послідовності
	int startPos();
	//Вивід на консоль
	virtual void Output(std::ostream& os);
	virtual bool Save(std::ostream& so);
	virtual bool Load(std::istream& is);
protected:
	//Посилання на контейнер з повною послідовністю
	CDataChain& m_refChain;
	//Позиція початку у повній послідовності
	int m_nPos;
	//Довжина підстрічки, до якої прив"язується об"єкт
	int m_nSize;
};

typedef std::vector<CLink*> LinksArray;
