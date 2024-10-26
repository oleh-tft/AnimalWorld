#pragma once
#include "Continent.h"
#include "Bison.h"
#include "Wolf.h"

class NorthAmerica : public Continent
{
	int hurricaneCount;

public:
	NorthAmerica(double av, bool cl, int hur);
	string GetName();
	int GetHurricaneCount();
	void SetHurricaneCount(int hur);
	void AddHerbivore();
	void AddCarnivore();
};

