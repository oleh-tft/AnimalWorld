#pragma once
#include<iostream>
using namespace std;

struct Animal
{
	virtual string GetName() = 0;
	virtual void PrintInfo() = 0;
};