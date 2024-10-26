#pragma once
#include "Carnivore.h"
class Wolf : public Carnivore
{
	string furColor;

public:
	Wolf(double p, string color);
	string GetFurColor();
	string GetName();
};

