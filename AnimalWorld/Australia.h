#pragma once
#include "Continent.h"
#include "Kangaroo.h"
#include "AustralianWolf.h"

class Australia : public Continent
{
	bool fire;

public:
	Australia(double av, bool cl, bool f);
	string GetName();
	bool IsFire();
	void SetFire(bool f);
	void AddHerbivore();
	void AddCarnivore();
};

