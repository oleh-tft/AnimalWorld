#include "Lion.h"

Lion::Lion(double p, bool h) : Carnivore(p)
{
	hungry = h;
}

bool Lion::IsHungry()
{
	return hungry;
}

void Lion::SetHungry(bool h)
{
	hungry = h;
}

string Lion::GetName()
{
	return "Lion";
}

bool Lion::Eat(Herbivore* h)
{
	if (hungry)
	{
		return Carnivore::Eat(h);
	}
	return false;
}
