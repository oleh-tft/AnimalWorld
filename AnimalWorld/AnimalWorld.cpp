#include"AnimalWorld.h"

AnimalWorld::AnimalWorld(vector<Continent*> con)
{
	continents = con;
	ChooseContinent();
}

Continent* AnimalWorld::GetContinent()
{
	return continents[cont];
}

void AnimalWorld::ChooseContinent()
{
	cout << "Pick a continent!\n";
	try
	{
		for (int i = 0; i < continents.size(); i++)
		{
			cout << i + 1 << ". " << continents[i]->GetName() << endl;
		}
		cout << "Choose: ";
		cin >> cont;
		--cont;
		if (cont < 0 || cont >= continents.size())
		{
			throw 0;
		}
	}
	catch (int a)
	{
		cout << "Bad continent number!" << endl;
		ChooseContinent();
	}
}

void AnimalWorld::MealsHerbivores()
{
	for (Herbivore* a : continents[cont]->GetHerbivores())
	{
		a->EatGrass();
	}
}

void AnimalWorld::NutritionCarnivores()
{
	try
	{
		if (continents[cont]->GetHerbivores().empty())
		{
			throw 0;
		}
		for (Carnivore* a : continents[cont]->GetCarnivores())
		{
			int randomVictim = rand() % continents[cont]->GetHerbivores().size();
			a->Eat(continents[cont]->GetHerbivores().at(randomVictim));
		}
	}
	catch (int a)
	{
		cout << "Carnovires can't be fed without herbivores!" << endl;
	}
}

void AnimalWorld::Simulate()
{
	int action;
	do
	{
		cout << "\n=====Current Continent: " << continents[cont]->GetName() << "=====" << endl;
		cout << "1. Feed herbivores" << endl;
		cout << "2. Feed carnivores" << endl;
		cout << "3. Add a herbivore" << endl;
		cout << "4. Add a carnivore" << endl;
		cout << "5. Show animals information" << endl;
		cout << "0. Change continent" << endl;
		cout << "-1. Close application" << endl;
		cout << "Choose action: ";
		cin >> action;
		cout << endl;

		switch (action)
		{
		case 1:
			MealsHerbivores();
			break;
		case 2:
			NutritionCarnivores();
			break;
		case 3:
			continents[cont]->AddHerbivore();
			break;
		case 4:
			continents[cont]->AddCarnivore();
			break;
		case 5:
			continents[cont]->PrintAnimalsInfo();
			break;
		case 0:
			ChooseContinent();
			break;
		default:
			if (action != -1) cout << "Bad action number!" << endl;
			break;
		}

	} while (action != -1);
}
