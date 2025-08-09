/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    float basicSalary, percentAllowance, percentDeduction;
    cout << "Enter Basic Salary: ";
    cin >> basicSalary;
    cout << "Enter percentage of Allowances: ";
    cin >> percentAllowance;
    cout << "Enter percentage of Deductions: ";
    cin >> percentDeduction;
    
    int netSalary;
    netSalary = basicSalary + basicSalary*(percentAllowance/100) - basicSalary*(percentDeduction/100);
    cout << "Your Net Salary is " << netSalary;

    return 0;
}