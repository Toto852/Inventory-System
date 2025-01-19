#include <string>
#include <iostream>
#include "Item.hpp"

using namespace std;

//--------------- CONSTRUCTOR -----------------------//

Item::Item(string name, string category, string material, int quantity) 
    : name(name), category(category), material(material), quantity(quantity)  {}


//-------------- SETTERS ---------------------------//

void Item::setName(string name) {
    this->name = name;
}

void Item::setCategory(string category) {
    this->category = category;
}

void Item::setMaterial(string material) {
    this->material = material;
}

void Item::setQuantity(int quantity) {
    this->quantity = quantity;
}

//-------------- GETTERS ---------------------------//

string Item::getName() const {
    return this->name;
}

string Item::getCategory() const {
    return this->category;
}

string Item::getMaterial() const {
    return this->material;
}

int Item::getQuantity() const {
    return this->quantity;
}

void Item::increaseQuantity(int amount) {
    this->quantity += amount;
}


// ----------------- PRINT --------------//

void Item::display() const {
    cout << "Item name      : " << this->name << endl;
    cout << "Item category  : " << this->category << endl;
    cout << "Item material  : " << this->material << endl;
    cout << "Item quantity  : x" << this->quantity << endl;
}
