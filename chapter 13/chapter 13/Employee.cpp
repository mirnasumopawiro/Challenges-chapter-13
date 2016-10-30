//
//  Employee.cpp
//  chapter 13
//
//  Created by Mirna Sumopawiro on 10/28/16.
//  Copyright © 2016 Mirna Sumopawiro. All rights reserved.
//

#include "Employee.hpp"

Employee::Employee(string name, int idNUmber, string department, string position)
{
    this->name =name;
    this->idNumber = idNumber;
    this->department = department;
    this->position = position;
};

Employee::Employee(string name, int idNumber)
{
    this->name = name;
    this->idNumber = idNumber;
    this->department = " ";
    this->position = " ";
};
Employee::Employee()
{
    this->name = " ";
    this->idNumber = 0;
    this->department = " ";
    this->position = " ";
};

string Employee::getName()
{
    return this->name;
}

int Employee::getIdNumber()
{
    return this->idNumber;
}

string Employee::getDepartment()
{
    return this->department;
}

string Employee::getPosition()
{
    return this->position;
}