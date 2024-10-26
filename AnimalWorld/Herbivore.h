#pragma once
#include"Animal.h"

class Herbivore : public Animal
{
	double weight;
	bool life;

public:
	Herbivore(double w);
	void EatGrass();
	double GetWeight();
	void SetWeight(double add);
	void SubstractWeight(double s);
	bool IsAlive();
	void SetAlive(bool l);
	void PrintInfo();
};

