//
//  5.cpp
//  chapter 13
//
//  Created by Mirna Sumopawiro on 10/30/16.
//  Copyright © 2016 Mirna Sumopawiro. All rights reserved.
//

#include <iostream>
#include "RetailItem.hpp"
using namespace std;

void printRetailItem (RetailItem r);

int main()
{
    RetailItem item1 = RetailItem("Jacket", 12, 59.95);
    RetailItem item2 = RetailItem("Designer Jeans", 40, 34.95);
    RetailItem item3 = RetailItem("Shirt", 20, 24.95);
    
    RetailItem itemArray[] = {item1, item2, item3};
    
    for (int i = 0; i < 3; i++)
    {
        printRetailItem(itemArray[i]);
    }
    return 0;
}

void printRetailItem (RetailItem r)
{
    cout << "Description: " << r.getDescription() << endl;
    cout << "Units on Hand: " << r.getUnits() << endl;
    cout << "Price: $" << r.getPrice() << endl;
    cout << endl;
}
