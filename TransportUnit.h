#ifndef TRANSPORTUNIT_H
#define TRANSPORTUNIT_H
#include <string>
class TransportUnit
{
public:
	TransportUnit( int );
	virtual ~TransportUnit();
	int getHP();
	string getName();

private:
	int HP;
	string name;
	Vehicle* transport;
};
#endif
