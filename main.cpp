#include "Player.h"
#include "Item.h"
#include <iostream>

using namespace std;

int main() {
    Player hero;

    cout << endl;
    cout << "--- Adding items to hero's inventory ---" << endl;

    Item sword("Sword", 10);
    Item shield("Shield", 15);
    Item potion("Health Potion", 5);

    hero.addItem(sword);
    hero.addItem(shield);

    cout << endl;
    cout << "--- Hero's Inventory ---" << endl;
    hero.showInventory();

    cout << endl;
    cout << "Total items added to inventories: " << Item::getTotalItems() << endl;
    cout << endl;

    return 0;
}
