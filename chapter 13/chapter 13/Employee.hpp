//
//  Employee.hpp
//  chapter 13
//
//  Created by Mirna Sumopawiro on 10/28/16.
//  Copyright © 2016 Mirna Sumopawiro. All rights reserved.
//

#ifndef Employee_hpp
#define Employee_hpp

#include <string>
using namespace std;

class Employee
{
private:
    string name;
    int idNumber;
    string department;
    string position;
    
public:
    Employee(string name, int idNumber, string department, string position);
    Employee(string name, int idNumber);
    Employee();
    string getName();
    int getIdNumber();
    string getDepartment();
    string getPosition();
};

#endif /* Employee_hpp */
