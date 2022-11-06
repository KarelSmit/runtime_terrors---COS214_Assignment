/**
 * @file User.h
 * @author Natalie Walsh
 * @brief The user details
 * @version 0.1
 * @date 2022-11-06
 */
 
#ifndef USER_H
#define USER_H
#include <iostream>
using namespace std;

/**
 * @class User
 * 
 * @tparam None
 */

class User 
{
private:
    string name;
    int score;

public:
    /**
    * @brief Construct a new User object
    * 
    */
    User(string n, int s);

    /**
	 * @brief Destroy the User object
	 * 
	 */
    User(User &user);

    /**
	 * @brief Return the name attribute
	 * 
     * @return string
	 */
    string getUserName();

    /**
	 * @brief Return the score attribute
	 * 
     * @return int
	 */
    int getUserScore();

    /**
     * @brief Get the User Details for saving to txt
     * 
     * @return string 
     */
    string getUserDetails();

    /**
	 * @brief Setter user score
	 * 
     * @return nothing
	 */
    void setUserScore(int s);
};
#endif