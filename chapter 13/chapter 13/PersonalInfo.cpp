//
//  PersonalInfo.cpp
//  chapter 13
//
//  Created by Mirna Sumopawiro on 10/30/16.
//  Copyright © 2016 Mirna Sumopawiro. All rights reserved.
//

#include "PersonalInfo.hpp"

PersonalData::PersonalData (string name, string address, int age, string number)
{
    this->name = name;
    this->address = address;
    this->age = age;
    this->number = number;
}
string PersonalData::getName()
{
    return name;
}
string PersonalData::getAddress()
{
    return address;
}
int PersonalData::getAge()
{
    return age;
}
string PersonalData::getNumber()
{
    return number;
}
void PersonalData::setName()
{
    this->name = name;
}
void PersonalData::setAddress()
{
    this->address = address;
}
void PersonalData::setAge()
{
    this->age = age;
}
void PersonalData::setNumber()
{
    this->number = number;
}