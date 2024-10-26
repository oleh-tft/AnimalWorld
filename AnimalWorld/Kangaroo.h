#pragma once
#include "Herbivore.h"
class Kangaroo : public Herbivore
{
	double jumpHeight;

public:
	Kangaroo(double w, double j);
	double GetJumpHeight();
	string GetName();
};

