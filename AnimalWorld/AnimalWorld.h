#pragma once
#include<iostream>
#include<vector>
#include"Continent.h"
#include"NorthAmerica.h"
#include"Africa.h"
#include"Australia.h"
#include"Bison.h"
#include"Wolf.h"
#include"Lion.h"
#include"Wildebeest.h"

using namespace std;

class AnimalWorld
{
	int cont;
	vector<Continent*> continents;

public:
	AnimalWorld(vector<Continent*> con);
	Continent* GetContinent();
	void ChooseContinent();
	void MealsHerbivores();
	void NutritionCarnivores();
	void Simulate();
};