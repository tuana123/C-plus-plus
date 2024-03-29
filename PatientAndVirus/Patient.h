#pragma once
#include <iostream>
#include "MyVirus.h"
class Patient
{
private:
	int m_resistance;
	std::list<MyVirus*> m_listVirus;
	int m_state;
public:
	Patient();
	virtual ~Patient();
	void InitResistance();
	void DoStart();
	void TakeMedicine(int);
	void DoDie();
	int GetState();
};

