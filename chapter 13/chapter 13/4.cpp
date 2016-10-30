//
//  4.cpp
//  chapter 13
//
//  Created by Mirna Sumopawiro on 10/30/16.
//  Copyright © 2016 Mirna Sumopawiro. All rights reserved.
//

#include <iostream>
#include "PersonalInfo.hpp"
using namespace std;

void printPersonalData (PersonalData p);

int main()
{
    PersonalData data1 = PersonalData("Mirna", "Cibubur", 18, "082260255056");
    PersonalData data2 = PersonalData("Rudy", "Depok", 63, "0816729893");
    PersonalData data3 = PersonalData("Mia", "Jawa Barat", 48, "0811197821");
    
    PersonalData dataArray[] = {data1, data2, data3};
    
    for (int i = 0; i < 3; i++)
    {
        printPersonalData(dataArray[i]);
    }
    return 0;
}

void printPersonalData (PersonalData p)
{
    cout << "Name: " << p.getName() << endl;
    cout << "Address: " << p.getAddress() << endl;
    cout << "Age: " << p.getAge() << endl;
    cout << "Phone Number: " << p.getNumber() << endl;
    cout << endl;
}