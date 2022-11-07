/**
 * @file CombatBarracks.h
 * @author Emilee da Cruz
 * @brief Header file for CombatBarracks class which inherits from Barracks class
 * @date 2022-11-06
 */
#ifndef COMBATBARRACKS_H
#define COMBATBARRACKS_H
#include "Barracks.h"
/**
 *@class CombatBarracks
 */
class CombatBarracks : public Barracks
{
public:
	/**
	 *@brief constructs a combatbarracks object
	 */
	CombatBarracks();
	/**
	 *@brief creates a foot unit object
	 *@return footUnit*
	 */
	FootUnit *createFootUnit();
	/**
	 *@brief creates a transportUnit object
	 *@return TransportUnit*
	 */
	TransportUnit *createTransportUnit();
	/**
	 *@brief destroys combatBarracks object
	 */
	virtual ~CombatBarracks();
};
#endif