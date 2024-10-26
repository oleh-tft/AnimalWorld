#pragma once
#include "Carnivore.h"
class Lion : public Carnivore
{
	bool hungry;

public:
	Lion(double p, bool h);
	bool IsHungry();
	void SetHungry(bool h);
	string GetName();
	bool Eat(Herbivore* h);
};

