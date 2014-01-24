// CreditState.cpp

#include "CreditState.h"

CreditState::CreditState() {
	m_nextState = "";
}

CreditState::~CreditState() {

}

void CreditState::Enter() {
	m_nextState = "";
}

void CreditState::Exit() {

}

bool CreditState::Update() {
	return false;
}

void CreditState::Draw() {

}

std::string CreditState::Next() {
	return m_nextState;
}

bool CreditState::IsType(const std::string &c_type) {
	return c_type.compare("CreditState") == 0;
}

void CreditState::Reset() {
	m_nextState = "";
}