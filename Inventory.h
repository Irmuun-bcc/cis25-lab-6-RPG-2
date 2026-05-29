#ifndef INVENTORY_H
#define INVENTORY_H

#include "Item.h"
#include <string>

class Inventory {
    private:
        Item* items;
        int capacity;
        int itemCount;
        std::string ownerName;

    public:
        Inventory(int capacity, std::string ownerName = "Unknown");
        ~Inventory();

        bool addItem(const Item& item);
        void display() const;
};

#endif
