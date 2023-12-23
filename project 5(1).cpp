#include <iostream>
using namespace std;

int main() {
    double salary, taxRate, finalSalary;
    
    cout << "Enter the salary: ";
    cin >> salary;
    
    if (salary < 6000000) {
        taxRate = 0;
    } else if (salary < 8000000) {
        taxRate = 5;
    } else if (salary < 10000000) {
        taxRate = 10;
    } else if (salary < 14000000) {
        taxRate = 15;
    } else if (salary < 18000000) {
        taxRate = 20;
    } else if (salary < 25000000) {
        taxRate = 25;
    } else {
        taxRate = 35;
    }
    
    finalSalary = salary - (salary * taxRate / 100);
    
    cout << "Final Salary after tax deduction: " << finalSalary << endl;

    return 0;
}