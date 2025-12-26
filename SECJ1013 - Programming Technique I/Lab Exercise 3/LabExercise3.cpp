// NAME : NAJLA AUNI BINTI MOHAMAD ASRI
// MATRICS NUMBER : A25CS0117
// DATE : 19/12/2025

#include <iostream>
using namespace std;

void dispStatus(int);
void getInput(int&, int&, int&, int&);
void dispOutput(int);
double calcAverage(int, int);

int main()
{
    string state, highestState;
    int totalCase, newCase, totalDeath, totalRecover, activeCase;
    int totalActive = 0, numState = 0, highest = 0;
    char choice;

    do
    {
        cout << "<<<<<<<<<<<<<< DATA >>>>>>>>>>>>>" << endl;
        cout << "State name : ";
        getline(cin,state);

        getInput(totalCase, newCase, totalDeath, totalRecover);

        activeCase = totalCase + newCase - totalDeath - totalRecover;

        cout << endl << "<<<<<<<<<<<<< SUMMARY >>>>>>>>>>>" << endl;
        dispOutput(activeCase);
        dispStatus(activeCase);

        totalActive += activeCase;
        numState++;

        if (activeCase > highest)
        {
            highest = activeCase;
            highestState = state;
        }

        cout << "Press <ENTER> to continue...";
        cin.get(choice);
        cout << endl;

    } while (choice == '\n');

    cout << endl << "<<<<<<<<< ACTIVE CASES >>>>>>>>>>" << endl;
    cout << "Total : " << totalActive << endl;
    cout << "Highest: " << highest << " (" << highestState << ")" << endl;
    cout << "Average for " << numState << " states: " << calcAverage(numState, totalActive) << endl;

    return 0;
}       

void dispStatus(int numcase){
    if (numcase > 40) 
        cout << "Status : Red zone" << endl;
    else if (numcase > 20)
        cout << "Status : Orange zone" << endl;
    else if (numcase > 0)
        cout << "Status : Yellow zone" << endl;
    else
        cout << "Status : Green zone" << endl;

}

void getInput(int& totalcase, int& newcase, int& totaldeath, int& totalrecover) {
    cout << "Total cases: ";
    cin >> totalcase;
    
    cout << "New cases: ";
    cin >> newcase;

    cout << "Total death: ";
    cin >> totaldeath;

    cout << "Total recovered: ";
    cin >> totalrecover;

    cin.ignore(); 
}

void dispOutput(int activecase) {
    cout << "Active cases: " << activecase << endl;

}

double calcAverage(int state, int activecase) {
    int avg = activecase / state;
    return avg;
}

