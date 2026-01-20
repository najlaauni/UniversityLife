/*
Name                : FARAH ADILAH BINTI AZMAN 
Matric No           : A25CS0217
Partner             : NAJLA AUNI BINTI MOHAMAD ASRI 
Partner Matric No   : A25CS0117
Date                : 12 JANUARY 2026
Set Number          : Set 2 
*/

#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

const int SIZE = 100;

void getInput(string name[], int intake[], int enrolment[], int output[], int &n)
{
    ifstream inFile("input.txt");

    if (!inFile)
    {
        cout << "While opening a file an error is encountered" << endl;
        exit(1);
    }

    n = 0;

    while (inFile >> name[n] >> intake[n] >> enrolment[n] >> output[n])
        n++;

    inFile.close();
}

void calTotal (int intake[], int enrolment[], int output[], int n, int &totalIntake, int &totalEnrolment, int &totalOutput)
{
    totalIntake = totalEnrolment = totalOutput = 0;

    for (int i = 0; i < n; i++)
    {
        totalIntake += intake[i];
        totalEnrolment += enrolment[i];
        totalOutput += output[i];
    }
}

void getLowest (string name[], int intake[], int enrolment[], int output[], int n, 
                int &lowIntake, int &lowEnrolment, int &lowOutput, 
                string &lowIntakeName, string &lowEnrolmentName, string &lowOutputName)
{
    lowIntake = intake[0];
    lowEnrolment = enrolment[0];
    lowOutput = output[0];
    lowIntakeName = lowEnrolmentName = lowOutputName = name[0];

    for (int i = 0; i < n; i++)
    {
        if (intake[i] < lowIntake)
        {
            lowIntake = intake[i];
            lowIntakeName = name[i];
        }
        if (enrolment[i] < lowEnrolment)
        {
            lowEnrolment = enrolment[i];
            lowEnrolmentName = name[i];
        }
        if (output[i] < lowOutput)
        {
            lowOutput = output [i]; 
            lowOutputName = name[i];
        }     
    }
}

void getHighest (string name[], int intake[], int enrolment[], int output[], int n, 
                int &highIntake, int &highEnrolment, int &highOutput, 
                string &highIntakeName, string &highEnrolmentName, string &highOutputName)
{
    highIntake = intake[0];
    highEnrolment = enrolment[0];
    highOutput = output[0];
    highIntakeName = highEnrolmentName = highOutputName = name[0];
    
    for (int i = 0; i < n; i++)
    {
        if (intake[i] > highIntake)
        {
            highIntake = intake[i];
            highIntakeName = name[i];
        }
        if (enrolment[i] > highEnrolment)
        {
            highEnrolment = enrolment[i];
            highEnrolmentName = name[i];
        }
        if (output[i] > highOutput)
        {
            highOutput = output [i]; 
            highOutputName = name[i];
        }     
    }
}

int main ()
{
    string name [SIZE];
    int intake[SIZE], enrolment[SIZE], output[SIZE], n;

    getInput(name, intake, enrolment, output, n);

    ofstream outputFile("output.txt");

    outputFile << "         NUMBER OF STUDENTS' INTAKE, ENROLMENT AND OUTPUT" << endl; 
    outputFile << "               IN PUBLIC UNIVERSITIES (2015)" << endl;
    outputFile << "\n-------------------------------------------------------------------" << endl;
    outputFile << "UNIVERSITY           INTAKE          ENROLMENT           OUTPUT" << endl;
    outputFile << "-------------------------------------------------------------------" << endl;

    for (int i = 0; i < n; i++)
    {
        outputFile << left << setw(10) << name[i];
        outputFile << right << setw(17) << intake[i] << setw(19) << enrolment[i] << setw(17) << output[i] << endl;
    }

    int totalIntake, totalEnrolment, totalOutput;
    calTotal (intake, enrolment, output, n, totalIntake, totalEnrolment, totalOutput);

    double averageIntake = static_cast<double> (totalIntake) / n;
    double averageEnrolment = static_cast<double> (totalEnrolment) / n;
    double averageOutput = static_cast<double> (totalOutput) / n;

    outputFile << "-------------------------------------------------------------------" << endl;
    outputFile << left << setw(10) << "TOTAL";
    outputFile << right << setw(17) << totalIntake << setw(19) << totalEnrolment << setw(17) << totalOutput << endl;
    outputFile << left << setw(10) << "AVERAGE";
    outputFile << fixed << setprecision(2) << right << setw(17) << averageIntake << setw(19) << averageEnrolment << setw(17) << averageOutput << endl;
    outputFile << "-------------------------------------------------------------------" << endl;

    int lowIntake, lowEnrolment, lowOutput;
    string lowIntakeName, lowEnrolmentName, lowOutputName;
    getLowest (name, intake, enrolment, output, n, lowIntake, lowEnrolment, lowOutput, 
                lowIntakeName, lowEnrolmentName, lowOutputName);

    outputFile << "\nTHE LOWEST NUMBER OF STUDENTS' INTAKE        = " << lowIntake << "   (" << lowIntakeName << ")" << endl;
    outputFile << "THE LOWEST NUMBER OF STUDENTS' ENROLMENT     = " << lowEnrolment << "   (" << lowEnrolmentName << ")" << endl;
    outputFile << "THE LOWEST NUMBER OF STUDENTS' OUTPUT        = " << lowOutput << "   (" << lowOutputName << ")" << endl;

    int highIntake, highEnrolment, highOutput;
    string highIntakeName, highEnrolmentName, highOutputName;
    getHighest (name, intake, enrolment, output, n, highIntake, highEnrolment, highOutput, 
                highIntakeName, highEnrolmentName, highOutputName);

    outputFile << "\nTHE HIGHEST NUMBER OF STUDENTS' INTAKE       = " << highIntake << "   (" << highIntakeName << ")" << endl;
    outputFile << "THE HIGHEST NUMBER OF STUDENTS' ENROLMENT    = " << highEnrolment << "   (" << highEnrolmentName << ")" << endl;
    outputFile << "THE HIGHEST NUMBER OF STUDENTS' OUTPUT       = " << highOutput << "   (" << highOutputName << ")" << endl;


    outputFile << "\nTHE RANGE OF NUMBER OF STUDENTS' INTAKE      = " << highIntake - lowIntake << endl;
    outputFile << "THE RANGE OF NUMBER OF STUDENTS' ENROLMENT   = " << highEnrolment - lowEnrolment << endl;
    outputFile << "THE RANGE OF NUMBER OF STUDENTS' OUTPUT      = " << highOutput - lowOutput << endl;
    outputFile << "\n-------------------------------------------------------------------" << endl;

    outputFile.close();
    return 0;
}
