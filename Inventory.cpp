#include <iostream>
#include <vector>
#include <string>
#include "Inventory.hpp"

using namespace std;


void Inventory::addItem(Item* item) {
    inventory.push_back(item);
}


void Inventory::removeItem(const string& name) {
    for (int i = 0; i < inventory.size() ; i++)
    {
        if ( inventory[i]->getName() == name )
        {
            delete inventory[i];
            inventory.erase(inventory.begin() + i);
            cout << name << " complete delete " << endl;  
            return;  
        }
    }
    cout << "Item : " << name << " not found " << endl;   
}


void Inventory::displayInventory() const {
    if (inventory.empty() ){
        cout << " Inventory is empty " << endl;
    }
    else 
    {
        for (int i = 0; i < inventory.size(); i++)
        {
            cout << " " <<endl;
            cout << "----------- Item " << i+1 << " --------------" << endl;
            inventory[i]->display();
        }   
    }
}


void Inventory::removeQuanity(const string& name, const int quantity) {
    for (int i = 0; i < inventory.size() ; i++)
    {
        if ( inventory[i]->getName() == name )
        {
            cout << " " <<endl;
            cout << "--------------------------" <<endl;
            cout << "           Item            : " << name << endl;
            cout << "     Remaining quantity    : " << inventory[i]->getQuantity() << endl;
            cout << "  Quantity want to remove  : " << quantity << endl;
            if ( quantity > inventory[i]->getQuantity() )
            {
                cout << " " <<endl;
                cout << "--------------------------" <<endl;
                cout << "Quantity to be removed greater than remaining quantity " << endl;
                cout << "Do you want to delete this Item ?   (Yes or No) "<< endl;
                string answer;
                cin >> answer;
                if (answer == "Yes") 
                {
                    delete inventory[i];
                    inventory.erase(inventory.begin() + i);
                    cout << name << " complete delete " << endl;
                    return;
                }
                else
                {
                    cout << " " <<endl;
                    cout << "--------------------------" <<endl;
                    cout << "Quantity of " << name << " is the same."<< endl;
                    return;
                }
            }
            else 
            {
                inventory[i]->setQuantity( inventory[i]->getQuantity()-quantity );
                cout << " " <<endl;
                cout << "--------------------------" <<endl;
                cout << "Quantity remove successfully " << endl;
                cout << "     Remaining quantity    : " << inventory[i]->getQuantity() << endl;
                return;
            }
        }
    }
    cout << "Item : " << name << " not found " << endl;   
}
