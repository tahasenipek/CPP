#include "Rpn.hpp"

int main(int argc, char* argv[]) {
    if (argc != 2) {
        std::cout << "Usage: Rpn_calculator <expression>" << std::endl;
        return 1;
    }
    Rpn rpn;
    rpn.calculate((std::string)argv[1]);
    return 0;
}