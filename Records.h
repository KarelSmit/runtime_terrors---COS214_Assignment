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
    Records(War *w) : war(w)
    {
        myfile.open("storage.txt", fstream::app);
        loadTopScores();
    }

    ~Records()
    {
        for (auto m : inteldivs)
            delete m;

        myfile.close();
    }

    void Backup()
    {
        cout << "\nCaretaker: Saving Originator's state...\n";
        this->inteldivs.push_back(this->war->Save());

        checkTopScore();
        writeTopToFile();

        //myfile << this->war->Save()->GetName() << endl;
    }

    void Undo()
    {
        if (!this->inteldivs.size())
        {
            return;
        }
        IntelDivision *memento = this->inteldivs.back();
        this->inteldivs.pop_back();
        cout << "Caretaker: Restoring state to: " << memento->GetName() << "\n";
        try
        {
            this->war->Restore(memento);
        }
        catch (...)
        {
            this->Undo();
        }
    }

    void ShowHistory() const
    {
        cout << "Caretaker: Here's the list of mementos:\n";
        ifstream f("storage.txt");

        if (f.is_open())
            cout << f.rdbuf();
    }

    void loadTopScores()
    {
        ifstream dafile;
        string line;
        int pos;
        string name;
        dafile.open("topscores.txt", fstream::app);

        for (int i = 0; i < 3; i++)
        {
            if (getline(dafile, line))
            {
                pos = line.find(";");
                name = line.substr(0, pos);
                line.erase(0, pos + 1);

                stringstream x(line);
                int number = 0;
                x >> number;

                User *u = new User(name, number);

                top3[i] = new IntelDivision(u);
            }
        }
        dafile.close();
    }

    void showTopThree()
    {
        cout << "--- TOP SCORES ---" << endl;
        if (top3[0] == NULL && top3[1] == NULL && top3[2] == NULL)
        {
            cout << "You're the first player! No previous scores" << endl;
        }
        for (int i = 0; i < 3; i++)
        {
            if (top3[i] != NULL)
                cout << top3[i]->print() << endl;
        }
    }

    void checkTopScore()
    {
        if (top3[0] == NULL || top3[1] == NULL || top3[2] == NULL)
        {
            for (int i = 0; i < 3; i++)
            {
                if (top3[i] == NULL)
                {
                    top3[i] = war->Save();
                    break;
                }
            }
        }
        else
        {
            if (top3[0]->getUser()->getUserScore() < war->Save()->getUser()->getUserScore())
            {
                IntelDivision *temp = top3[0];
                top3[0] = war->Save();

                IntelDivision *temp1 = top3[1];
                top3[1] = temp;

                IntelDivision *temp2 = top3[2];
                delete temp2;

                top3[2] = temp1;
            }
            else if (top3[1]->getUser()->getUserScore() < war->Save()->getUser()->getUserScore())
            {
                IntelDivision *temp = top3[1];
                top3[1] = war->Save();

                IntelDivision *temp1 = top3[2];
                delete temp1;
                top3[2] = temp;
            }
            else if (top3[2]->getUser()->getUserScore() < war->Save()->getUser()->getUserScore())
            {
                IntelDivision *temp = top3[2];
                delete temp;
                top3[2] = war->Save();
            }
        }
    }

    void writeTopToFile()
    {
        //bubbleSort();
        ofstream clearfile;
        clearfile.open("topscores.txt");
        topscore.open("topscores.txt", fstream::app);
        for (int i = 0; i < 3; i++)
        {
            if (top3[i] != NULL)
                topscore << top3[i]->getDetails() << endl;
        }
        topscore.close();
    }

    void bubbleSort()
    {
        int n = 3;
        for (int i = 0; i < n - 1; i++)
            for (int j = 0; j < n - i - 1; j++)
                if (top3[j]->getUser()->getUserScore() < top3[j + 1]->getUser()->getUserScore())
                {
                    IntelDivision *temp = top3[j];
                    top3[j] = top3[j + 1];
                    top3[j + 1] = temp;
                }
    }
};
#endif