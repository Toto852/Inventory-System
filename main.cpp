#include <string>
#include <iostream>
//#include "SellItem.cpp"
#include "Bag.cpp"


using namespace std;


int main() {

    /*
    const int MAX_SIZE = 10;
    Item* item1[MAX_SIZE] = { new Item(), new Item(), new Item() };
    item1[2]->setName("Imotou");
    item1[1]->setName("FUKUSHIMA");
    item1[0]->setName("NAGAZAKI");
    
    cout << "Item name : " << item1[0]->getName() << endl;
    cout << "Item name : " << item1[1]->getName() << endl;
    cout << "Item name : " << item1[2]->getName() << endl;

    
    cout << " ------------DELETE--------------" << endl;

    for (int i = 0; i < MAX_SIZE; i++)
    {
        delete item1[i];
    }
    cout << " DELETE COMPLETE " << endl;


    cout << "------------ NEW ITEM ---------------" << endl;

    item1[5] = new Item();
    item1[5]->setName("BAKA ANE");
    item1[5]->print();  */
 
    /*
    SellItem* item1 = new SellItem();
    item1->setSellingPrice(99);
    item1->print();
    item1->Sell(); */
    

    SellItem* item1 = new SellItem();  
    item1->setName("POKEBALL");
    item1->setColor("RED"); 
    item1->setFeatures("Catch"); 
    item1->setMaterial("Iron"); 
    item1->setQuantity(10); 
    item1->setSellingPrice(5);
    item1->print();
    
    cout << "--------------- Sell Item to Item --------------- " << endl;

    Item* item2 = item1;
    item2->print();
    // item2->getSellingPrice();     error: 'class Item' has no member named 'getSellingPrice'


    cout << "------------ New Item -------------------" << endl;

    Item* item3 = new Item();  
    item3->setName("SUPERBALL");
    item3->setColor("BLUE"); 
    item3->setFeatures("Catch"); 
    item3->setMaterial("Iron"); 
    item3->setQuantity(15); 
    item3->print();

    
    cout << "--------------- Sell Item to Item --------------- " << endl;

    //SellItem* item4 = new SellItem(item3,10);
    SellItem* item4 = new SellItem(item3, 15.0);
    item4->print();

    cout << "------------ New Item -------------------" << endl;

    Item ok = Item();
    ok.setName("HYPER BALL");
    ok.setColor("YELLOW");
    ok.setFeatures("CATCH");
    ok.setMaterial("IRON");
    ok.setQuantity(5);
    ok.print();
        
    cout << "--------------- Sell Item to Item --------------- " << endl;

    //SellItem* item4 = new SellItem(item3,10);
    SellItem hpb = SellItem(ok, 15.0);
    hpb.print();

    cout << "--------------- Item from Bag --------------- " << endl;
    cout << "--------------- Item 1 ---------------------- " << endl;
    pokeball->print();
    cout << "--------------- Item 2 ---------------------- " << endl;
    superball->print();
    cout << "--------------- Item 3 ----------------------  " << endl;
    hyperball->print();
    

    /*
    SellItem* item4 = item3;   error: invalid conversion from 'Item*' to 'SellItem*' [-fpermissive]
    item4->print(); */



    /*
    cout << "------ downcasting ------"<< endl;   
    MovablePoint* ptrMP1 = (MovablePoint*) ptrP1;
    MovablePoint* ptrMP2 = dynamic_cast<MovablePoint*>(ptrP1);
    // downcast requires explicit casting operator*/
    
    
    return 0;
}