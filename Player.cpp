#include "Player.h"
#include <iostream>

using namespace std;

Player::Player() : inventory(10, "Hero") {
    name = "Hero";
    health = 100;
    maxHealth = 100;
    attackPower = 10;
    cout << "Default constructor called for Player." << endl;
}

Player::Player(string name, int health) : inventory(10, name) {
    this->name = name;
    this->health = health;
    maxHealth = health;
    attackPower = 10;
    cout << "Overloaded constructor called for Player." << endl;
}

Player::~Player() {
    cout << "Player " << name << " has been destroyed." << endl;
}

void Player::takeDamage(int damage) {
    health -= damage;
    if (health < 0) {
        health = 0;
    }
    if (health == 0) {
        cout << name << " falls to the ground, defeated." << endl;
    }
}

string Player::getName() const {
    return name;
}

int Player::getHealth() const {
    return health;
}

int Player::getMaxHealth() const {
    return maxHealth;
}

int Player::getAttackPower() const {
    return attackPower;
}

void Player::displayStatus() const {
    cout << "[" << name << "] - HP: " << health << "/" << maxHealth << endl;
}

void Player::showInventory() const {
    inventory.display();
}

void Player::addItem(const Item& item) {
    if (inventory.addItem(item)) {
        cout << "Hero found a ";
        item.display();
    }
}
