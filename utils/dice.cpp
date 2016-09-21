#include "dice.h"

namespace Dice{

	int diceD6(){
	srand((unsigned)time(NULL));
	int dice = (rand() % 6) +1;
	return dice;
	}
	
	int diceD8(){
	srand((unsigned)time(NULL));
	int dice = (rand() % 8) +1;
	return dice;
	}
	
	int diceD10(){
	srand((unsigned)time(NULL));
	int dice = (rand() % 10) +1;
	return dice;
	}
	
	int diceD20(){
	srand((unsigned)time(NULL));
	int dice = (rand() % 20) +1;
	return dice;
	}

}