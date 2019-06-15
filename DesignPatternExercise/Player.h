#ifndef PLAYER_H
#define PLAYER_H
#include <string>
#include <iostream>

class Player
{
public:
	static std::string getPlayerName();
	static Player* createPlayer();
	static Player* createAnotherPlayer();
	static Player* playerCheck();
	static void movePlayer();
	static void playerJump();
	static void openInventory();


	Player();
	~Player();

private:
	static Player* instance;
};

#endif // !PLAYER_H