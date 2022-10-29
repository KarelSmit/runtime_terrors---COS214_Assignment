#include "War.h"

War* War::startWar(){
	if ( warInstance == 0 ){
		warInstance = new War();
	}
	return warInstance;
}

War::War(){
	warInstance = 0;
	winner = false;
	score = 0;
	sideA = new Country();
	sideB = new Country();
	battleHistory = new int[5];
}

War::~War(){
	delete warInstance;
	delete sideA;
	delete sideB;
	delete battleHistory;
}

