#include "Entity.hpp"

Entity::Entity(std::string name, HP hp) {
    this->name = name;
    this->hp = hp;
}

std::string Entity::getName() {
    return name;
}

HP Entity::getHp() {
    return hp;
}

void Entity::setName(std::string name) {
    this->name = name;
}

void Entity::setHp(HP hp) {
    this->hp = hp;
}