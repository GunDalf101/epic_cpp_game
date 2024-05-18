#include "Hp.hpp"

HP::HP() {
    // Constructor
}


HP::HP(int currentHealth, int maxHealth, int tempHealth) {
    this->currentHealth = currentHealth;
    this->maxHealth = maxHealth;
    this->tempHealth = tempHealth;
}

HP::~HP() {
    // Destructor
}

int HP::getMaxHealth() {
    return maxHealth;
}

int HP::getCurrentHealth() {
    return currentHealth;
}

int HP::getTempHealth() {
    return tempHealth;
}

void HP::setMaxHealth(int maxHealth) {
    this->maxHealth = maxHealth;
}

void HP::setCurrentHealth(int currentHealth) {
    this->currentHealth = currentHealth;
}

void HP::setTempHealth(int tempHealth) {
    this->tempHealth = tempHealth;
}