//
// Created by drews on 2/19/2021.
//

#include <iostream>
#include <string>
#include "Employee.h"

using namespace std;

/********************************** Global function prototypes *************************************/

// Requires: None
// Modifies: cin, cout
// Effects: employee object
Employee userInput();

int main(){
    Employee e1 = userInput();
    cout << e1.getPayCheck() << endl;
    cout << e1.getName() << "'s paycheck will be: $" << e1.getPayCheck() << endl;
    return 0;
}

/************************************* Global function definitions ********************************/

Employee userInput(){
    Employee e1;
    cout << "You will be promted for the information needed to make an emplyee object" << endl;
    string name;
    cout << "Please enter the name you would like this employee to have: ";
    while (!(cin >> name)) {
        cin.clear();
        string junk;
        cout << "Please enter a valid input: ";
        getline(cin, junk);
    }
    e1.setName(name);
    int posistion;
    cout << "Please enter the position this employee holds" << endl;
    cout << "Enter 0 for Cashier" << endl;
    cout << "Enter 1 for Stocker" << endl;
    cout << "Enter 2 for Manger" << endl;
    cout << "Enter: ";
    while (!(cin >> posistion)) {
        cin.clear();
        string junk;
        cout << "plz enter a valid input: ";
        getline(cin, junk);
    }
    if(posistion == 0){
        e1.setPos(Employee::Cashier);
    } else if (posistion == 1){
        e1.setPos(Employee::Stocker);
    } else if (posistion == 2){
        e1.setPos(Employee::Manager);
    } else {
        cout << "You did not enter a valid position" << endl;
    }
    int hours;
    cout << "Please enter the amount of hours this employee has worked: ";
    while (!(cin >> hours)) {
        cin.clear();
        string junk;
        cout << "plz enter a valid input: ";
        getline(cin, junk);
    }
    e1.setHoursWorked(hours);
    return e1;
}