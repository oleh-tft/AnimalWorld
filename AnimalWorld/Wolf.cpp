#include "Wolf.h"

Wolf::Wolf(double p, string color) : Carnivore(p)
{
	furColor = color;
}

string Wolf::GetFurColor()
{
	return furColor;
}

string Wolf::GetName()
{
	return "Wolf";
}
