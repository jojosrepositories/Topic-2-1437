#include <iostream>
#include "aquaTeenCharacters.h"
#include <string>

int main()
{
	// 3 examples of class
	aquaTeenCharacters aquaTeenCharacter1("masterShake", "milkshake", true);
	aquaTeenCharacters aquaTeenCharacter2("fryLoc", "french-fry", false);
	aquaTeenCharacters aquaTeenCharacter3("meatWad", "ground meat", false);

	// out-puting using setters & getters
	// uses boolaplha for an easier read t/f > 1/2
	std::cout << std::boolalpha;
	std::cout << aquaTeenCharacter1.getName() << std::endl;
	std::cout << aquaTeenCharacter1.getRace() << std::endl;
	std::cout << "are they a detective?" << " " << aquaTeenCharacter1.getDetective() << std::endl;
	std::cout << " " << std::endl;

	std::cout << std::boolalpha;
	std::cout << aquaTeenCharacter2.getName() << std::endl;
	std::cout << aquaTeenCharacter2.getRace() << std::endl;
	std::cout << "are they a detective?" << " " << aquaTeenCharacter2.getDetective() << std::endl;
	std::cout << " " << std::endl;

	std::cout << std::boolalpha;
	std::cout << aquaTeenCharacter3.getName() << std::endl;
	std::cout << aquaTeenCharacter3.getRace() << std::endl;
	std::cout << "are they a detective?" << " " << aquaTeenCharacter3.getDetective() << std::endl;
	std::cout << " " << std::endl;

}
