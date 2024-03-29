#include "FluVirus.h"
#include <iostream>
#include <iomanip>
#include <string>

FluVirus::FluVirus()
{	
	this->DoBorn();
	this->InitResistance();
}

FluVirus::~FluVirus()
{
	this->DoDie();
}

void FluVirus::DoBorn()
{
	this->LoadADNIformation();
	int color = rand() % (2);
	if (color == 1)
	{
		this->m_color = 0x0000ff;
//		std::cout << "Virus Flu Blue was Born";
	}
	else
	{
	//	std::cout << "Virus Flu Red was Born";
		this->m_color = 0xff0000;
	}
	
}

void FluVirus::DoDie()
{
	delete[] this->m_dna;
	this->m_resistance = 0;
}

std::list<MyVirus*> FluVirus::DoClone()
{
	std::list<MyVirus*> listVirus;
	FluVirus *p = new FluVirus();
	p->m_color = this->m_color;
	
	std::string str = this->m_dna;
	for (int i = 0; i < str.size(); i++)
	{
		p->m_dna[i] = str[i];
	}
	p->m_resistance = this->m_resistance;
	listVirus.push_back(p);
	/*p->m_color = this->m_color;
	p->m_dna = this->m_dna;
	p->m_resistance = this->m_resistance;
	listVirus.push_back(p);*/
	return listVirus;
}

void FluVirus::InitResistance()
{
	if (this->m_color == 0x0000ff)
	{
		this->m_resistance = rand() % (15 - 10 + 1) + 10;
	}
	else
	{
		this->m_resistance = rand() % (20 - 10 + 1) + 10;
	}
}

void FluVirus::GetNameVirus()
{
	std::string str;
	if (this->m_color == 0x0000ff)
	{
		str = "Blue";
	}
	else
	{
		str = "Red"; 
	}
	std::cout << str << std::setw(20) << std::right << this->m_resistance << std::endl;
}
