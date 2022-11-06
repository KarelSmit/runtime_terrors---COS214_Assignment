/**
 * @file Records.h
 * @author Natalie Walsh
 * @brief 
 * @version 0.1
 * @date 2022-11-06
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef RECORDS_H
#define RECORDS_H
#include "IntelDivision.h"
#include "War.h"
#include <iostream>
#include <vector>
#include <array>
#include <fstream>
#include <ostream>
#include <sstream>
#include <string>
using namespace std;

/**
 * @brief Caretaker
 * 
 */

class Records
{
private:
    vector<IntelDivision *> inteldivs; /*!< Holds all the previously backed up versions */
    War *war; /*!< Acts as the originator */
    ofstream myfile; /*!< File that holds are records of games */
    ofstream topscore; /*!< Ofstream object for file with top3 scores */
    array<IntelDivision *, 3> top3; /*!< An array holding the top 3 scores */

public:
    /**
    * @brief Construct a new Records object
    * 
    * @param w 
    */
    Records(War *w);

    /**
     * @brief Destroy the Records object
     * 
     */
    ~Records();

    /**
     * @brief Used when a save is done on the simulation
     * 
     */
    void Backup();

    /**
     * @brief Used to go back to previous snapshot of war simulation
     * 
     */
    void Undo();

    /**
     * @brief displays all previous games played by users, their score and the date and time it was saved
     * 
     */
    void ShowHistory() const;

    /**
     * @brief Loads the top 3 scores from the topscores.txt file to the top3 array
     * 
     */
    void loadTopScores();

    /**
     * @brief Displays the top 3 scores
     * 
     */
    void showTopThree();

    /**
     * @brief Determines if a user score is high enough to beat any of the top 3 scores
     * 
     */
    void checkTopScore();

    /**
     * @brief Saves the top 3 scores to the topscore.txt file
     * 
     */
    void writeTopToFile();

    /**
     * @brief Sorts the top 3 scores from highest to lowest score
     * 
     */
    void bubbleSort();
};
#endif