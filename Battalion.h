#ifndef _BATTALION_H
#define _BATTALION_H

class Battalion
{

public:
	Battalion();
	~Battalion();
	virtual int getHP() = 0;
	virtual int getDmg() = 0;
	virtual int getRP() = 0;
	virtual bool takeDamage(int) = 0;
	virtual void heal(int) = 0;
	Battalion *next;
};
#endif
