/*
Name                : FARAH ADILAH BINTI AZMAN
Matric No           : A25CS0217
Partner             : NAJLA AUNI BINTI MOHAMAD ASRI
Partner Matric No   : A25CS0117
Date                : 29 DECEMBER 2025
Set Number          : SET 2 (LOAN CALCULATOR)
*/

#include <iostream>
#include <cctype>
#include <iomanip>
#include <cmath> 
using namespace std;

double loanAmount (double carPrice, double downPayment);
double monthlyPayment (double loanAmount, int loanPeriod, double interestRate);

int main ()
{
    int model, variants, region, repayPeriod;
    double interestRate, carPrice, downPayment;
    char answer = 'Y';

    while (answer != 'N')
    {
        cout << "Proton Car Loan Calculator" << endl << endl;
        cout << "Model [1-X50, 2-Exora, 3-Persona]: ";
        cin >> model;

        while (model < 1 || model > 3)
        {
            cout << "Invalid option. Please enter 1, 2, or 3." << endl;
            cout << "Model [1-X50, 2-Exora, 3-Persona]: ";
            cin >> model;
        }

        cout << "Variants [1-1.6L Standard CVT, 2-1.6L Premium CVT]: ";
        cin >> variants;

        while (variants < 1 || variants > 2)
        {
            cout << "Invalid option. Please enter 1 or 2." << endl;
            cout << "Variants [1-1.6L Standard CVT, 2-1.6L Premium CVT]: ";
            cin >> variants;
        }

        cout << "Region [1-Peninsular Malaysia, 2-East Malaysia]: ";
        cin >> region;

        while (region < 1 || region > 2)
        {
            cout << "Invalid option. Please enter 1 or 2." << endl;
            cout << "Region [1-Peninsular Malaysia, 2-East Malaysia]: ";
            cin >> region;
        }

        cout << "\nCar Info" << endl;
        switch (model)
        {
            case 1: cout << "Model: X50" << endl; break;
            case 2: cout << "Model: Exora" << endl; break;
            case 3: cout << "Model: Persona" << endl; break;
            default: cout << "Invalid option" << endl; break;
        }

        switch (variants)
        {
            case 1: cout << "Variant: 1.6L Standard CVT" << endl; carPrice = 50000.00; break;
            case 2: cout << "Variant: 1.6L Premium CVT" << endl; carPrice = 54600.00; break;
            default: cout << "Invalid option" << endl; 
        }

        switch (region)
        {
            case 1: cout << "Region: Peninsular Malaysia" << endl; break;
            case 2: cout << "Region: East Malaysia" << endl; break;
            default: cout << "Invalid option" << endl; 
        }

        cout << "Paint Type: Metallic" << endl;
        cout << fixed << setprecision(2);
        cout << "Price (MYR): " << carPrice << endl << endl;

        cout << "Down Payment (MYR): ";
        cin >> downPayment;

        while  (downPayment < 0 || downPayment > carPrice)
        {
            cout << "Please enter value between 0 and " << carPrice << "." << endl;
            cout << "Down Payment (MYR): ";
            cin >> downPayment;
        }

        cout << "Interest Rate (%): ";
        cin >> interestRate;

        while (interestRate <= 0)
        {
            cout << "A valid interest rate must be greater than 0%." << endl;
            cout << "Interest Rate (%): ";
            cin >> interestRate;
        }

        cout << "Repayment period (in years): ";
        cin >> repayPeriod;

        while (repayPeriod <= 0)
        {
            cout << "A valid repayment period must be more than 1 year." << endl;
            cout << "Repayment period (in years): ";
            cin >> repayPeriod;
        }

        double loan = loanAmount (carPrice, downPayment);
        double monthly = monthlyPayment (loan, repayPeriod, interestRate);
        monthly = ceil(monthly * 100.0) / 100.0;
        
        cout << "\nMONTHLY INSTALLMENT: " << monthly << endl;

        cout << "\nDo you want to enter other data? [Y @ N]: ";
        cin >> answer;
        answer = toupper (answer);

        while (answer != 'Y' && answer != 'N')
        {
            cout << "Invalid input. Please enter Y or N only.";
            cout << "\nDo you want to enter other data? [Y @ N]: ";
            cin >> answer;
            answer = toupper(answer);
        }
    }
    
    cout << "\nThank you :)";
    return 0;
}

double loanAmount (double carPrice, double downPayment)
{
    return carPrice - downPayment;
}

double monthlyPayment (double loanAmount, int loanPeriod, double interestRate)
{
    double totalInterest = loanAmount * (interestRate / 100) * loanPeriod;
    double totalPayable = loanAmount + totalInterest;
    return totalPayable / (loanPeriod * 12);
}
