/**
 * @file IntelDivision.h
 * @author Natalie Walsh
 * @brief Memento participant of Memento design pattern
 * @version 0.1
 * @date 2022-11-06
 */

#ifndef INTELDIVISION_H
#define INTELDIVISION_H
#include "User.h"
#include <string>
#include <iostream>
using namespace std;

/**
 * @class IntelDivision
 *
 */

class IntelDivision
{
private:
	User *user;	  /*!< A snapshot of the user object */
	string date_; /*!< Holds the date and time that the snapshot was generated */

public:
	/**
	 * @brief Constructor of the IntelDivision object
	 *
	 */
	IntelDivision(User *u);

	/**
	 * @brief Return the user attribute
	 *
	 * @return User
	 */
	User *getUser();

	/**
	 * @brief Return the user details and current date
	 *
	 * @return string
	 */
	string GetName() const;

	/**
	 * @brief To be saved to textfile
	 *
	 * @return string
	 */
	string getDetails();

	/**
	 * @brief Provide feedback to user
	 *
	 * @return string
	 */
	string print();

	/**
	 * @brief Return the current date and time
	 *
	 * @return string
	 */
	string date() const;
};
#endif