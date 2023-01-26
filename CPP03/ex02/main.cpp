#include "ClapTrap.hpp"
#include "FragTrap.hpp"


int main()
{
	FragTrap trap;
	FragTrap trap0("HEY");
	FragTrap trap1;
	FragTrap trap2("Jimmy");
	FragTrap trap3(trap2);

	trap = trap1;
	trap2.attack("HEY");
	trap0.attack("john");
	trap0.highFivesGuys();
	return (0);
}
