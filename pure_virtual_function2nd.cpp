#include <iostream>
using namespace std;

class Employee {
public:
    virtual double calculateSalary() = 0; // Pure virtual function
};

class FullTimeEmployee : public Employee {
public:
    double basicSalary; // Public member variable
    double bonus; // Public member variable

    void setSalaryDetails(double salary, double b) {
        basicSalary = salary; // Set basic salary
        bonus = b; // Set bonus
    }

    double calculateSalary() {
        return basicSalary + bonus; // Total salary formula
    }
};

class PartTimeEmployee : public Employee {
public:
    double hourlyWage; // Public member variable
    int hoursWorked; // Public member variable

    void setWorkDetails(double wage, int hours) {
        hourlyWage = wage; // Set hourly wage
        hoursWorked = hours; // Set hours worked
    }

    double calculateSalary() {
        return hourlyWage * hoursWorked; // Total salary formula
    }
};

int main() {
    FullTimeEmployee fullTime;
    fullTime.setSalaryDetails(3000.0, 500.0); // Set salary and bonus

    PartTimeEmployee partTime;
    partTime.setWorkDetails(20.0, 15); // Set wage and hours worked

    // Output the salaries
    cout << "Full-Time Employee Salary: " << fullTime.calculateSalary() <<endl;
    cout << "Part-Time Employee Salary: " << partTime.calculateSalary() ;

    return 0;
}