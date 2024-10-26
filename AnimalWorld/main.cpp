#include<iostream>
#include<vector>
#include"AnimalWorld.h"

using namespace std;

void FillNa(NorthAmerica& na)
{
	Bison* bis1 = new Bison(81.6, 30.2);
	Bison* bis2 = new Bison(51.0, 35.2);
	Bison* bis3 = new Bison(76.3, 20.2);
	Bison* bis4 = new Bison(6.3, 6.2);

	Wolf* wol1 = new Wolf(66.2, "Grey");
	Wolf* wol2 = new Wolf(96.0, "White");
	Wolf* wol3 = new Wolf(76.0, "Grey");
	Wolf* wol4 = new Wolf(65.5, "Grey");
	Wolf* wol5 = new Wolf(35.5, "White");
	Wolf* wol6 = new Wolf(75.5, "Orange");
	Wolf* wol7 = new Wolf(105.5, "Black");

	na.AddAnimal(bis1);
	na.AddAnimal(bis2);
	na.AddAnimal(bis3);
	na.AddAnimal(bis4);
	na.AddAnimal(wol1);
	na.AddAnimal(wol2);
	na.AddAnimal(wol3);
	na.AddAnimal(wol4);
	na.AddAnimal(wol5);
	na.AddAnimal(wol6);
	na.AddAnimal(wol7);
}

int main()
{
	srand(time(0));
	system("color 0E");

	NorthAmerica na(12.1, true, 1);
	Africa af(26.5, true, 0.53);
	Australia aus(23.0, false, false);
	vector<Continent*> conts = { &na, &af, &aus };

	FillNa(na);

	AnimalWorld world(conts);
	world.Simulate();

	return 0;
}