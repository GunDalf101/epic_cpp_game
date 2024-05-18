#pragma once

#include "RPG.hpp"

class HP {
    private:
        hitPointsType currentHealth;
        hitPointsType maxHealth;
        hitPointsType tempHealth;

    public:
        HP();
        HP(hitPointsType currentHealth, hitPointsType maxHealth, hitPointsType tempHealth);
        ~HP();
        hitPointsType getMaxHealth();
        hitPointsType getCurrentHealth();
        hitPointsType getTempHealth();
        void setMaxHealth(hitPointsType maxHealth);
        void setCurrentHealth(hitPointsType currentHealth);
        void setTempHealth(hitPointsType tempHealth);
};