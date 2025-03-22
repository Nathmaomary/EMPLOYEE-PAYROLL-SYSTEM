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
// Employee.cpp
#include "Employee.h"
#include <iostream>
using namespace std;

Employee::Employee(int id, string name, float basicSalary) {
    this->id = id;
    this->name = name;
    this->basicSalary = basicSalary;
}

void Employee::displayEmployeeInfo() {
    cout << "ID: " << id << endl;
    cout << "Name: " << name << endl;
    cout << "Basic Salary: " << basicSalary << endl;
}

float Employee::getBasicSalary() {
    return basicSalary;
}
// Payroll.h
#ifndef PAYROLL_H
#define PAYROLL_H

#include "Employee.h"
class Payroll {
public:
    float calculateSalary(Employee employee);
};

#endif
// Payroll.cpp
#include "Payroll.h"

float Payroll::calculateSalary(Employee employee) {
    float basicSalary = employee.getBasicSalary();
    // Implement salary calculation logic (e.g., adding bonuses, deductions)
    return basicSalary;
}// Payroll.cpp (Update)
#include <iostream>

void Payroll::displayPayroll(Employee employee, float salary) {
    cout << "Payroll Details for Employee " << employee.getName() << endl;
    cout << "Salary: " << salary << endl;
}
// main.cpp (Update)
#include <iostream>
#include "Employee.h"
#include "Payroll.h"

using namespace std;

int main() {
    string name;
    int id;
    float basicSalary;
    
    cout << "Enter employee ID: ";
    cin >> id;
    cout << "Enter employee name: ";
    cin >> name;
    cout << "Enter employee basic salary: ";
    cin >> basicSalary;
    
    Employee emp(id, name, basicSalary);
    Payroll payroll;
    float salary = payroll.calculateSalary(emp);
    payroll.displayPayroll(emp, salary);
    
    return 0;
}









