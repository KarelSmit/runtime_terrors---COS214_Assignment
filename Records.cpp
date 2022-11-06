#include "Records.h"

Records::Records(War *w) : war(w)
{
    myfile.open("storage.txt", fstream::app);
    loadTopScores();
}

Records::~Records()
{
    for (auto m : inteldivs)
        delete m;

    myfile.close();
}

void Records::Backup()
{
    this->inteldivs.push_back(this->war->Save());

    checkTopScore();
    writeTopToFile();

    myfile << this->war->Save()->GetName() << endl;
}

void Records::Undo()
{
    if (!this->inteldivs.size())
    {
        return;
    }
    IntelDivision *memento = this->inteldivs.back();
    this->inteldivs.pop_back();
    try
    {
        this->war->Restore(memento);
    }
    catch (...)
    {
        this->Undo();
    }
}

void Records::ShowHistory() const
{
    ifstream file("storage.txt");
    file.seekg(0,ios::end);
    int length = file.tellg();

    if (length == 0)
    {
        cout << "No previous records" << endl;
    }
    else
    {
        ifstream f("storage.txt");

        if (f.is_open())
            cout << f.rdbuf();
    }

    cout << endl;
}

void Records::loadTopScores()
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

void Records::showTopThree()
{
    // cout << "--- TOP SCORES ---" << endl;
    if (top3[0] == NULL && top3[1] == NULL && top3[2] == NULL)
    {
        cout << "You're the first player! No previous scores" << endl;
    }
    for (int i = 0; i < 3; i++)
    {
        if (top3[i] != NULL)
            cout << top3[i]->print() << endl;
    }
    cout << endl;
}

void Records::checkTopScore()
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

void Records::writeTopToFile()
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

void Records::bubbleSort()
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