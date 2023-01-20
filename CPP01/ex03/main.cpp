#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
    Weapon clup = Weapon("crude spiked club");
    
    HumanA bob("Bob", clup);
    bob.attack();

}