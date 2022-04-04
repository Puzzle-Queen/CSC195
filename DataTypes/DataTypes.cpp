#include <iostream>
using namespace std;

int main()
{
    const unsigned short maxDays = 7;
    const float TAX = 0.1f;

    string name;
    string initial;
    short int age;
    int zipcode;
    float Wage;
    int daysWorked;
    int hoursWorkedPerDay[maxDays];
    int totalHoursWorkedADay = 0;
    string adult;

    bool isAdult;

    std::cout << "Enter first name: ";
    std::cin >> name;

    //std::cout << "The name entered is: " << name;
    std::cout << "Enter last initial: ";
    std::cin >> initial;

    std::cout << "Enter age: ";
    std::cin >> age;

    std::cout << "Enter zipcode: ";
    std::cin >> zipcode;

    std::cout << "Enter wage: ";
    std::cin >> Wage;

    std::cout << "Enter days worked: ";
    std::cin >> daysWorked;

    
    if (daysWorked > maxDays) {
        daysWorked = maxDays;
    }

    if (age <= 18) {
        isAdult = true;
        if (isAdult == true) {
            adult = "Employee is 18+.";
        }
        else if (isAdult == false) {
            adult = "Employee is a minor";
        }
    }

    
    int grossI = 0;
    int netI = 0;
    for (int i = 0; i < daysWorked; i++) {
        std::cout << "Enter hours worked for day " << (i + 1) << ": ";
        std::cin >> hoursWorkedPerDay[i];

        totalHoursWorkedADay += hoursWorkedPerDay[i];

        grossI += (Wage * hoursWorkedPerDay[i]);
        netI = (grossI - (grossI * TAX));
    }


    std::cout << name << " worked " << totalHoursWorkedADay << " hours at $" << Wage << " an hour.\n";
    std::cout << "gross income: $" << grossI << "\nnet income: $" << netI << endl;
    std::cout << adult;


    return 0;
}

