#include <iostream>
#include <vector>
#include <string>
#include "Inventory.cpp"

using namespace std;

int main() {
    
    Inventory bag;
    bag.addItem( new Weapon("Wood sword", "Weapon", "Wood", 10, 5) );
    bag.displayInventory();
    bag.removeQuanity("Wood sword", 5);
    bag.displayInventory();


    return 0;
}

