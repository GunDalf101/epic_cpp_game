#pragma once

#include "RPG.hpp"

class HP {
    private:
        int currentHealth;
        int maxHealth;
        int tempHealth;

    public:
        HP();
        HP(int currentHealth, int maxHealth, int tempHealth);
        ~HP();
        int getMaxHealth();
        int getCurrentHealth();
        int getTempHealth();
        void setMaxHealth(int maxHealth);
        void setCurrentHealth(int currentHealth);
        void setTempHealth(int tempHealth);
};