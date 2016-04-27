#include "CLink.h"
#include "CDataChain.h"
#include <cstring>
#include <iostream>

CLink::CLink(CDataChain& refChain):m_refChain(refChain) {};

bool CLink::Attach(const char* sSubStr) {
	m_nPos = m_refChain.Find(sSubStr, 0);
	m_nSize = strlen(sSubStr);
};

void CLink::Output(std::ostream& os) {
	std::cout << m_refChain.GetSubStr(m_nPos, m_nSize) << std::endl;
};

bool CLink::Save(std::ostream& so) {
	//out: &m_refChain m_nPos m_nSize
	so << &m_refChain << " ";
	so << m_nPos << " ";
	so << m_nSize;

	return true;
};
