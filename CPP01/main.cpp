#include "Zombie.hpp"

int main()
{
    Zombie *zombie = newZombie("Foo");
    zombie->announce();

    randomChump("Huu");
    delete zombie;
}