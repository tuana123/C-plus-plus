#pragma once
#include "MyVirus.h"
class FluVirus: public MyVirus
{
private:
	int m_color;
public:
	FluVirus();
	~FluVirus();
	void DoBorn() override;
	void DoDie() override;
	MyVirus* DoClone() override;
	void InitResistance() override;
};

