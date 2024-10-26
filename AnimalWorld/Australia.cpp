#include "Australia.h"

Australia::Australia(double av, bool cl, bool f) : Continent(av, cl)
{
	fire = f;
}

string Australia::GetName()
{
	return "Australia";
}

bool Australia::IsFire()
{
	return fire;
}

void Australia::SetFire(bool f)
{
	fire = f;
}

void Australia::AddHerbivore()
{
	AddAnimal(new Kangaroo((rand() % 60 + 10) * 1.1, 3.6));
}

void Australia::AddCarnivore()
{
	AddAnimal(new AustralianWolf((rand() % 70 + 5) * 1.1, 0));
}
