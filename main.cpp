#include <iostream>
#include <vector>
#include <string>
#include "Inventory.cpp"

using namespace std;

void InventoryMenu();
Inventory bag;

int main() {
    
    
    bag.addItem( new Weapon("Wood sword", "Weapon", "Wood", 3, 5) );
    bag.addItem( new Shield("Wood shield", "Shield", "Wood", 5, 5) );
    bag.addItem( new Consumable("Potion", "Consumable", "Alchemy", 10, "Small heal") );

    InventoryMenu();

    return 0;
}


void InventoryMenu(){

    int choice;
    do{
        cout << "\n=== INVENTORY Menu ===" << endl;
        cout << "1. Add an item" << endl;
        cout << "2. Remove an item" << endl;
        cout << "3. Display Inventory" << endl;
        cout << "4. Add quantity to an Item" << endl;
        cout << "5. Remove quantity to an Item" << endl;    
        cout << "6. Clear inventory" << endl;
        cout << "7. Exit" << endl;
        cout << " Take your choice : ";
        cin >> choice;
        cin.ignore();

        if (choice == 1) {

            string name, category,material,effect;
            
            cout << " \n Item name : ";
            getline(cin,name);

            cout << " Item category (Weapon / Defense / Consumable) : ";
            cin >> category;
            if (category != "Weapon" && category != "Defense" && category != "Consumable") {
                cout << "Error: Invalid category. Please enter Weapon, Defense, or Consumable. \n" <<endl;
                return;
            }

            cout << " Item material : ";
            cin >> material;

            int quantity, damage, defense;
            cout << " Item quantity : ";
            cin >> quantity;
            if (cin.fail()) {
                cin.clear(); 
                cin.ignore(); 
                cout << "Error: You must enter a valid number. \n" << endl;
                return;
            }

            cin.ignore();

            if (category == "Weapon"){
                cout << " Item damage : ";
                cin >> damage;
                bag.addItem( new Weapon(name,category,material,quantity,damage) );
            }
            else if (category == "Defense"){
                cout << " Item defense : ";
                cin >> defense;
                bag.addItem( new Shield(name,category,material,quantity,defense) );
            }
            else if (category == "Consumable"){
                cout << " Item effect : ";
                getline(cin,effect);
                bag.addItem( new Consumable(name,category,material,quantity,effect) );
            }
            //else cout << " Invalid category " << endl;
        }
        else if (choice == 2){
            string name;
            cout << "\n Name of the item to be remove : ";
            //cin.ignore();
            getline(cin,name);
            bag.removeItem(name);
        }
        else if (choice == 3){
            bag.displayInventory();
        }
        else if (choice == 4){
            string name;
            int quantity;
            cout << "\n Name of the item : ";
            //cin.ignore();
            getline(cin,name);
            cout << " Quantity to add : ";
            cin >> quantity;
            bag.addQuanity(name,quantity);
        }
        else if (choice == 5){
            string name;
            int quantity;
            cout << "\n Name of the item : ";
            getline(cin,name);
            cout << " Quantity to remove : ";
            cin >> quantity;
            bag.removeQuanity(name,quantity);
        }
        else if (choice == 6){
            char answer;
            cout << " Do you want to clear the inventory ? (Y or N) "<< endl;
            cout << " Answer : ";
            cin >> answer;
            if (answer == 'Y') bag.clearInventory();
            else cout << " Cancel clear inventory "<< endl;
            
        }
        else if (choice != 7) cout << " Function not implemented " << endl;

    } while (choice != 7);
    cout << " Exit program " << endl;

}