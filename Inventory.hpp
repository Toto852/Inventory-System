#ifndef INVENTORY_HPP_INCLUDED
#define INVENTORY_HPP_INCLUDED

#include <iostream>
#include <vector>
#include <string>
#include "Consumable.cpp"

using namespace std;


class Inventory {

private : 
    vector<Item*> inventory;

public : 


    // Add Item on the inventory
    void addItem(Item* item);
    

    // Show all items on the inventory
    void displayInventory() const;

    // Remove Item on the inventory
    void removeItem(const string& name);

    // Delete all items on the inventory
    void clearInventory();

    // Add or remove quantity
    void addQuanity(const string& name, const int quantity );
    void removeQuanity(const string& name, const int quantity );

};

#endif  