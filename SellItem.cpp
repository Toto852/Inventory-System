#include <string>
#include <iostream>
#include "SellItem.hpp"

using namespace std;

//--------------- CONSTRUCTOR -----------------------//

SellItem::SellItem() : Item(), sellingPrice(0)  {}

SellItem::SellItem(Item& item, double sellingPrice) 
    : Item(item.getName(), item.getColor(), item.getFeatures(), item.getMaterial(), item.getQuantity()), sellingPrice(sellingPrice) {}


SellItem::SellItem(Item*& item, double sellingPrice) 
    : Item(item->getName(), item->getColor(), item->getFeatures(), item->getMaterial(), item->getQuantity()), sellingPrice(sellingPrice) {}


SellItem::SellItem(string name, string color, string features, string material, int quantity, double sellingPrice) 
    : Item(name,color,features,material,quantity), sellingPrice(sellingPrice) {}

void SellItem::setSellingPrice(double sellingPrice) {
    this->sellingPrice = sellingPrice;
}

double SellItem::getSellingPrice() const {
    return this->sellingPrice;
}

void SellItem::print() const {
    cout << " Selling Item " << endl;
    Item::print();
    cout << "Selling price  : " << this->sellingPrice << " euro" << endl;
}

void SellItem::Sell() {
   // cout << " How many do you want to sell ?" << endl;
   // cout << "Amount : ";
   // cin>>
   cout << " DO nothing for now " << endl;
}
