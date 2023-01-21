#include "Harl.hpp"


int main(int ac, char **av)
{
    Harl    harl;

    if (ac != 2)
    {
        std::cout << "Wrong input please enter (INFO, WARNİNG, ERROR, DEBUG)" << std::endl;
        return (1);
    }
    harl.dissatisfeid(std::string(av[1]));
}