#pragma once
#include "MyVirus.h"
class DengueVirus:public MyVirus
{
private:
	char m_protein[4];
public:
	DengueVirus();
	~DengueVirus();
	void DoBorn() override;
	void DoDie() override;
	void DoClone() override;
	void InitResistance() override;
};
