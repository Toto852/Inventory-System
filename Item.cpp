#include <string>
#include <iostream>
#include "Item.hpp"

using namespace std;

//--------------- CONSTRUCTOR -----------------------//

Item::Item() : name("UNDEFINED"), category("UNDEFINED"), material("UNDEFINED"), quantity(0)  {}

Item::Item(string name, string category, string material, int quantity) 
    : name(name), color(color), category(category), material(material), quantity(quantity)  {}
//--------------- DESTRUCTOR -----------------------//
/*
Item::~Item() :  {
    delete(name); 
    delete(color); 
    delete(features); 
    delete(material); 
    delete(quantity);
    cout << " DELETE COMPLETE " << endl; 
}*/

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


// ----------------- PRINT --------------//

void Item::display() const {
    cout << "Item name      : " << this->name << endl;
    cout << "Item category  : " << this->category << endl;
    cout << "Item material  : " << this->material << endl;
    cout << "Item quantity  : x" << this->quantity << endl;
}
