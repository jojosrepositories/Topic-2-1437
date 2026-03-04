// Jordan Jessie
// A00496130
// 2/20/26
// Topic 2 - 1437

# pragma once
#include <string>
class aquaTeenCharacters
{
private:
	std::string name;
	std::string race;
	bool isDetective;

public:
	aquaTeenCharacters(std::string n, std::string r, bool detective);

	void setName(std::string n);
	void setRace(std::string r);
	void setDetective(bool detective);

	std::string getName();
	std::string getRace();
	bool getDetective();
};

