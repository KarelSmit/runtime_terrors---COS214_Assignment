/**
 * @file IntelDivision.h
 * @author Natalie Walsh
 * @brief Memento class
 * @version 0.1
 * @date 2022-11-06
 * 
 * 
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
 * @tparam  
 */

class IntelDivision
{
private:
    User *user;
    string date_;

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
	 * @return String
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