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
// Payroll.cpp (Update)
float Payroll::calculateSalary(Employee employee) {
    float basicSalary = employee.getBasicSalary();
    float bonus = basicSalary * 0.10; // 10% bonus
    return basicSalary + bonus;
}
// Payroll.cpp (Update)
float Payroll::calculateSalary(Employee employee) {
    float basicSalary = employee.getBasicSalary();
    float bonus = basicSalary * 0.10; // 10% bonus
    float tax = basicSalary * 0.05; // 5% tax deduction
    return basicSalary + bonus - tax;
}
void displayPayrollBreakdown(Employee employee, 
    float salary, float bonus, float tax);
// Payroll.cpp (Update)
void Payroll::displayPayrollBreakdown(Employee employee, float salary, float bonus, float tax) {
    cout << "Employee: " << employee.getName() << endl;
    cout << "Basic Salary: " << employee.getBasicSalary() << endl;
    cout << "Bonus: " << bonus << endl;
    cout << "Tax Deduction: " << tax << endl;
    cout << "Total Salary: " << salary << endl;
}
// main.cpp (Update)
#include <vector>

int main() {
    vector<Employee> employees;
    
    // Collect multiple employee data
    for (int i = 0; i < 2; ++i) { // For example, 2 employees
        string name;
        int id;
        float basicSalary;
        
        cout << "Enter employee ID: ";
        cin >> id;
        cout << "Enter employee name: ";
        cin >> name;
        cout << "Enter employee basic salary: ";
        cin >> basicSalary;
        
        employees.push_back(Employee(id, name, basicSalary));
    }
    
    // Process payroll for each employee
    Payroll payroll;
    for (Employee emp : employees) {
        float salary = payroll.calculateSalary(emp);
        payroll.displayPayrollBreakdown(emp, salary, salary * 0.10, salary * 0.05);
    }
    
    return 0;
}
// main.cpp (Update)
#include <fstream>

void savePayrollToFile(Employee employee, float salary) {
    ofstream outFile("payroll.txt", ios::app);
    outFile << "ID: " << employee.getId() << ", Name: " << employee.getName() << ", Salary: " << salary << endl;
    outFile.close();
}
// main.cpp (Update)
cout << "Enter employee basic salary: ";
while (!(cin >> basicSalary) || basicSalary <= 0) {
    cout << "Invalid input! Enter a positive salary: ";
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}
// Employee.h (Update)
enum class EmployeeType { FULL_TIME, PART_TIME };
EmployeeType type;
// Payroll.cpp (Update)
float Payroll::calculateSalary(Employee employee) {
    float basicSalary = employee.getBasicSalary();
    float bonus = (employee.getType() == EmployeeType::FULL_TIME) ? basicSalary * 0.10 : basicSalary * 0.05;
    float tax = basicSalary * 0.05;
    return basicSalary + bonus - tax;
}
// Employee.cpp (Update)
void Employee::displayEmployeeType() {
    cout << "Employee Type: " << (type == EmployeeType::FULL_TIME ? "Full-Time" : "Part-Time") << endl;
}
// main.cpp (Update)
Employee* findEmployeeById(vector<Employee>& employees, int id) {
    for (Employee& emp : employees) {
        if (emp.getId() == id) {
            return &emp;
        }
    }
    return nullptr;
}
// main.cpp (Update)
ofstream outFile("payroll.txt", ios::app);
if (!outFile) {
    cerr << "Error opening file!" << endl;
    return 1;
}
// main.cpp (Update)
cout << "Menu: \n1. Add Employee\n2. Calculate Payroll\n3. Exit\n";
// main.cpp (Update)
void generateSalaryReport(vector<Employee>& employees) {
    for (Employee& emp : employees) {
        Payroll payroll;
        float salary = payroll.calculateSalary(emp);
        cout << emp.getName() << " - Salary: " << salary << endl;
    }
}



















