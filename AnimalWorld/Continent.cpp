#include "Continent.h"

Continent::Continent(double av, bool cl)
{
	temperature = av;
	temperatureAverage = av;
	weatherClear = cl;
}

double Continent::GetTemperature()
{
	return temperature;
}

void Continent::SetTemperature(double t)
{
	temperature = t;
}

double Continent::GetTemperatureAverage()
{
	return temperatureAverage;
}

void Continent::SetTemperatureAverage(double av)
{
	temperatureAverage = av;
}

bool Continent::IsWeatherClear()
{
	return weatherClear;
}

void Continent::SetWeatherClear(bool cl)
{
	weatherClear = cl;
}

vector<Herbivore*> Continent::GetHerbivores()
{
	return herbivores;
}

vector<Carnivore*> Continent::GetCarnivores()
{
	return carnivores;
}

void Continent::AddAnimal(Herbivore* an)
{
	herbivores.push_back(an);
}

void Continent::AddAnimal(Carnivore* an)
{
	carnivores.push_back(an);
}

void Continent::PrintAnimalsInfo()
{
	cout << "========================" << endl;
	for (Herbivore* a : herbivores)
	{
		a->PrintInfo();
		cout << endl;
	}

	for (Carnivore* a : carnivores)
	{
		a->PrintInfo();
		cout << endl;
	}
	cout << "========================" << endl;
}
