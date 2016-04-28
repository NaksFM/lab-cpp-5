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
	so.write((char*)&m_nPos, 4);
	so.write((char*)&m_nSize, 4);

	return true;
};

bool CLink::Load(std::istream& is) {
	is.read((char*)&m_nPos, 4);
	is.read((char*)&m_nSize, 4);

	return true;
};
