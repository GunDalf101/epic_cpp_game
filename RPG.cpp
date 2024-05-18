#include "RPG.hpp"

RPG::RPG(std::string name) {
    this->name = name;
}

void RPG::getName() {
    std::cout << "Name: " << name << std::endl;
}

void RPG::run() {
    std::cout << "Running..." << std::endl;
}