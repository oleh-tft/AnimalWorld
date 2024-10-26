#include "Bison.h"

Bison::Bison(double w, double fur) : Herbivore(w)
{
	furWeight = fur;
}

double Bison::GetFurWeight()
{
	return furWeight;
}

string Bison::GetName()
{
	return "Bison";
}

void Bison::SetAlive(bool l)
{
	if (!l)
	{
		furWeight = 0.0;
	}
	Herbivore::SetAlive(l);
}
