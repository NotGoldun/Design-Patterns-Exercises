#include "Player.h"
Player* Player::instance = NULL;


std::string Player::getPlayerName()
{
	return "Goldun";
}

Player* Player::createPlayer()
{

	if (instance == nullptr)
	{
		instance = new Player();
		std::cout << "Player successfully created! " << std::endl;

		return instance;
	}
	else
	{
		std::cout << "[ERROR:01] The player has been created already!" << std::endl;
		std::cout << "Do you want to overwrite current player? (Y/N)" << std::endl;
		std::string choice;
		std::cin >> choice;
		std::cin.ignore(1000, '\n');
		std::cin.clear();
		if (choice == "Y" || choice == "y")
		{
			instance = new Player();
			std::cout << "Player successfully created! " << std::endl;

			return instance;
		}
		else if (choice == "N" || choice == "n")
		{
			return instance;
		}
		return instance;
	}
	return nullptr;
}

Player * Player::createAnotherPlayer()
{
	if (instance == nullptr)
	{
		instance = new Player();
		std::cout << "Player successfully created! " << std::endl;
		return instance;
	}
	else
	{
		std::cout << "[ERROR:01] The player has been created already! [MAX 1 PLAYER]" << std::endl;
		return instance;
	}
	return nullptr;
}

Player * Player::playerCheck()
{
	if (instance == nullptr)
	{
		std::cout << "[ERROR:03]You haven't created a player yet " << std::endl;
		return nullptr;
	}
	return instance;
}



void Player::movePlayer()
{

}

void Player::playerJump()
{
}

void Player::openInventory()
{
}



Player::Player()
{
}


Player::~Player()
{
}
