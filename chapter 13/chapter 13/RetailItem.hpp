//
//  RetailItem.hpp
//  chapter 13
//
//  Created by Mirna Sumopawiro on 10/30/16.
//  Copyright © 2016 Mirna Sumopawiro. All rights reserved.
//

#ifndef RetailItem_hpp
#define RetailItem_hpp

#include <iostream>
using namespace std;

class RetailItem
{
private:
    string description;
    int unitsOnHand;
    double price;
    
public:
    RetailItem(string description, int unitsOnHand, double price);
    string getDescription();
    int getUnits();
    double getPrice();
    void setDescription();
    void setUnits();
    void setPrice();
};

#endif /* RetailItem_hpp */
