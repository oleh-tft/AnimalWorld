#include "Herbivore.h"

Herbivore::Herbivore(double w)
{
	weight = w;
	life = true;
}

void Herbivore::EatGrass()
{
	if (!IsAlive()) return;

	cout << GetName() << "(" << weight << " ---> " << weight + 10 << ") has eaten some grass!" << endl;
	weight += 10;
}

double Herbivore::GetWeight()
{
	return weight;
}

void Herbivore::SetWeight(double w)
{
	weight = w;
}

void Herbivore::SubstractWeight(double s)
{
	double oldWeight = weight;
	weight = max(0.0, weight - s);

	if (!IsAlive()) return;

	if (weight < oldWeight * 0.8)
	{
		SetAlive(false);
		cout << GetName() + " died!" << endl;
	}
}

bool Herbivore::IsAlive()
{
	return life;
}

void Herbivore::SetAlive(bool l)
{
	life = l;
}

void Herbivore::PrintInfo()
{
	cout << boolalpha << GetName() << ": weight=" << weight << "\talive= " << life;
}
