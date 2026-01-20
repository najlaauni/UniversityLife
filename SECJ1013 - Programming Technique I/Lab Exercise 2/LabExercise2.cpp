//NAJLA AUNI BINTI MOHAMAD ASRI 
//A25CS0117 
//11_11_2025 
//SET 1

#include <iostream>
using namespace std;

int main(){
    int num, digit, sum = 0;

    cout << "Enter an integer number: ";
    cin >> num;

    while (num != 0) {
        digit = num % 10;
        sum = sum + digit;
        num = num / 10;
    }

    if (sum % 3 == 0 && sum % 4 == 0 && sum % 5 == 0) 
    {
        cout << sum << " is mutiples of 3, 4 and 5" << endl;
    }

    else if (sum % 3 == 0 && sum % 4 == 0) 
    {
        cout << sum << " is mutiples of 3 and 4" << endl;
    }

    else if (sum % 3 == 0 && sum % 5 == 0) 
    {
        cout << sum << " is mutiples of 3 and 5" << endl;
    }

    else if (sum % 4 == 0 && sum % 5 == 0) 
    {
        cout << sum << " is mutiples of 4 and 5" << endl;
    }

    else if (sum % 3 == 0) 
    {
        cout << sum << " is mutiples of 3" << endl;
    }

    else if (sum % 4 == 0) 
    {
        cout << sum << " is mutiples of 4" << endl;
    }

    else if (sum % 5 == 0) 
    {
        cout << sum << " is mutiples of 5" << endl;
    }

    return 0;
}
