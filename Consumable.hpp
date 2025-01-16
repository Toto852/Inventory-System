#ifndef CONSUMABLE_HPP_INCLUDED
#define CONSUMABLE_HPP_INCLUDED

#include <string>
#include <iostream>
#include "Shield.cpp"

using namespace std;


class Consumable : public Item {

private : 
    string effect;

public : 

    // Constructor
    Consumable(string name, string category, string material, int quantity, string effect);

    // SETTERS
    void setEffect(string effect);

    // GETTERS
    string getEffect() const; 

    void display() const;

};

#endif  