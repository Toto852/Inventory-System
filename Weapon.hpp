#ifndef WEAPON_HPP_INCLUDED
#define WEAPON_HPP_INCLUDED

#include <string>
#include <iostream>
#include "Item.cpp"

using namespace std;


class Weapon : public Item {

private : 
    int damage;

public : 

    // Constructor
    Weapon(string name, string category, string material, int quantity, int damage);

    // SETTERS
    void setDamage(int damage);

    // GETTERS
    int getDamage() const; 

    void display() const;

};


#endif  
