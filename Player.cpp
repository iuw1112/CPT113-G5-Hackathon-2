#include <iostream>
#include<string>
#include "Player.h"

using namespace std;

Player::Player()
{
	//set initial state
	name = "";
	countLives = 3;
	countHappy = 0;
}
Player::~Player()
{
	name = "";
	countLives = 0;
	countHappy = 0;
}
void Player::setName(string n)
{
	name = n;
}
string Player::getName()
{
	return name;
}
void Player::deleteLives(int num)
{
	//lose lives
	countLives = countLives - num;
}

int Player::getLives()
{
	return countLives;
}

void Player::addHappiness(int num)
{
	countHappy = countHappy + num;
}
int Player::getHappiness()
{
	return countHappiness;
}

// call if player lives less than and equal to 0
void Player::checkLives()
{
	if (countLives > 0)
		return;
	else if (countLives <= 0)
	{
		cout << "Unfortunately, you have exhausted all of your lives." << endl;
		cout << "Your journey ends here...Game Over. "<<endl;
		game.quitGame();
	}
}
