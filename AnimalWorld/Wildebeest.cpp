#include "Wildebeest.h"

Wildebeest::Wildebeest(double w, double lh, double rh) :Herbivore(w)
{
	leftHornLength = lh;
	rightHornLength = rh;
}

Wildebeest::Wildebeest(double w, double horns) :Herbivore(w)
{
	leftHornLength = rightHornLength = horns;
}

double Wildebeest::GetLeftHornLength()
{
	return leftHornLength;
}

double Wildebeest::GetRightHornLength()
{
	return rightHornLength;
}

string Wildebeest::GetName()
{
	return "Wildebeest";
}

void Wildebeest::SetAlive(bool l)
{
	if (!l)
	{
		leftHornLength = rightHornLength = 0;
	}
	Herbivore::SetAlive(l);
}
