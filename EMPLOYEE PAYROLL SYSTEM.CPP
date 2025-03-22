// main.cpp
#include <iostream>
using namespace std;

int main() {
    cout << "Employee Payroll System" << endl;
    return 0;
}

// Employee.h
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
using namespace std;

class Employee {
private:
    int id;
    string name;
    float basicSalary;
public:
    Employee(int id, string name, float basicSalary);
    void displayEmployeeInfo();
    float getBasicSalary();
};

#endif


