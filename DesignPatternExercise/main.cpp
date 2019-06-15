#include <iostream>
#include "Player.h"


int main()
{
	bool firstValid = true;
	int firstChoice;
	while (firstValid)
	{
		std::cout << "What do you want to do?" << std::endl;
		std::cout << "1. Create new player" << std::endl;
		std::cout << "2. Create another player" << std::endl;
		std::cout << "3. Continue with current player " << std::endl;
		std::cout << "4. Exit " << std::endl;

		std::cin >> firstChoice;
		std::cin.ignore(1000, '\n');
		std::cin.clear();

		switch (firstChoice)
		{
		case 1:
			Player::createPlayer();
			break;
		case 2:
			Player::createAnotherPlayer();
			break;
		case 3:
			if (Player::playerCheck() == nullptr)
			{
				break;
			}
			else
			{
				firstValid = false;
			}

			break;
		case 4:
			std::cout << "Game is stoping" << std::endl;
			std::cin.get();
			return 0;
			break;
		default:
			std::cout << "[ERROR:02] Invalid input!" << std::endl;
			break;
			break;
		}
	}


	int secondChoice;
	bool secondValid = true;
	while (secondValid)
	{
		std::cout << "What do you want to do? " << std::endl;
		std::cout << "1. Move." << std::endl;
		std::cout << "2. Jump." << std::endl;
		std::cout << "3. Open inventory." << std::endl;
		std::cout << "4. Exit." << std::endl;
		std::cin >> secondChoice;
		std::cin.ignore(1000, '\n');
		std::cin.clear();
		switch (secondChoice)
		{
		case 1:
			Player::movePlayer();
			break;
		case 2:
			Player::playerJump();
			break;
		case 3:
			Player::openInventory();
			break;
		case 4:
			std::cout << "Game is stoping" << std::endl;
			return 0;
			break;
		default:
			std::cout << "[ERROR:02] Invalid input!" << std::endl;
			break;
		}
	}



	std::cin.get();
	return 0;
}