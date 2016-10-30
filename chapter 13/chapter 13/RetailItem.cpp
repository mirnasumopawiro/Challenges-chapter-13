//
//  RetailItem.cpp
//  chapter 13
//
//  Created by Mirna Sumopawiro on 10/30/16.
//  Copyright © 2016 Mirna Sumopawiro. All rights reserved.
//

#include "RetailItem.hpp"

RetailItem::RetailItem(string description, int unitsOnHand, double price)
{
    this->description = description;
    this->unitsOnHand = unitsOnHand;
    this->price = price;
}
string RetailItem::getDescription()
{
    return description;
}
int RetailItem::getUnits()
{
    return unitsOnHand;
}
double RetailItem::getPrice()
{
    return price;
}
void RetailItem::setDescription()
{
    this->description = description;
}
void RetailItem::setUnits()
{
    this->unitsOnHand = unitsOnHand;
}
void RetailItem::setPrice()
{
    this->price = price;
}
