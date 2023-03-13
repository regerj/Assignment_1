#include <iostream>     // For input and output
#include <cmath>        // For pow() function
#include <cstdlib>      // For rand() function
#include <ctime>        // For time(0)

// Like I said before, in the future we won't use this next line of code, but for now it's alright to have it.
using namespace std;

// This is my solution, all in main that I would use. Like I said, normally this would be seperated into their own
// functions but for the sake of comparability, I have done everything in main using only concepts that we have
// talked about so far.

int main()
{
    float monthlySalary, costOfCar, annualSalary, sellingPrice, commission, grossIncome, taxPaid, netIncome;
    int monthsWorked, carsSold, misconductsObserved, taxYear, profitMargin, misconductDeduction;
    char state;
    // 1. Gather user input
    cout <<  endl << endl << "Please input your information below:" << endl << endl;
    cout << "Please enter your monthly salary: ";
    cin >> monthlySalary;
    cout << "Please enter the number of months you worked this year: ";
    cin >> monthsWorked;
    cout << "Please enter the cost of the car model you sold: ";
    cin >> costOfCar;
    cout << "Please enter the number of cars that you sold: ";
    cin >> carsSold;
    cout << "Please enter the number of misconducts observed: ";
    cin >> misconductsObserved;
    cout << "Please enter the tax year for which you are filing: ";
    cin >> taxYear;
    cout << "Please enter the state for which you are filing: ";
    cin >> state;
    cout << endl;

    // 2. Cacluate annual salary
    annualSalary = monthlySalary * monthsWorked;

    // 3. Calculate commission from car sales (hint: remember to use rand() to get a random number for average profit %)
    srand(time(NULL));
    profitMargin = rand() % 5 + 6;
    sellingPrice = profitMargin / 100 * costOfCar + costOfCar;
    commission = (sellingPrice - costOfCar) * 0.02;

    // 4. Calculate loss from misconducts (hint: use pow() to calculate doubling loss per misconduct)
    if(misconductsObserved != 0)
        misconductDeduction = 100 * pow(2, misconductsObserved - 1);
    else
        misconductDeduction = 0;

    // 5. Calculate gross income
    grossIncome = annualSalary + commission - misconductDeduction;

    // 6. Calculate taxes owed based on gross income, state, and year
    switch(state)
    {
        case 'A':
        {
            taxPaid = taxYear == 2017 ? grossIncome * 0.06 : grossIncome * 0.08;
            break;
        }
        case 'B':
        {
            if(taxYear == 2017)
            {
                if(grossIncome < 2000)
                    taxPaid = 0;
                else if(grossIncome <= 10000)
                    taxPaid = 100;
                else
                    taxPaid = 100 + (grossIncome - 10000) * 0.1;
            }
            else if(taxYear == 2018)
            {
                if(grossIncome < 2500)
                    taxPaid = 0;
                else if(grossIncome <= 10000)
                    taxPaid = 115;
                else
                    taxPaid = 115 + (grossIncome - 10000) * 0.105;
            }
            break;
        }
        case 'C':
        {
            if(taxYear == 2017)
            {
                if(grossIncome < 3500)
                    taxPaid = grossIncome * 0.05;
                else if(grossIncome < 9000)
                    taxPaid = 175 + (grossIncome - 3500) * 0.07;
                else if(grossIncome < 125000)
                    taxPaid = 560 + (grossIncome - 9000) * 0.09;
                else
                    taxPaid = 11000 + (grossIncome - 125000) * 0.099;
            }
            else if(taxYear == 2018)
            {
                if(grossIncome < 3450)
                    taxPaid = grossIncome * 0.05;
                else if(grossIncome < 8700)
                    taxPaid = 172.5 + (grossIncome - 3450) * 0.07;
                else if(grossIncome < 125000)
                    taxPaid = 540 + (grossIncome - 8700) * 0.09;
                else
                    taxPaid = 11007 + (grossIncome - 125000) * 0.099;
            }
            break;
        }
        default:
        {
            cout << "No tax info available for this year" << endl;
            return 0;
            break;
        }
    }

    // 7. Display the gross income, taxes owed, and net income
    netIncome = grossIncome - taxPaid;
    cout << "Your gross income this year is: \t" << grossIncome << endl;
    cout << "Your tax paid this year is: \t\t" << taxPaid << endl;
    cout << "Your net income this year is: \t\t" << netIncome << endl;
    return 0;
}