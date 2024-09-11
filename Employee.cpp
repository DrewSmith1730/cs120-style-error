//
// Created by drews on 2/19/2021.
//
#include "Employee.h"

using namespace std;

Employee::Employee() {
    name = "John Doe";
    position = Cashier;
    findHourly();
    hoursWorked = 0;
}

Employee::Employee(std::string n, Employee::pos position, int hours) {
    name = n;
    this->position = position;
    findHourly();
    hoursWorked = hours;
}

string Employee::getName() const {
    return name;
}

Employee::pos Employee::getPos() const {
    return position;
}

float Employee::getHourly() const {
    return hourlyPay;
}

int Employee::getHoursWorked() const {
    return hoursWorked;
}

void Employee::setName(std::string name) {
    this->name = name;
}

void Employee::setPos(Employee::pos position) {
    this->position = position;
}

void Employee::setHourly(float hourly) {
    hourlyPay = hourly;
}

void Employee::setHoursWorked(int hours) {
    hoursWorked = hours;
}

float Employee::getPayCheck() {
    return this->getHourly() * this->getHoursWorked();
}

void Employee::findHourly() {
    Employee::pos postemp = getPos();
    Employee::pos cash, stock;
    cash = Cashier;
    stock = Stocker;
    if (postemp == cash){
        hourlyPay = 7.70;
    } else if(postemp == stock){
        hourlyPay = 11.25;
    } else {
        hourlyPay = 15.75;
    }
}

bool operator == (Employee &r1, Employee &r2) {
    return r1.getPos() == r2.getPos();
}

bool operator <= (Employee &r1, Employee &r2) {
    return r1.getPos() <= r2.getPos();
}

bool operator >= (Employee &r1, Employee &r2) {
    return r1.getPos() >= r2.getPos();
}
