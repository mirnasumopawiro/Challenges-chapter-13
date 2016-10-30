//
//  PersonalInfo.hpp
//  chapter 13
//
//  Created by Mirna Sumopawiro on 10/30/16.
//  Copyright © 2016 Mirna Sumopawiro. All rights reserved.
//

#ifndef PersonalInfo_hpp
#define PersonalInfo_hpp

#include <iostream>
#include <string>
using namespace std;

class PersonalData
{
private:
    string name;
    string address;
    int age;
    string number;
    
public:
    PersonalData (string name, string address, int age, string number);
    string getName();
    string getAddress();
    int getAge();
    string getNumber();
    void setName();
    void setAddress();
    void setAge();
    void setNumber();
};
#endif /* PersonalInfo_hpp */
