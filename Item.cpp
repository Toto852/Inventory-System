#include <string>
#include <iostream>
#include "Item.hpp"

using namespace std;

//--------------- CONSTRUCTOR -----------------------//

Item::Item() : name("UNDEFINED"), color("UNDEFINED"), features("UNDEFINED"), material("UNDEFINED"), quantity(0)  {}

Item::Item(string name, string color, string features, string material, int quantity) 
    : name(name), color(color), features(features), material(material), quantity(quantity)  {}
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

void Item::setColor(string color){
    this->color = color;
}

void Item::setFeatures(string features) {
    this->features = features;
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

string Item::getColor() const {
    return this->color;
}

string Item::getFeatures() const {
    return this->features;
}

string Item::getMaterial() const {
    return this->material;
}

int Item::getQuantity() const {
    return this->quantity;
}


// ----------------- PRINT --------------//

void Item::print() const {
    cout << "Item name      : " << this->name << endl;
    cout << "Item color     : " << this->color << endl;
    cout << "Item feature   : " << this->features << endl;
    cout << "Item material  : " << this->material << endl;
    cout << "Item quantity  : x" << this->quantity << endl;
}
