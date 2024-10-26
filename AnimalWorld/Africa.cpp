#include "Africa.h"

Africa::Africa(double av, bool cl, double hum) : Continent(av, cl)
{
	humidity = hum;
}

string Africa::GetName()
{
	return "Africa";
}

double Africa::GetHumidity()
{
	return humidity;
}

void Africa::SetHumidity(double hum)
{
	humidity = hum;
}

void Africa::AddHerbivore()
{
	AddAnimal(new Wildebeest((rand() % 70 + 10) * 1.1, 12.5));
}

void Africa::AddCarnivore()
{
	AddAnimal(new Lion((rand() % 100 + 1) * 1.1, true));
}
