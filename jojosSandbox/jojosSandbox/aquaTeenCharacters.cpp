#include <iomanip>
#include <iostream>
#include <string>
#include "aquaTeenCharacters.h"

aquaTeenCharacters::aquaTeenCharacters(std::string n, std::string r, bool detective)
{
	name = n;
	race = r;
	isDetective = detective;
}

void aquaTeenCharacters::setName(std::string n)
{
	name = n;
}

void aquaTeenCharacters::setRace(std::string r)
{
	race = r;
}

void aquaTeenCharacters::setDetective(bool detective)
{
	isDetective = detective;
}

std::string aquaTeenCharacters::getName()
{
	return name;
}

std::string aquaTeenCharacters::getRace()
{
	return race;
}

bool aquaTeenCharacters::getDetective()
{
	return isDetective;
}
