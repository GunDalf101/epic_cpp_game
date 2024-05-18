#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include "typedefs.hpp"

class RPG {
    private:
        std::string name;
    public:
        RPG(std::string name);
        void getName();
        void run();
};