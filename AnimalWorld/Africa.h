#pragma once
#include "Continent.h"
#include "Wildebeest.h"
#include "Lion.h"

class Africa : public Continent
{
	double humidity;

public:
	Africa(double av, bool cl, double hum);
	string GetName();
	double GetHumidity();
	void SetHumidity(double hum);
	void AddHerbivore();
	void AddCarnivore();
};

