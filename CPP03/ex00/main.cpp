#include "ClapTrap.hpp"


int main()
{
    ClapTrap    clap00("Helly");
    ClapTrap    clap01("Jimmy");
    ClapTrap    clap02(clap00);

    clap02.attack("NOOOO");
    clap00.attack("Jimmy");
    clap01.attack("Helly");
    clap00.takeDamage(5);
    clap00.beRepaired(4);
    clap02.attack("NOOOO");
    clap02 = clap00;
    clap00.attack("Jimmy");
    clap02.attack("NOOOO");
    clap02.attack("NOOOO");
    clap02.attack("NOOOO");
    clap00.attack("Jimmy");
    clap00.attack("Jimmy");
    clap00.attack("Jimmy");
    clap00.attack("Jimmy");
    clap01.attack("Helly");
    clap01.beRepaired(10);
	std::cout << std::endl;
    
	return (0);
}




    /* ClapTrap crt00("Jimmy");
    ClapTrap crt01("Helly");
    
    crt00.attack("Helly");
    crt01.attack("Jimmy");
    crt00.takeDamage(3); */