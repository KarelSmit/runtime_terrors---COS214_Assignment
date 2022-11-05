#ifndef WAR_H
#define WAR_H

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
	bool* battleHistory;
};
#endif