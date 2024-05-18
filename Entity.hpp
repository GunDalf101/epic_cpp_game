#pragma once

#include "Hp.hpp"

class Entity {
    private:
        std::string name;
        HP hp;

    public:
        Entity(std::string name, HP hp);
        std::string getName();
        HP getHp();
        void setName(std::string name);
        void setHp(HP hp);
};