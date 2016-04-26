#include "CWorkspace.h"
#include "CDataSimple"

CWorkspace::CWorkspace(CDataChain& data) {
	m_refChain = data;
}

CWorkspace::~CWorkspace(){}

void CWorkspace::Init(int nDepth, int nLength) {
	m_refChain.Generate(nDepth, nLength);
}

const char* CWorkspace::GetChainString() {
	return m_refChain.GetFullString();
}