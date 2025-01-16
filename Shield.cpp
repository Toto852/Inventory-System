#include <string>
#include <iostream>
#include "Shield.hpp"

using namespace std;

//--------------- CONSTRUCTOR -----------------------//

Shield::Shield(string name, string category, string material, int quantity, int defense)
    : Item(name, category, material, quantity), defense(defense) {}


//--------------- SETTERS -----------------------//

void Shield::setDefense(int defense){
    this->defense = defense;
}


//--------------- GETTERS -----------------------//


int Shield::getDefense() const {
    return this->defense;
}


void Shield::display() const {
    Item::display();
    cout << "Item defense   : " << this->defense << endl;
}