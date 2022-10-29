#ifndef ARMY_H
#define ARMY_H
#include "General.h"

class Army
{
public:
	Army();
	Army( std::string );
	~Army();
private:
	//Battalion* head;
	General* leader;
};
#endif