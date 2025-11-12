/*
 Project Name : Program1PopulationGabrielCabral
 File Name : Program1PopulationGabrielCabral.cpp
 Programmer : Gabriel Cabral
 Date : 11/10/25
 Requirements:
 Use loops to model repeated population growth across multiple days.
 Apply arithmetic calculations involving percentages.
 Implement input validation for starting size, daily increase, and days.

*/
/*
Ask starting population minimum 2
Ask daily increase as percentage 0%
Ask number of days minimum 1
setw for alignment
output days and populations 
current pop += current op * percent /100
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int startpop, days;
    double percent;

    // ask
    cout << "Enter starting population (min2): ";
    cin >> startpop;
    while (startpop < 2) {
        cout << "Invalid enter a value >= 2: ";
        cin >> startpop;
    }

    cout << "Enter daily increase % (min0): ";
    cin >> percent;
    while (percent < 0) {
        cout << "Invalid enter a value >= 0: ";
        cin >> percent;
    }

    cout << "enter number of days (min1): ";
    cin >> days;
    while (days < 1) {
        cout << "Invalid enter a value >= 1: ";
        cin >> days;
    }
    //columns
    cout << setw(5) << "Day" << setw(15) << "Population" << endl;

    double pop = startpop;
    cout << fixed << setprecision(2);
    for (int day = 1; day <= days; day++) {
        cout << setw(5) << day << setw(15) << pop << endl;
        pop += pop * percent / 100;
    }
    return 0;

}
