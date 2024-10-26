#include "AustralianWolf.h"

AustralianWolf::AustralianWolf(double p, int v) : Carnivore(p)
{
	victimCount = v;
}

int AustralianWolf::GetVictimCount()
{
	return victimCount;
}

void AustralianWolf::SetVictimCount(int v)
{
	victimCount = v;
}

string AustralianWolf::GetName()
{
	return "Australian Wolf";
}

bool AustralianWolf::Eat(Herbivore* vict)
{
	if (Carnivore::Eat(vict))
	{
		victimCount++;
		return true;
	}
	return false;
}
