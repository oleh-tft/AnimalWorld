#pragma once
#include "Carnivore.h"
class AustralianWolf : public Carnivore
{
	int victimCount;

public:
	AustralianWolf(double p, int v);
	int GetVictimCount();
	void SetVictimCount(int v);
	string GetName();
	bool Eat(Herbivore* vict);
};

