#pragma once
#include <iostream>
using namespace std;
class Player
{
	private:
		string _nombre;
		int _score;
	public:
		Player();
		Player(string, int);
		string getNombre();
		int getScore();
};