#pragma once
#include "Animal.h"
#include "Herbivore.h"
class Carnivore : public Animal
{
	double power;

public:
	Carnivore(double p);
	virtual bool Eat(Herbivore* vict);
	double GetPower();
	void SetPower(double p);
	void SubstractPower(double s);
	void PrintInfo();
};

