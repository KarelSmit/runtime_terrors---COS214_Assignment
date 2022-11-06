/**
 * @file Records.h
 * @author your name (you@domain.com)
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

class Records
{
private:
    vector<IntelDivision *> inteldivs;
    War *war;
    ofstream myfile;
    ofstream topscore;
    array<IntelDivision *, 3> top3;

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
     * @brief 
     * 
     */
    void Backup();
    void Undo();
    void ShowHistory() const;
    void loadTopScores();
    void showTopThree();
    void checkTopScore();
    void writeTopToFile();
    void bubbleSort();
};
#endif