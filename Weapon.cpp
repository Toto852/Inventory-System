#include <string>
#include <iostream>
#include "Weapon.hpp"

using namespace std;

//--------------- CONSTRUCTOR -----------------------//

Weapon::Weapon(string name, string category, string material, int quantity, int damage)
    : Item(name, category, material, quantity), damage(damage) {}


//--------------- SETTERS -----------------------//

void Weapon::setDamage(int damage){
    this->damage = damage;
}


//--------------- GETTERS -----------------------//


int Weapon::getDamage() const {
    return this->damage;
}


void Weapon::display() const {
    Item::display();
    cout << "Item damage    : " << this->damage << endl;
}