#include <iostream>
#include <vector>
#include <string>
#include "Inventory.hpp"

using namespace std;


void Inventory::addItem(Item* item) {
    for (int i = 0; i < inventory.size() ; i++)
    {
        if ( inventory[i]->getName() == item->getName() )
        {
            cout << "\n Same item already on the inventory " << endl;  
            return;  
        }
    }
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


void Inventory::clearInventory() {
    for (int i = 0; i < inventory.size() ; i++)
    {
        delete inventory[i];
    }
    inventory.clear();
    cout << "\n Clear inventory complete " << endl;
}


void Inventory::displayInventory() const {

    if (inventory.empty() ){
        cout << "\n Inventory is empty " << endl;
    }
    else 
    {
        for (int i = 0; i < inventory.size(); i++)
        {
            cout << "\n----------- Item " << i+1 << " --------------" << endl;
            inventory[i]->display();
        }   
    }
}

void Inventory::addQuanity(const string& name, const int quantity) {
    for (int i = 0; i < inventory.size() ; i++)
    {
        if ( inventory[i]->getName() == name )
        {
            inventory[i]->increaseQuantity(quantity);
            cout << "Increase quantity by " << quantity << " of " <<name << " Complete " << endl;  
            return;  
        }
    }
    cout << "Item : " << name << " not found " << endl;  
}

void Inventory::removeQuanity(const string& name, const int quantity) {
    for (int i = 0; i < inventory.size() ; i++)
    {
        if ( inventory[i]->getName() == name )
        {
            cout << "\n--------------------------" <<endl;
            cout << "           Item            : " << name << endl;
            cout << "     Remaining quantity    : " << inventory[i]->getQuantity() << endl;
            cout << "  Quantity want to remove  : " << quantity << endl;
            if ( quantity > inventory[i]->getQuantity() )
            {
                cout << "\n--------------------------" <<endl;
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
                    cout << "\n--------------------------" <<endl;
                    cout << "Quantity of " << name << " is the same."<< endl;
                    return;
                }
            }
            else 
            {
                inventory[i]->setQuantity( inventory[i]->getQuantity()-quantity );
                cout << "\n--------------------------" <<endl;
                cout << "Quantity remove successfully " << endl;
                cout << "     Remaining quantity    : " << inventory[i]->getQuantity() << endl;
                return;
            }
        }
    }
    cout << "Item : " << name << " not found " << endl;   
}
