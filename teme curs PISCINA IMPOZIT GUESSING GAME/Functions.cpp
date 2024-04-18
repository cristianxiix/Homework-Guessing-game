
#include <stdlib.h>
#include <time.h>
#include "Functions.h"


void TaxaPiscina(int& varsta)
{
	
	if (varsta < 7)
		std::cout << "Intrarea din partea casei!" << std::endl;
	else if(varsta >= 7)
		std::cout << "De platit 30 RON" << std::endl;
	else
		std::cout << "INVALID. PROGRAM ENDS AT THIS LINE.";

}
void AdmisExamen(int& puncte)
{
	if (puncte >= 90)
		std::cout << "Admis!!! FELICITARI!!!" << std::endl;
	else if (puncte < 90)
		std::cout << "Ne pare rau. Esti RESPINS." << std::endl;
	else
		std::cout << "INVALID. PROGRAM ENDS AT THIS LINE.";

}
int ReturneazaImpozit()
{
	double salariu = 0;
	double impozit = 0;
	std::cout << "Introduceti venitul dumneavoastra anual" << std::endl;
	std::cin >> salariu;
	if (salariu <= 15000)
	{
		impozit = salariu * 10 / 100;
		std::cout << "Impozitul este " << impozit << std::endl;
		return impozit;
	}
	else if (salariu > 15000 && salariu <= 30000)
	{
		impozit = salariu * 15 / 100;
		std::cout << "Impozitul este " << impozit << std::endl;
		return impozit;
	}
	else
	{
		impozit = salariu * 20 / 100;
		std::cout << "Impozitul este " << impozit << std::endl;
		return impozit;
	}
}
void GuessingGame()
  {
	bool isGameOver = false;
	int usersGuess = 0;
	int randomInt = 0;
	std::string start = "Please enter your guess\n";
	std::string tL = "Too low! Guess again!\n";
	std::string tH = "Too high! Guess again!\n";
	srand(time(NULL));
	randomInt = rand() % 10 +1;
	std::cout << start << std::endl;
	std::cin >> usersGuess;


	if(!(isGameOver))
		jump:
	if (usersGuess < randomInt)
	{
		std::cout << tL;
		std::cin >> usersGuess;
		goto jump;
	}
	else if(usersGuess > randomInt)
	{
		std::cout << tH;
		std::cin >> usersGuess;
	}
	else
	{
		std::cout << "Guess was perfect. YOU WON!!!";
		isGameOver = true;
	}



}