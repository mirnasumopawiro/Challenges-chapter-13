//
//  Date.cpp
//  chapter 13
//
//  Created by Mirna Sumopawiro on 10/28/16.
//  Copyright © 2016 Mirna Sumopawiro. All rights reserved.
//

#include <iostream>
using namespace std;

class Date {
private:
    //properties
    int day = 1;
    int month = 1;
    int year = 1970;
    
    string monthName[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    
public:
    //functions
    Date (int day, int month, int year);
    void printFirstForm();
    void printSecondForm();
    void printThirdForm();
};

Date::Date (int day, int month, int year)
{
    this->day = day;
    this-> month = month;
    this->year = year;
}

void Date::printFirstForm()
{
    cout << month << "/" << day << "/" << year << endl;
}

void Date::printSecondForm()
{
    cout << monthName[month-1] << " " << day << ", " << year << endl;
}

void Date::printThirdForm()
{
    cout << day << " " << monthName[month-1] << " " << year << endl;
}