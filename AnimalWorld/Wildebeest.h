#pragma once
#include "Herbivore.h"
class Wildebeest : public Herbivore
{
	double leftHornLength;
	double rightHornLength;

public:
	Wildebeest(double w, double lh, double rh);
	Wildebeest(double w, double horns);
	double GetLeftHornLength();
	double GetRightHornLength();
	string GetName();
	void SetAlive(bool l);
};

