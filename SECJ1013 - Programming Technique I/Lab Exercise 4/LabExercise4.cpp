/*
Name        : NAJLA AUNI BINTI MOHAMAD ASRI
Matric No   : A25CS0117
Date        : 9 JANUARY 2026
*/

#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

void readFile(string filename, double F[], int &n);
void computeC(const double F[], double C[], int n);
double average(const double C[], int n);
char grade(double c);
void writeFile(string filename, const double F[], const double C[], int n);

int main()
{
    const int SIZE = 100;
    double F[SIZE];
    double C[SIZE];
    int n = 0;

    readFile("input.txt", F, n);
    computeC(F, C, n);

    double avgC = average(C, n);

    int high = 0, medium = 0, low = 0;

    for (int i = 0; i < n; i++)
    {
        char g = grade(C[i]);

        if (g == 'H')
            high++;
        else if (g == 'M')
            medium++;
        else if (g == 'L')
            low++;
    }

    cout << fixed << setprecision(1);
    cout << "Average of the temperature in Celcius: " << avgC << endl;
    cout << "Number of high temperature: " << high << endl;
    cout << "Number of medium temperature: " << medium << endl;
    cout << "Number of low temperature: " << low << endl;

    writeFile("output.txt", F, C, n);

    return 0;
}

void readFile(string filename, double F[], int &n)
{
    ifstream infile;
    infile.open(filename);

    n = 0;
    while (infile >> F[n])
    {
        n++;
    }

    infile.close();
}

void computeC(const double F[], double C[], int n)
{
    for (int i = 0; i < n; i++)
    {
        C[i] = (5.0 / 9.0) * (F[i] - 32);
    }
}

double average(const double C[], int n)
{
    double sum = 0.0;

    for (int i = 0; i < n; i++)
    {
        sum += C[i];
    }

    return sum / n;
}

char grade(double c)
{
    if (c >= 35)
        return 'H';
    else if (c >= 20)
        return 'M';
    else
        return 'L';
}

void writeFile(string filename, const double F[], const double C[], int n)
{
    ofstream outfile;
    outfile.open(filename);

    outfile << left << setw(16) << "C(Celcius)" << setw(16) << "F(Farenheit)" << setw(16) << "Description" << endl;
    outfile << left << setw(16) << "==========" << setw(16) << "============" << setw(16) << "===========" << endl;
    outfile << fixed << setprecision(2);

    for (int i = 0; i < n; i++)
    {
        outfile << right << setw(7) << C[i];
        outfile << right << setw(17) << F[i] << setw(14) << grade(C[i]) << endl;
    }

    outfile.close();
}
