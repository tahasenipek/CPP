#include "Zombie.hpp"

int main()
{
    int N = 5;
    Zombie *zombie = zombieHorde(N, "Foo");
    
    for(int i= 0; i < N; i++)
        zombie[i].announce();
    
    delete[] zombie;
}