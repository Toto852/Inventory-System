#ifndef SHIELD_HPP_INCLUDED
#define SHIELD_HPP_INCLUDED
#include <string>
#include <iostream>
#include "Weapon.cpp"

using namespace std;


class Shield : public Item {

private : 
    int defense;

public : 

    // Constructor
    Shield(string name, string category, string material, int quantity, int defense);

    // SETTERS
    void setDefense(int defense);

    // GETTERS
    int getDefense() const; 

    void display() const;

};


#endif  
