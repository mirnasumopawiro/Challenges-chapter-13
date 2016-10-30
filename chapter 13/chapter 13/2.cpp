//
//  2.cpp
//  chapter 13
//
//  Created by Mirna Sumopawiro on 10/28/16.
//  Copyright © 2016 Mirna Sumopawiro. All rights reserved.
//

#include <iostream>
#include "Employee.hpp"
using namespace std;

void printEmployee(Employee e);

int main()
{
    Employee employee1 = Employee("Susan Meyers", 47899, "Accounting", "Vice President");
    Employee employee2 = Employee("Mark Jones", 39119, "IT", "Programmer");
    Employee employee3 = Employee("Joy Rogers", 81774, "Manufacturing", "Engineer");
    
    Employee employeeArray[] = {employee1, employee2, employee3};
    
    for (int i = 0; i < 3; i++)
    {
        printEmployee(employeeArray[i]);
    }
    return 0;
}

void printEmployee(Employee e)
{
    cout << "Name: " << e.getName() << endl;
    cout << "ID Number: " << e.getIdNumber() << endl;
    cout << "Department: " << e.getDepartment() << endl;
    cout << "Position: " << e.getPosition() << endl;
    cout << endl;
}