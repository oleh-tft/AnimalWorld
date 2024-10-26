#include "Kangaroo.h"

Kangaroo::Kangaroo(double w, double j) : Herbivore(w)
{
	jumpHeight = j;
}

double Kangaroo::GetJumpHeight()
{
	return jumpHeight;
}

string Kangaroo::GetName()
{
	return "Kangaroo";
}
