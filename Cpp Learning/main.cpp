#include "Random.h" // defines Random::mt, Random::get(), and Random::generate()
#include <cstddef> // for std::size_t
#include <iostream>

void gamePlay (int numberToGuess)
{
	for (int i{ 1 }; i <= 7; ++i)
	{
		int x{};
		std::cout << "Guess #" << i << ": ";
		std::cin >> x;
		std::cout << x << '\n';

		if (i < 7)
		{
			if (x > numberToGuess)
				std::cout << "Your guess is too high.";
			else if (x < numberToGuess)
				std::cout << "Your guess is too low.";
			else if (x == numberToGuess)
			{
				std::cout << "Correct! You win!\n";
				break;
			}
		}
		
		else 
		{
			if (x > numberToGuess)
			{
				std::cout << "Your guess is too high.";
				std::cout << "Sorry, you lose. The correct number was " << numberToGuess << ".\n";
				break;
			}
			else if (x < numberToGuess)
			{
				std::cout << "Your guess is too low.\n";
				std::cout << "Sorry, you lose. The correct number was " << numberToGuess << ".\n";
				break;
			}
			else if (x == numberToGuess)
			{
				std::cout << "Correct! You win!\n";
				break;
			}
		}
	}	

}

int main()
{
	restart:
	
	std::cout << "Let's play a game. Enter the lowest number your willing to guess: ";
	int min{};
	std::cin >> min;
	
	std::cout << "Enter the highest number your willing to guess: ";
	int max{};
	std::cin >> max;

	int numberToGuess{ Random::get(min, max) };
	
	std::cout << "I'm thinking of a number between " << min << " and " << max << ". You have 7 tries to guess what it is.\n";

	gamePlay(numberToGuess);

	char playAgain{};
	std::cout << "Would you like to play again (y/n)?";
	std::cin >> playAgain;
	if (playAgain == 'y')
		goto restart;
	if (playAgain == 'n')
		return 0;
		
}