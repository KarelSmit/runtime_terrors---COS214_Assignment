#ifndef WAR_H
#define WAR_H
#include "Country.h"

class War
{
public:
	War* startWar();
protected:
	War();
	~War();
private:
	War *warInstance;
	bool winner;
	int score;
	Country* sideA;
	Country* sideB;
	int* battleHistory;
};
#endif