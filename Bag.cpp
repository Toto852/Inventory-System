#include <string>
#include <iostream>
#include "SellItem.cpp"


using namespace std;


    Item* pokeball = new Item("POKEBALL","RED","CATCH","IRON",10);
    Item* superball = new Item("SUPERBALL","BLUE","CATCH","IRON",5);
    Item* hyperball = new Item("HYPERBALL","YELLOW","CATCH","IRON",20);
    Item* masterball = new Item("MASTER BALL","PURPLE","CATCH","IRON",1);
    Item* timeball = new Item("TIME BALL","WHITE","CATCH","IRON",7);
    Item* fastball = new Item("FAST BALL","YELLOW BLUE","CATCH","IRON",3);

    const int MAX_SIZE = 99;
    Item* Inventory[MAX_SIZE] = {pokeball, superball, hyperball, masterball, timeball, fastball};   

   /* Inventory[1] = new Item("SUPERBALL","BLUE","CATCH","IRON",5);
    Inventory[2] = new Item("HYPERBALL","YELLOW","CATCH","IRON",20);
    Inventory[3] = new Item("MASTER BALL","PURPLE","CATCH","IRON",1);
    Inventory[4] = new Item("TIME BALL","WHITE","CATCH","IRON",7);
    Inventory[5] = new Item("FAST BALL","YELLOW BLUE","CATCH","IRON",3);*/
