//
//  Car.hpp
//  chapter 13
//
//  Created by Mirna Sumopawiro on 10/29/16.
//  Copyright © 2016 Mirna Sumopawiro. All rights reserved.
//

#ifndef Car_hpp
#define Car_hpp

#include <string>
using namespace std;

class Car
{
    //properties
private:
    int yearModel;
    string make;
    int speed;
   
    //functions
public:
    Car (int yearModel, string make); //constructor
    int getYearModel(); //accessor
    string getMake(); //accessor
    int getSpeed(); //accessor
    int accelerate(); //accelerate
    int brake(); //brake
    
};


#endif /* Car_hpp */
