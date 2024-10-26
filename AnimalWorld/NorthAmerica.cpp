#include "NorthAmerica.h"

NorthAmerica::NorthAmerica(double av, bool cl, int hur):Continent(av, cl)
{
    hurricaneCount = hur;
}

string NorthAmerica::GetName()
{
    return "North America";
}

int NorthAmerica::GetHurricaneCount()
{
    return hurricaneCount;
}

void NorthAmerica::SetHurricaneCount(int hur)
{
    hurricaneCount = hur;
}

void NorthAmerica::AddHerbivore()
{
    double r = (rand() % 80 + 15) * 1.1;
    AddAnimal(new Bison(r, r / 3.5));
}

void NorthAmerica::AddCarnivore()
{
    AddAnimal(new Wolf((rand() % 80 + 10) * 1.1, "Grey"));
}
