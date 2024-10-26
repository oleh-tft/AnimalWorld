#pragma once
#include "Herbivore.h"
class Bison : public Herbivore
{
	double furWeight;

public:
	Bison(double w, double fur);
	double GetFurWeight();
	string GetName();
	void SetAlive(bool l);
};

