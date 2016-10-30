//
//  Car.cpp
//  chapter 13
//
//  Created by Mirna Sumopawiro on 10/29/16.
//  Copyright © 2016 Mirna Sumopawiro. All rights reserved.
//

#include "Car.hpp"

Car::Car(int yearModel, string make)
{
    this->yearModel = yearModel;
    this->make = make;
    this->speed = 0;
}

int Car::getYearModel()
{
    return yearModel;
}

string Car::getMake()
{
    return make;
}

int Car::getSpeed()
{
    return speed;
}

int Car::accelerate()
{
    this->speed += 5;
    return speed;
}

int Car::brake()
{
    this->speed -= 5;
    return speed;
}

