#include "Carnivore.h"

Carnivore::Carnivore(double p)
{
	power = p;
}

bool Carnivore::Eat(Herbivore* vict)
{
	double victimWeight = vict->GetWeight();
	if (victimWeight == 0)
	{
		cout << vict->GetName() << "(" << victimWeight << ") had not enough weight to be eaten by " << GetName() << "(" << power << ")" << endl;
		return false;
	}
	if (power < victimWeight)
	{
		cout << GetName() << "(" << power << " ---> " << power - 10 << ")" << " tried to attack " << vict->GetName() << "(" << victimWeight << ") but had not enough power" << endl;
		SubstractPower(10.0);
		return false;
	}

	cout << GetName() << "(" << power << " ---> " << power + 10 << ")" << " attacked " << vict->GetName() << "(" << victimWeight << ") and increased it's power " << endl;
	power += 10;
	vict->SubstractWeight(10);
	return true;
}

double Carnivore::GetPower()
{
	return power;
}

void Carnivore::SetPower(double p)
{
	power = p;
}

void Carnivore::SubstractPower(double s)
{
	power = max(0.0, power - s);
}

void Carnivore::PrintInfo()
{
	cout << boolalpha << GetName() << ": power=" << power;
}
