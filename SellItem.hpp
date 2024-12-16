#ifndef SELLITEM_HPP_INCLUDED
#define SELLITEM_HPP_INCLUDED

#include <string>
#include <iostream>
#include "Item.cpp"

using namespace std;

class SellItem : public Item {

private : 
    double sellingPrice;

public : 

    // Constructor
    SellItem();
    SellItem(Item*& item, double sellingPrice); 
    SellItem(Item& item, double sellingPrice); 
    SellItem(string name, string color, string features, string material, int quantity, double sellingPrice);

    // SETTERS
    void setSellingPrice(double sellingPrice);

    // GETTERS
    double getSellingPrice() const; 

    void print() const;

    void Sell();

};


#endif  


