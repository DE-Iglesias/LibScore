#pragma once
#include <iostream>
#include "Players.h"
using namespace std;
class Score
{
	private:
		Player player[5];
	public:
		Score();
		void AddNew(Player);
		int SendScores(int);
};