#ifndef WAR_H
#define WAR_H

class War
{
public:
	static War& startWar();
protected:
	War();
	~War();
private:
	War *warInstance;
};
#endif