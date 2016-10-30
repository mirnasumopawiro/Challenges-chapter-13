//
//  3.cpp
//  chapter 13
//
//  Created by Mirna Sumopawiro on 10/29/16.
//  Copyright © 2016 Mirna Sumopawiro. All rights reserved.
//

#include <iostream>
#include "Car.hpp"
using namespace std;

int main()
{
    int yearModel;
    string make;
    
    cout << "Enter the car's details:\n";
    cout << "Year Model: ";
    cin >> yearModel;
    cout << "Make: ";
    cin >> make;
    
    Car Car (yearModel, make);
    
    for (int i = 0; i < 5; i++)
    {
        Car.accelerate();
        cout << Car.getSpeed() << endl;
    }
    cout << "After 5 acceleration, the speed is " << Car.getSpeed() << " km/h" << endl;
    
    for (int i = 0; i< 5; i++)
    {
        Car.brake();
        cout << Car.getSpeed() << endl;
    }
    cout << "After 5 brakes, the speed is " << Car.getSpeed() << " km/h" << endl;
}