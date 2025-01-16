#include <string>
#include <iostream>
#include "Consumable.hpp"

using namespace std;

//--------------- CONSTRUCTOR -----------------------//

Consumable::Consumable(string name, string category, string material, int quantity, string effect)
    : Item(name, category, material, quantity), effect(effect) {}


//--------------- SETTERS -----------------------//

void Consumable::setEffect (string effect) {
    this->effect = effect;
}


//--------------- GETTERS -----------------------//


string Consumable::getEffect() const {
    return this->effect;
}


void Consumable::display() const {
    Item::display();
    cout << "Item effect    : " << this->effect << endl;
}