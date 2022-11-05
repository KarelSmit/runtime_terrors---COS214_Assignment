#ifndef POSTBATTLE_H
#define POSTBATTLE_H
#include "BattleState.h"

class PostBattle : public BattleState
{
public:
	PostBattle( Battle* );
	~PostBattle();
	void handle();
};

#endif