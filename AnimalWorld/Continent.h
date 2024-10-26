#pragma once
#include<vector>
#include"Animal.h"
#include"Carnivore.h"
using namespace std;

class Continent
{
	double temperature;
	double temperatureAverage;
	bool weatherClear;
	vector<Herbivore*> herbivores;
	vector<Carnivore*> carnivores;

public:
	Continent(double av, bool cl);
	virtual string GetName() = 0;
	double GetTemperature();
	void SetTemperature(double t);
	double GetTemperatureAverage();
	void SetTemperatureAverage(double av);
	bool IsWeatherClear();
	void SetWeatherClear(bool cl);
	vector<Herbivore*> GetHerbivores();
	vector<Carnivore*> GetCarnivores();
	void AddAnimal(Herbivore* an);
	void AddAnimal(Carnivore* an);
	void PrintAnimalsInfo();
	virtual void AddHerbivore() = 0;
	virtual void AddCarnivore() = 0;
};

