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
    Records(War *w);
    ~Records();
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