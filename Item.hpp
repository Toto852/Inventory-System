#ifndef ITEM_HPP_INCLUDED
#define ITEM_HPP_INCLUDED

#include <string>
#include <iostream>

using namespace std;

class Item {

protected : 
    string name;
    string color;
    string features;
    string material;
    int quantity;

public : 

    // Constructor
    Item();
    Item(string name);
    Item(string name, string color, string features, string material, int quantity);

    //~Item();

    // SETTERS
    void setName(string name);
    void setColor(string color);
    void setFeatures(string features);
    void setMaterial(string material);
    void setQuantity(int quantity);


    // GETTERS
    string getName() const; 
    string getColor() const;
    string getFeatures() const;
    string getMaterial() const;
    int getQuantity() const;

    virtual void print() const;

};


#endif  


