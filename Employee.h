//
// Created by drews on 2/19/2021.
//

#ifndef MULTIPLE_CLASSES_EMPLOYEE_H
#define MULTIPLE_CLASSES_EMPLOYEE_H

#include <string>

class Employee{
public:

    enum pos {
        Cashier,
        Stocker,
        Manager,
    };

    /*
     * Default constructor
     * Requires: Nothing
     * Modifies:
     */
    Employee();

    /*
     * Non Default Constructor
     * Requires: name, position
     * Modifies: none
     * Effects: generates an id num
     */
    Employee(std::string name, Employee::pos position, int hours);


    // getters
    std::string getName()const;
    Employee::pos getPos()const;
    float getHourly()const;
    int getHoursWorked()const;

    // setters
    void setName(std::string name);
    void setPos(Employee::pos position);
    void setHourly(float hourly);
    void setHoursWorked(int hours);

    /*
     * getPayCheck
     * Requires: nothing
     * Modifies: nothing
     * Effects: returns the paycheck of an employee
     * Multiplies the hourly by how many hours the employee has worked
     */
    float getPayCheck();

    /*
     * find hourly
     * Requires: nothing
     * Modifies: nothing
     * Effects: gets the employee's hourly by checking the enum type
     */
    void findHourly();

    // operators
    friend bool operator == (Employee &r1, Employee &r2);
    friend bool operator <= (Employee &r1, Employee &r2);
    friend bool operator >= (Employee &r1, Employee &r2);

private:
    std::string name;
    Employee::pos position;
    float hourlyPay;
    int hoursWorked;
};

#endif //MULTIPLE_CLASSES_EMPLOYEE_H
