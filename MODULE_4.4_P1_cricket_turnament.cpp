/*
Assume a class cricketer is declared. Declare a derived class batsman from
cricketer. Data member of batsman. Total runs, Average runs and best
performance. Member functions input data, calculate average runs, Display
data. (Single Inheritance)
*/


#include <iostream>
using namespace std;

class Cricketer
{

public:
    string name;
    int totalRuns, avgRuns, bestPerformance, numMatches;

    void inputData()
    {
        cout << "Enter name: " << endl;
        cin >> name;

        cout << "Enter total runs: " << endl;
        cin >> totalRuns;

        cout << "Enter no. of matches played: " << endl;
        cin >> numMatches;

        cout << "Enter best score: " << endl;
        cin >> bestPerformance;
    }

    void calAvg()
    {
        avgRuns = totalRuns / numMatches;
        cout << "Average: " << avgRuns << endl << endl;
    }
};

class Batsman : public Cricketer
{
public:
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Total runs: " << totalRuns << endl;
        cout << "Best score: " << bestPerformance << endl;
        cout << "Average: " << avgRuns << endl;
    }
};

main()
{
    Batsman Player1;
    Player1.inputData();
    Player1.calAvg();
    Player1.display();
}

