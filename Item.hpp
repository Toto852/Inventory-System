#ifndef ITEM_HPP_INCLUDED
#define ITEM_HPP_INCLUDED

#include <string>
#include <iostream>

using namespace std;

class Item {

private: 
    string name;
    string category;
    string material;
    int quantity;

public : 

    // Constructor
    Item(string name, string category, string material, int quantity);

    //~Item();

    // SETTERS
    void setName(string name);
    void setCategory(string category);
    void setMaterial(string material);
    void setQuantity(int quantity);


    // GETTERS
    string getName() const; 
    string getCategory() const;
    string getMaterial() const;
    int getQuantity() const;

    void increaseQuantity(int amount);

    virtual void display() const;

};


#endif  


