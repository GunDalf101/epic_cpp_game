#include "Hp.hpp"

HP::HP() {
    // Constructor
}


HP::HP(hitPointsType currentHealth, hitPointsType maxHealth, hitPointsType tempHealth) {
    this->currentHealth = currentHealth;
    this->maxHealth = maxHealth;
    this->tempHealth = tempHealth;
}

HP::~HP() {
    // Destructor
}

hitPointsType HP::getMaxHealth() {
    return maxHealth;
}

hitPointsType HP::getCurrentHealth() {
    return currentHealth;
}

hitPointsType HP::getTempHealth() {
    return tempHealth;
}

void HP::setMaxHealth(hitPointsType maxHealth) {
    this->maxHealth = maxHealth;
}

void HP::setCurrentHealth(hitPointsType currentHealth) {
    this->currentHealth = currentHealth;
}

void HP::setTempHealth(hitPointsType tempHealth) {
    this->tempHealth = tempHealth;
}