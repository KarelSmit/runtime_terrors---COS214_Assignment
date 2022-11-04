#ifndef WAR_H
#define WAR_H
#include "Country.h"

class War
{
public:
	static War* startWar();
	void simulate();
protected:
	War();
	~War();
private:
	static War *warInstance;
	bool winner;
	int score;
	Country* sideA;
	Country* sideB;
	int* battleHistory;
};
#endif